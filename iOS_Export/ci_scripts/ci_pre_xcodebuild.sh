#!/bin/sh
set -e

echo "=== AVPRO PRE-BUILD CHECK ==="

PBXPROJECT="Unity-iPhone.xcodeproj/project.pbxproj"
AVPRO_PATH="Frameworks/AVProVideo/Runtime/Plugins/iOS/AVProVideo.framework"

echo "Current directory:"
pwd

echo "Checking AVPro framework folder..."
if [ ! -d "$AVPRO_PATH" ]; then
  echo "ERROR: AVProVideo.framework folder is missing:"
  echo "$AVPRO_PATH"
  exit 1
fi

echo "Checking project.pbxproj for Embed Frameworks entry..."
if ! grep -q "AVProVideo.framework in Embed Frameworks" "$PBXPROJECT"; then
  echo "ERROR: AVProVideo.framework is NOT in Embed Frameworks."
  echo "It may be linked, but it will not be copied into the final .app."
  exit 1
fi

echo "Checking CodeSignOnCopy..."
if ! grep -q "CodeSignOnCopy" "$PBXPROJECT"; then
  echo "ERROR: No CodeSignOnCopy found in project.pbxproj."
  exit 1
fi

echo "AVPro pre-build check passed."
echo "=== END AVPRO PRE-BUILD CHECK ==="