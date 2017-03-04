template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } 
namespace UI { class CanvasGroup; } 
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class DirectorPlayer; template <> void RegisterClass<DirectorPlayer>();
class Animator; template <> void RegisterClass<Animator>();
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; template <> void RegisterClass<GUITexture>();
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; template <> void RegisterClass<Skybox>();
class Terrain; 
class WindZone; 
namespace UI { class CanvasRenderer; } 
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; 
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; template <> void RegisterClass<ParticleAnimator>();
class ParticleEmitter; template <> void RegisterClass<ParticleEmitter>();
class EllipsoidParticleEmitter; template <> void RegisterClass<EllipsoidParticleEmitter>();
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; template <> void RegisterClass<ParticleRenderer>();
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; 
class SpriteRenderer; 
class TrailRenderer; template <> void RegisterClass<TrailRenderer>();
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; 
class AnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class CubemapArray; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class WebCamTexture; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 72 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. Renderer
	RegisterClass<Renderer>();
	//6. GUILayer
	RegisterClass<GUILayer>();
	//7. Light
	RegisterClass<Light>();
	//8. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//9. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//10. Transform
	RegisterClass<Transform>();
	//11. Shader
	RegisterClass<Shader>();
	//12. NamedObject
	RegisterClass<NamedObject>();
	//13. Material
	RegisterClass<Material>();
	//14. Rigidbody
	RegisterClass<Rigidbody>();
	//15. Collider
	RegisterClass<Collider>();
	//16. AudioClip
	RegisterClass<AudioClip>();
	//17. SampleClip
	RegisterClass<SampleClip>();
	//18. AudioSource
	RegisterClass<AudioSource>();
	//19. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//20. Animator
	RegisterClass<Animator>();
	//21. DirectorPlayer
	RegisterClass<DirectorPlayer>();
	//22. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//23. ParticleEmitter
	RegisterClass<ParticleEmitter>();
	//24. ParticleAnimator
	RegisterClass<ParticleAnimator>();
	//25. ParticleRenderer
	RegisterClass<ParticleRenderer>();
	//26. Texture2D
	RegisterClass<Texture2D>();
	//27. Texture
	RegisterClass<Texture>();
	//28. EllipsoidParticleEmitter
	RegisterClass<EllipsoidParticleEmitter>();
	//29. MeshCollider
	RegisterClass<MeshCollider>();
	//30. CharacterController
	RegisterClass<CharacterController>();
	//31. PreloadData
	RegisterClass<PreloadData>();
	//32. Cubemap
	RegisterClass<Cubemap>();
	//33. Texture3D
	RegisterClass<Texture3D>();
	//34. Texture2DArray
	RegisterClass<Texture2DArray>();
	//35. RenderTexture
	RegisterClass<RenderTexture>();
	//36. Mesh
	RegisterClass<Mesh>();
	//37. Sprite
	RegisterClass<Sprite>();
	//38. TimeManager
	RegisterClass<TimeManager>();
	//39. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//40. GameManager
	RegisterClass<GameManager>();
	//41. AudioManager
	RegisterClass<AudioManager>();
	//42. InputManager
	RegisterClass<InputManager>();
	//43. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//44. QualitySettings
	RegisterClass<QualitySettings>();
	//45. TextAsset
	RegisterClass<TextAsset>();
	//46. PhysicsManager
	RegisterClass<PhysicsManager>();
	//47. TagManager
	RegisterClass<TagManager>();
	//48. ScriptMapper
	RegisterClass<ScriptMapper>();
	//49. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//50. MonoScript
	RegisterClass<MonoScript>();
	//51. MonoManager
	RegisterClass<MonoManager>();
	//52. PlayerSettings
	RegisterClass<PlayerSettings>();
	//53. BuildSettings
	RegisterClass<BuildSettings>();
	//54. ResourceManager
	RegisterClass<ResourceManager>();
	//55. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//56. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//57. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//58. LevelGameManager
	RegisterClass<LevelGameManager>();
	//59. MeshRenderer
	RegisterClass<MeshRenderer>();
	//60. MeshFilter
	RegisterClass<MeshFilter>();
	//61. Skybox
	RegisterClass<Skybox>();
	//62. BoxCollider
	RegisterClass<BoxCollider>();
	//63. AudioListener
	RegisterClass<AudioListener>();
	//64. TrailRenderer
	RegisterClass<TrailRenderer>();
	//65. RenderSettings
	RegisterClass<RenderSettings>();
	//66. Animation
	RegisterClass<Animation>();
	//67. FlareLayer
	RegisterClass<FlareLayer>();
	//68. GUITexture
	RegisterClass<GUITexture>();
	//69. GUIElement
	RegisterClass<GUIElement>();
	//70. SphereCollider
	RegisterClass<SphereCollider>();
	//71. LightmapSettings
	RegisterClass<LightmapSettings>();

}
