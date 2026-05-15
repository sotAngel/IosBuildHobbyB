#!/bin/sh

echo "=== FINAL APP FRAMEWORK CHECK ==="

echo "Current path:"
pwd

echo "Searching for built .app..."
APP_PATH=$(find "$CI_DERIVED_DATA_PATH" -name "*.app" -type d | head -n 1)

echo "APP_PATH=$APP_PATH"

if [ -z "$APP_PATH" ]; then
    echo "ERROR: No .app found."
    exit 1
fi

echo "Listing app Frameworks folder:"
ls -la "$APP_PATH/Frameworks" || true

echo "Checking AVProVideo.framework:"
ls -la "$APP_PATH/Frameworks/AVProVideo.framework" || true

echo "Checking AVProVideo binary:"
if [ -f "$APP_PATH/Frameworks/AVProVideo.framework/AVProVideo" ]; then
    echo "OK: AVProVideo binary exists in final app."
else
    echo "ERROR: AVProVideo binary is missing from final app."
    exit 1
fi

echo "=== END FINAL APP FRAMEWORK CHECK ==="