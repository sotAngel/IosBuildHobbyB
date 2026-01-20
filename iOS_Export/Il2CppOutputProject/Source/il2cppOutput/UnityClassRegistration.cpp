extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Director();
	RegisterModule_Director();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_GraphicsStateCollectionSerializer();
	RegisterModule_GraphicsStateCollectionSerializer();

	void RegisterModule_Grid();
	RegisterModule_Grid();

	void RegisterModule_HierarchyCore();
	RegisterModule_HierarchyCore();

	void RegisterModule_HotReload();
	RegisterModule_HotReload();

	void RegisterModule_AssetBundle();
	RegisterModule_AssetBundle();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_InputForUI();
	RegisterModule_InputForUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Properties();
	RegisterModule_Properties();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_ScreenCapture();
	RegisterModule_ScreenCapture();

	void RegisterModule_SpriteShape();
	RegisterModule_SpriteShape();

	void RegisterModule_SpriteMask();
	RegisterModule_SpriteMask();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_Tilemap();
	RegisterModule_Tilemap();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UnityAnalyticsCommon();
	RegisterModule_UnityAnalyticsCommon();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityWebRequestAssetBundle();
	RegisterModule_UnityWebRequestAssetBundle();

	void RegisterModule_VFX();
	RegisterModule_VFX();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshData; template <> void RegisterUnityClass<NavMeshData>(const char*);
class NavMeshObstacle; template <> void RegisterUnityClass<NavMeshObstacle>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; template <> void RegisterUnityClass<AvatarMask>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AssetBundle; template <> void RegisterUnityClass<AssetBundle>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioDistortionFilter; template <> void RegisterUnityClass<AudioDistortionFilter>(const char*);
class AudioEchoFilter; template <> void RegisterUnityClass<AudioEchoFilter>(const char*);
class AudioFilter; template <> void RegisterUnityClass<AudioFilter>(const char*);
class AudioHighPassFilter; template <> void RegisterUnityClass<AudioHighPassFilter>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioLowPassFilter; template <> void RegisterUnityClass<AudioLowPassFilter>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioResource; template <> void RegisterUnityClass<AudioResource>(const char*);
class AudioReverbFilter; template <> void RegisterUnityClass<AudioReverbFilter>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BillboardRenderer; template <> void RegisterUnityClass<BillboardRenderer>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class Flare; template <> void RegisterUnityClass<Flare>(const char*);
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; template <> void RegisterUnityClass<LightProbeGroup>(const char*);
class LightProbeProxyVolume; template <> void RegisterUnityClass<LightProbeProxyVolume>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class Projector; template <> void RegisterUnityClass<Projector>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class RayTracingShader; template <> void RegisterUnityClass<RayTracingShader>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class ShaderVariantCollection; template <> void RegisterUnityClass<ShaderVariantCollection>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; template <> void RegisterUnityClass<SortingGroup>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class PlayableDirector; template <> void RegisterUnityClass<PlayableDirector>(const char*);
class Grid; template <> void RegisterUnityClass<Grid>(const char*);
class GridLayout; template <> void RegisterUnityClass<GridLayout>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
namespace Unity { class FixedJoint; } template <> void RegisterUnityClass<Unity::FixedJoint>(const char*);
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PhysicsMaterial; template <> void RegisterUnityClass<PhysicsMaterial>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; template <> void RegisterUnityClass<CapsuleCollider2D>(const char*);
class CircleCollider2D; template <> void RegisterUnityClass<CircleCollider2D>(const char*);
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class CompositeCollider2D; template <> void RegisterUnityClass<CompositeCollider2D>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsMaterial2D; template <> void RegisterUnityClass<PhysicsMaterial2D>(const char*);
class PolygonCollider2D; template <> void RegisterUnityClass<PolygonCollider2D>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
class SpriteMask; template <> void RegisterUnityClass<SpriteMask>(const char*);
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class Tree; template <> void RegisterUnityClass<Tree>(const char*);
class TerrainCollider; template <> void RegisterUnityClass<TerrainCollider>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Tilemap; template <> void RegisterUnityClass<Tilemap>(const char*);
class TilemapRenderer; template <> void RegisterUnityClass<TilemapRenderer>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class UIRenderer; template <> void RegisterUnityClass<UIRenderer>(const char*);
class VFXManager; template <> void RegisterUnityClass<VFXManager>(const char*);
class VFXRenderer; template <> void RegisterUnityClass<VFXRenderer>(const char*);
class VisualEffect; template <> void RegisterUnityClass<VisualEffect>(const char*);
class VisualEffectAsset; template <> void RegisterUnityClass<VisualEffectAsset>(const char*);
class VisualEffectObject; template <> void RegisterUnityClass<VisualEffectObject>(const char*);
class WheelCollider; template <> void RegisterUnityClass<WheelCollider>(const char*);
class VideoClip; template <> void RegisterUnityClass<VideoClip>(const char*);
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);
class WindZone; template <> void RegisterUnityClass<WindZone>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 145 non stripped classes
	//0. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//1. NavMeshData
	RegisterUnityClass<NavMeshData>("AI");
	//2. NavMeshObstacle
	RegisterUnityClass<NavMeshObstacle>("AI");
	//3. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//4. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//5. Animation
	RegisterUnityClass<Animation>("Animation");
	//6. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//7. Animator
	RegisterUnityClass<Animator>("Animation");
	//8. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//9. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//10. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//11. AvatarMask
	RegisterUnityClass<AvatarMask>("Animation");
	//12. Motion
	RegisterUnityClass<Motion>("Animation");
	//13. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//14. AssetBundle
	RegisterUnityClass<AssetBundle>("AssetBundle");
	//15. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//16. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//17. AudioDistortionFilter
	RegisterUnityClass<AudioDistortionFilter>("Audio");
	//18. AudioEchoFilter
	RegisterUnityClass<AudioEchoFilter>("Audio");
	//19. AudioFilter
	RegisterUnityClass<AudioFilter>("Audio");
	//20. AudioHighPassFilter
	RegisterUnityClass<AudioHighPassFilter>("Audio");
	//21. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//22. AudioLowPassFilter
	RegisterUnityClass<AudioLowPassFilter>("Audio");
	//23. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//24. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//25. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//26. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//27. AudioResource
	RegisterUnityClass<AudioResource>("Audio");
	//28. AudioReverbFilter
	RegisterUnityClass<AudioReverbFilter>("Audio");
	//29. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//30. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//31. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//32. BillboardRenderer
	RegisterUnityClass<BillboardRenderer>("Core");
	//33. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//34. Camera
	RegisterUnityClass<Camera>("Core");
	//35. Component
	RegisterUnityClass<Unity::Component>("Core");
	//36. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//37. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//38. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//39. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//40. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//41. Flare
	RegisterUnityClass<Flare>("Core");
	//42. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//43. GameManager
	RegisterUnityClass<GameManager>("Core");
	//44. GameObject
	RegisterUnityClass<GameObject>("Core");
	//45. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//46. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//47. InputManager
	RegisterUnityClass<InputManager>("Core");
	//48. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//49. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//50. Light
	RegisterUnityClass<Light>("Core");
	//51. LightProbeGroup
	RegisterUnityClass<LightProbeGroup>("Core");
	//52. LightProbeProxyVolume
	RegisterUnityClass<LightProbeProxyVolume>("Core");
	//53. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//54. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//55. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//56. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//57. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//58. Material
	RegisterUnityClass<Material>("Core");
	//59. Mesh
	RegisterUnityClass<Mesh>("Core");
	//60. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//61. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//62. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//63. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//64. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//65. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//66. Object
	//Skipping Object
	//67. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//68. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//69. Projector
	RegisterUnityClass<Projector>("Core");
	//70. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//71. RayTracingShader
	RegisterUnityClass<RayTracingShader>("Core");
	//72. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//73. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//74. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//75. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//76. Renderer
	RegisterUnityClass<Renderer>("Core");
	//77. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//78. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//79. Shader
	RegisterUnityClass<Shader>("Core");
	//80. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//81. ShaderVariantCollection
	RegisterUnityClass<ShaderVariantCollection>("Core");
	//82. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//83. Skybox
	RegisterUnityClass<Skybox>("Core");
	//84. SortingGroup
	RegisterUnityClass<SortingGroup>("Core");
	//85. Sprite
	RegisterUnityClass<Sprite>("Core");
	//86. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//87. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//88. TagManager
	RegisterUnityClass<TagManager>("Core");
	//89. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//90. Texture
	RegisterUnityClass<Texture>("Core");
	//91. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//92. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//93. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//94. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//95. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//96. Transform
	RegisterUnityClass<Transform>("Core");
	//97. PlayableDirector
	RegisterUnityClass<PlayableDirector>("Director");
	//98. Grid
	RegisterUnityClass<Grid>("Grid");
	//99. GridLayout
	RegisterUnityClass<GridLayout>("Grid");
	//100. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//101. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//102. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//103. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//104. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//105. Collider
	RegisterUnityClass<Collider>("Physics");
	//106. FixedJoint
	RegisterUnityClass<Unity::FixedJoint>("Physics");
	//107. Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//108. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//109. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//110. PhysicsMaterial
	RegisterUnityClass<PhysicsMaterial>("Physics");
	//111. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//112. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//113. SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//114. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//115. CapsuleCollider2D
	RegisterUnityClass<CapsuleCollider2D>("Physics2D");
	//116. CircleCollider2D
	RegisterUnityClass<CircleCollider2D>("Physics2D");
	//117. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//118. CompositeCollider2D
	RegisterUnityClass<CompositeCollider2D>("Physics2D");
	//119. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//120. PhysicsMaterial2D
	RegisterUnityClass<PhysicsMaterial2D>("Physics2D");
	//121. PolygonCollider2D
	RegisterUnityClass<PolygonCollider2D>("Physics2D");
	//122. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//123. SpriteMask
	RegisterUnityClass<SpriteMask>("SpriteMask");
	//124. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//125. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//126. Tree
	RegisterUnityClass<Tree>("Terrain");
	//127. TerrainCollider
	RegisterUnityClass<TerrainCollider>("TerrainPhysics");
	//128. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//129. TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//130. Tilemap
	RegisterUnityClass<Tilemap>("Tilemap");
	//131. TilemapRenderer
	RegisterUnityClass<TilemapRenderer>("Tilemap");
	//132. Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//133. CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//134. CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//135. UIRenderer
	RegisterUnityClass<UIRenderer>("UIElements");
	//136. VFXManager
	RegisterUnityClass<VFXManager>("VFX");
	//137. VFXRenderer
	RegisterUnityClass<VFXRenderer>("VFX");
	//138. VisualEffect
	RegisterUnityClass<VisualEffect>("VFX");
	//139. VisualEffectAsset
	RegisterUnityClass<VisualEffectAsset>("VFX");
	//140. VisualEffectObject
	RegisterUnityClass<VisualEffectObject>("VFX");
	//141. WheelCollider
	RegisterUnityClass<WheelCollider>("Vehicles");
	//142. VideoClip
	RegisterUnityClass<VideoClip>("Video");
	//143. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");
	//144. WindZone
	RegisterUnityClass<WindZone>("Wind");

}
