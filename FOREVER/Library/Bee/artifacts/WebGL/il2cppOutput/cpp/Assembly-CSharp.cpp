#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Rendering.Universal.Light2D[]
struct Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex[]
struct LightMeshVertexU5BU5D_t9DE3B9AD46622DA5866FC545286737925F4EBA53;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AtmosDontDestroy
struct AtmosDontDestroy_tFF61E01175ED860DFE59D817FEAD40FEA2452DE7;
// AttackColliderController
struct AttackColliderController_t3B309E6BBE2B1BF72BBFC8A0BD7C45AC0BE813DA;
// AttackColliderController1
struct AttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34;
// AttackEnd
struct AttackEnd_tE3D4DECA8B301E4F23A05EE8D69731181F8EF158;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// BoyWalkAnim
struct BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD;
// BunkazaiDontDestroy
struct BunkazaiDontDestroy_tC05FFC7F882799CB154A6AEF67B611CFA8AEE507;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DefeatEnemy
struct DefeatEnemy_tB034F887EC4B7602534EF5A0A93D449A0DDC0E4C;
// DefeatEnemy1
struct DefeatEnemy1_t1E828594344258400A4A3FEBF9DB129F750A9F2B;
// DefeatObject
struct DefeatObject_t671311F718029F3095C118B46B4DDB59B8C2AF4B;
// DefeatObject1
struct DefeatObject1_tA196356E50F2D278BA9BC06259267C7DBAE63AF7;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// EndingAnim
struct EndingAnim_t716A4CB5C06118BD0AA9ADA04376AF6184926649;
// EngineCollision
struct EngineCollision_tD5886ECAFF7EF6697F3FDECE27BD9FBA0203CEB5;
// ExtraAnim
struct ExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34;
// FactoryReset
struct FactoryReset_t088CCB3214CA63ECCC1B82F2CFC13F0833CF0C7F;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// ForeverDont
struct ForeverDont_t4E3AB6437703D484478668562637A5719AEB1381;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GirlCapturedAnim
struct GirlCapturedAnim_tE49279D2656AC27DF06C57F50604BD74E8EF6FB8;
// GirlWalkAnim
struct GirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_t8B327FA25AB9C1D8C585388D91DC4C08DD123020;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LifeLimit
struct LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A;
// LifeManager
struct LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A;
// UnityEngine.Rendering.Universal.Light2D
struct Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD;
// LonelyDontDestroy
struct LonelyDontDestroy_t49C1C64058151804BD2E589367F14B686165A66A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NarrationBehaviour
struct NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03;
// NarrationPlayableAsset
struct NarrationPlayableAsset_t306C1A782B39A252D9292985B31DDD20ABB8A78C;
// ObjCollision
struct ObjCollision_tEEE9DC77F8A0E485F9AE05B394DCFE67CE85C657;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Reload
struct Reload_tB3539521ADE4D4498E158FF5016D54E012E06080;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// SceneControll
struct SceneControll_tC3EECDA55DC14756D26FE8255E5CA4D27F76CFF3;
// SceneControll1
struct SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE;
// SceneControll10
struct SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0;
// SceneControll11
struct SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C;
// SceneControll12
struct SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981;
// SceneControll13
struct SceneControll13_tE0EC13912247294E452DD45AE63B71EF544EDFEB;
// SceneControll2
struct SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362;
// SceneControll3
struct SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133;
// SceneControll4
struct SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF;
// SceneControll5
struct SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B;
// SceneControll6
struct SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222;
// SceneControll7
struct SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383;
// SceneControll8
struct SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E;
// SceneControll9
struct SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SoundOption
struct SoundOption_tBB7CE8E47CF3CBCD485DF4FC193F72CBF80754BD;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// Stage1Anim
struct Stage1Anim_t6E5CDBB177EFD025F7DCD513FA6B8C7A77150A6A;
// Stage2Anim
struct Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F;
// Stage3Anim
struct Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3;
// Stage4Anim
struct Stage4Anim_tE1639F7EFF3C9F81A7EB20CEE075213620065B6E;
// StartButton
struct StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545;
// StoryManager
struct StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B;
// System.String
struct String_t;
// SwitchCollision
struct SwitchCollision_t30BB3AAC014A94231CC237C9FD9217DD930D01FB;
// SwitchCollision1
struct SwitchCollision1_t6A37EB2C204508A0B0188C3E53395176B5F5D9D4;
// SwitchCollision2
struct SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8;
// SwitchCollision3
struct SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4;
// SwitchCollision4
struct SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D;
// SwitchCollision5
struct SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9;
// SwitchCollision6
struct SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA;
// SwitchCollision7
struct SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Tutorial1Anim
struct Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79;
// TutorialAnim
struct TutorialAnim_t26C52CAE01088DFB27B30699E790A17CCD417674;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____53BFB09A8803B408833184310D7A89203A1665BF87CC3BDF75E5CD512C94352D_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A_5_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00899987F06AB9DF856C491E2F1A2C97BE8ED58F;
IL2CPP_EXTERN_C String_t* _stringLiteral041B6BA07DD147B97E55DD133A3FCBD97A972A45;
IL2CPP_EXTERN_C String_t* _stringLiteral04CDB86ABCF7DC9E25C64537A1AD074C4DEDE52A;
IL2CPP_EXTERN_C String_t* _stringLiteral04ECFE128DA26013CA327EEF70FA7DBC82E5F7B7;
IL2CPP_EXTERN_C String_t* _stringLiteral09DA551022AE508A5C260B7D63E34DFE4DC34858;
IL2CPP_EXTERN_C String_t* _stringLiteral0D79D3B1966EB7D44D51C865D91D54BC4E599F70;
IL2CPP_EXTERN_C String_t* _stringLiteral11D7FAAE063D6E3E942FF39AAFDEEC6A9A861150;
IL2CPP_EXTERN_C String_t* _stringLiteral1405C6F91C203137CD0097006AC7562D2963E4AF;
IL2CPP_EXTERN_C String_t* _stringLiteral14D50FB15D3553C45579FC77CBBB19F0DB0D1113;
IL2CPP_EXTERN_C String_t* _stringLiteral15F70541EF4CFB19FFFB0BFF8B082633FBE985D8;
IL2CPP_EXTERN_C String_t* _stringLiteral1AD7F794D6674C75B4B7823474DA9C76501AFFAE;
IL2CPP_EXTERN_C String_t* _stringLiteral1C925CD53E8A38948E52F9363B7FEDBDEF63B4BF;
IL2CPP_EXTERN_C String_t* _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F;
IL2CPP_EXTERN_C String_t* _stringLiteral25B8508EF42CF47665A2BAA4F7F52D971F54DF07;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6;
IL2CPP_EXTERN_C String_t* _stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE;
IL2CPP_EXTERN_C String_t* _stringLiteral49A13903ED2D1E2FB7298D14AE4191CD0A3870D4;
IL2CPP_EXTERN_C String_t* _stringLiteral4ACA0CB48F7AD1046074FCE12544191B2D46E536;
IL2CPP_EXTERN_C String_t* _stringLiteral4EEFAE8A1BCC3918CF49D6654B62075D198F9F10;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral6B246DA1ACB838C5E1656064C3FBC993F29C9556;
IL2CPP_EXTERN_C String_t* _stringLiteral6F05CCFA5D61E9513722E152662BB6C2A7E73A3E;
IL2CPP_EXTERN_C String_t* _stringLiteral73AB6F8E1B3FCDF7E97165EA5D9AC74FB83D8013;
IL2CPP_EXTERN_C String_t* _stringLiteral7BCCC52E6E3FB47128A11940A53C04B79505587A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral88C8EA98172AF7B096F2F5385A81BAD0729D4898;
IL2CPP_EXTERN_C String_t* _stringLiteral8C098A97DD96B6CA2DA09665909BE5FEE4AEF826;
IL2CPP_EXTERN_C String_t* _stringLiteral8D75839F7EE2FBF5783870F5CB50ABAFB2CEA325;
IL2CPP_EXTERN_C String_t* _stringLiteral8DF270E89DA1217142D3889D410647EFC8CC79A9;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB99CAFEC9AC4A422CF490876DCA2EC0188EC5D;
IL2CPP_EXTERN_C String_t* _stringLiteral96645236735E5DC831F4A9D09F51E3B1297595A8;
IL2CPP_EXTERN_C String_t* _stringLiteral99576FE1A46D4277A38DBE67FE2C9B89C57CE589;
IL2CPP_EXTERN_C String_t* _stringLiteral9A34A7C1EEA7328577EA7F70709DED6D3BADA456;
IL2CPP_EXTERN_C String_t* _stringLiteral9AF13E20ACDD98EE460594C3DFF58E32B2B8FEF1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E5DED8640E24BD1CFFB1EC4C55B09CCA060BD87;
IL2CPP_EXTERN_C String_t* _stringLiteral9EC7BF17EC763D06EE3BEF95BC743C8201BB0DC3;
IL2CPP_EXTERN_C String_t* _stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE;
IL2CPP_EXTERN_C String_t* _stringLiteralA4E00516AA1044641ECB441A0FFFCD06D99165DE;
IL2CPP_EXTERN_C String_t* _stringLiteralA6883F9BDB242711488E76B16F706EED813419FD;
IL2CPP_EXTERN_C String_t* _stringLiteralA97C9D22E1E6996C2412AD51DB09E3201D1E3424;
IL2CPP_EXTERN_C String_t* _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568;
IL2CPP_EXTERN_C String_t* _stringLiteralAEFCBFCAA035B5142AA873EBFDA623978C99850C;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB37B7A484ECC82B71012534656294AB04A1BE628;
IL2CPP_EXTERN_C String_t* _stringLiteralB7D4A6C812081088DFB2E64BF9DFF5806227CED4;
IL2CPP_EXTERN_C String_t* _stringLiteralBA83DB5A980FBE2B5ED8E19D69F81E0DD3C2BF85;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D7DE069B48DC693967E0FECB75D31F05DB35E4;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39;
IL2CPP_EXTERN_C String_t* _stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274;
IL2CPP_EXTERN_C String_t* _stringLiteralD9EE5AF5B4EB10F18968FD4043D831AFE5F501EC;
IL2CPP_EXTERN_C String_t* _stringLiteralDD3C385B9782E97550460E3BE80B85784E172824;
IL2CPP_EXTERN_C String_t* _stringLiteralDE6613FF2F4512336AADC93EEA583737F1A8A7E6;
IL2CPP_EXTERN_C String_t* _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044;
IL2CPP_EXTERN_C String_t* _stringLiteralEB7132D74DB46B6EB3B1E427D14967EBE1121775;
IL2CPP_EXTERN_C String_t* _stringLiteralF16545FEE2A7CBB2699FA0B96CB7E103B27CF1EC;
IL2CPP_EXTERN_C String_t* _stringLiteralF1CD80D83F09B1873BCA3420E45DE736C511493F;
IL2CPP_EXTERN_C String_t* _stringLiteralF5E930960FCA583F1461F0C39DC95CD5AC80DC60;
IL2CPP_EXTERN_C String_t* _stringLiteralFA22BE135F7C234291DFB3E3F989BE78E47AFEC6;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34_mFFCD83D8093E35E3C7B6FD0CAFC34958A0E7CFB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m6B5C5CC8667C05887B6852C87ABD95F966721D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_mE10EAB1EAEFDC002588C4A2720746C4C24E7F518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedReference_1_Resolve_mACB8FF709590BA7B11393BF2BCFE673084259D3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m7E6DD79B4F853CBB46CD7B9CDA2324E1F5297A72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34_m5619C3475593C380265D5005814A315FE0A4E12F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306_m1C506F5408841E97A137703134027581F698F459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_mDB401DC36ECEF70F7CF711104C9071B0ED8276D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisReload_tB3539521ADE4D4498E158FF5016D54E012E06080_m491D809A7E2430901C34E949330674457BC008A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79_mDDA456F1386949B156419C68785706E3CFE7AD0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_m02AF32FC43AC53D3C5CCA45EA08B26CE4DE32C5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_m7852F280169A01ABB2616F29C252E51041BAFB65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_mF0D4FCCFF204C69A8A7E8F3CF301030ADAA9007D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6;
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};
struct Il2CppArrayBounds;

// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// NarrationBehaviour
struct NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03  : public PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2
{
	// TMPro.TMP_Text NarrationBehaviour::<mTextUI>k__BackingField
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___U3CmTextUIU3Ek__BackingField_0;
	// System.String NarrationBehaviour::mParsedText
	String_t* ___mParsedText_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2__padding[28];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_tD483FB40E263381A07C87A97BBF2A1BD6BE3D1F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_tD483FB40E263381A07C87A97BBF2A1BD6BE3D1F9__padding[44];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.ExposedReference`1<System.Object>
struct ExposedReference_1_t31F2EFC3C777E00A7D70852263DA16810530A869 
{
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___defaultValue_1;
};

// UnityEngine.ExposedReference`1<TMPro.TMP_Text>
struct ExposedReference_1_t4A7CCE48B335478E78C72DA7F792491FB788BE8A 
{
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___defaultValue_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::53BFB09A8803B408833184310D7A89203A1665BF87CC3BDF75E5CD512C94352D
	__StaticArrayInitTypeSizeU3D44_tD483FB40E263381A07C87A97BBF2A1BD6BE3D1F9 ___53BFB09A8803B408833184310D7A89203A1665BF87CC3BDF75E5CD512C94352D_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A_5;
};

// UnityEngine.BoundingSphere
struct BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 
{
	// UnityEngine.Vector3 UnityEngine.BoundingSphere::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// System.Single UnityEngine.BoundingSphere::radius
	float ___radius_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* ___sequencedTweens_55;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC* ____sequencedObjs_56;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_57;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.Playables.ScriptPlayable`1<NarrationBehaviour>
struct ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2_StaticFields
{
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2 ___m_NullPlayable_1;
};

// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000_StaticFields
{
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ___m_NullPlayable_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput_1;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Playables.FrameData
struct FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 
{
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_Output_8;
};

// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// NarrationPlayableAsset
struct NarrationPlayableAsset_t306C1A782B39A252D9292985B31DDD20ABB8A78C  : public PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E
{
	// UnityEngine.ExposedReference`1<TMPro.TMP_Text> NarrationPlayableAsset::text
	ExposedReference_1_t4A7CCE48B335478E78C72DA7F792491FB788BE8A ___text_4;
	// NarrationBehaviour NarrationPlayableAsset::narration
	NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* ___narration_5;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AtmosDontDestroy
struct AtmosDontDestroy_tFF61E01175ED860DFE59D817FEAD40FEA2452DE7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource AtmosDontDestroy::BGM
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___BGM_4;
};

// AttackColliderController
struct AttackColliderController_t3B309E6BBE2B1BF72BBFC8A0BD7C45AC0BE813DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AttackColliderController::attackColliderR
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackColliderR_4;
	// UnityEngine.GameObject AttackColliderController::attackColliderL
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackColliderL_5;
};

// AttackColliderController1
struct AttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AttackColliderController1::hissatsuColliderR
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hissatsuColliderR_4;
	// UnityEngine.GameObject AttackColliderController1::hissatsuColliderL
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hissatsuColliderL_5;
};

// AttackEnd
struct AttackEnd_tE3D4DECA8B301E4F23A05EE8D69731181F8EF158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AttackEnd::attackColliderR
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackColliderR_4;
	// UnityEngine.GameObject AttackEnd::attackColliderL
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackColliderL_5;
	// UnityEngine.GameObject AttackEnd::hissatsuColliderR
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hissatsuColliderR_6;
	// UnityEngine.GameObject AttackEnd::hissatsuColliderL
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hissatsuColliderL_7;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// BoyWalkAnim
struct BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BoyWalkAnim::speed
	float ___speed_4;
	// System.Single BoyWalkAnim::speedKeep
	float ___speedKeep_5;
	// UnityEngine.Rigidbody2D BoyWalkAnim::rbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rbody2D_6;
	// System.Single BoyWalkAnim::jumpForce
	float ___jumpForce_8;
	// System.Boolean BoyWalkAnim::grounded
	bool ___grounded_9;
	// System.Boolean BoyWalkAnim::grounded1
	bool ___grounded1_10;
	// UnityEngine.LayerMask BoyWalkAnim::groundlayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundlayer_11;
	// UnityEngine.LayerMask BoyWalkAnim::objectlayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___objectlayer_12;
	// System.Int32 BoyWalkAnim::stand
	int32_t ___stand_13;
	// UnityEngine.GameObject BoyWalkAnim::shadow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shadow_15;
	// UnityEngine.AudioSource BoyWalkAnim::attackSE
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___attackSE_16;
	// UnityEngine.AudioSource BoyWalkAnim::hissatsuSE
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___hissatsuSE_17;
};

struct BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields
{
	// System.Boolean BoyWalkAnim::direction
	bool ___direction_7;
	// System.Boolean BoyWalkAnim::attack
	bool ___attack_14;
};

// BunkazaiDontDestroy
struct BunkazaiDontDestroy_tC05FFC7F882799CB154A6AEF67B611CFA8AEE507  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource BunkazaiDontDestroy::BGM
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___BGM_4;
};

// DefeatEnemy
struct DefeatEnemy_tB034F887EC4B7602534EF5A0A93D449A0DDC0E4C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource DefeatEnemy::defeat
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___defeat_4;
};

// DefeatEnemy1
struct DefeatEnemy1_t1E828594344258400A4A3FEBF9DB129F750A9F2B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource DefeatEnemy1::defeat
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___defeat_4;
};

// DefeatObject
struct DefeatObject_t671311F718029F3095C118B46B4DDB59B8C2AF4B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource DefeatObject::defeat
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___defeat_4;
};

// DefeatObject1
struct DefeatObject1_tA196356E50F2D278BA9BC06259267C7DBAE63AF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource DefeatObject1::defeat
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___defeat_4;
};

// EndingAnim
struct EndingAnim_t716A4CB5C06118BD0AA9ADA04376AF6184926649  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text EndingAnim::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// System.Boolean EndingAnim::fade
	bool ___fade_5;
};

// EngineCollision
struct EngineCollision_tD5886ECAFF7EF6697F3FDECE27BD9FBA0203CEB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EngineCollision::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// UnityEngine.GameObject EngineCollision::story
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___story_5;
	// UnityEngine.GameObject EngineCollision::engine
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___engine_6;
	// UnityEngine.AudioSource EngineCollision::on
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___on_7;
};

// ExtraAnim
struct ExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ExtraAnim::elapsed
	float ___elapsed_4;
	// System.Single ExtraAnim::alfa
	float ___alfa_5;
	// UnityEngine.GameObject ExtraAnim::white
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___white_6;
	// UnityEngine.UI.Image ExtraAnim::drink
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drink_7;
	// UnityEngine.AudioSource ExtraAnim::on
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___on_8;
	// System.Boolean ExtraAnim::bgm
	bool ___bgm_9;
	// System.Boolean ExtraAnim::wh
	bool ___wh_10;
};

// FactoryReset
struct FactoryReset_t088CCB3214CA63ECCC1B82F2CFC13F0833CF0C7F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ForeverDont
struct ForeverDont_t4E3AB6437703D484478668562637A5719AEB1381  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource ForeverDont::ForeverBGM
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___ForeverBGM_4;
	// System.Boolean ForeverDont::playing
	bool ___playing_5;
};

// GirlCapturedAnim
struct GirlCapturedAnim_tE49279D2656AC27DF06C57F50604BD74E8EF6FB8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GirlCapturedAnim::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// UnityEngine.GameObject GirlCapturedAnim::girlSleeping
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girlSleeping_5;
	// UnityEngine.GameObject GirlCapturedAnim::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_6;
	// UnityEngine.GameObject GirlCapturedAnim::shadow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shadow_7;
	// UnityEngine.GameObject GirlCapturedAnim::story
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___story_8;
	// UnityEngine.AudioSource GirlCapturedAnim::hyun
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___hyun_9;
	// UnityEngine.AudioSource GirlCapturedAnim::dosa
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___dosa_10;
};

// GirlWalkAnim
struct GirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator GirlWalkAnim::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// System.Single GirlWalkAnim::speed
	float ___speed_5;
	// UnityEngine.Rigidbody2D GirlWalkAnim::rbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rbody2D_6;
	// System.Boolean GirlWalkAnim::direction
	bool ___direction_7;
	// System.Single GirlWalkAnim::jumpForce
	float ___jumpForce_8;
	// System.Boolean GirlWalkAnim::grounded
	bool ___grounded_9;
	// System.Boolean GirlWalkAnim::grounded1
	bool ___grounded1_10;
	// UnityEngine.LayerMask GirlWalkAnim::groundlayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundlayer_11;
	// UnityEngine.GameObject GirlWalkAnim::shadow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shadow_12;
};

// LifeLimit
struct LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields
{
	// System.Int32 LifeLimit::lifeLimit
	int32_t ___lifeLimit_4;
	// System.Boolean LifeLimit::replay
	bool ___replay_5;
	// System.Int32 LifeLimit::drink
	int32_t ___drink_6;
};

// LifeManager
struct LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image[] LifeManager::life
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___life_4;
	// UnityEngine.UI.Image[] LifeManager::drink
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___drink_5;
	// UnityEngine.UI.Image LifeManager::bokashi
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bokashi_6;
	// UnityEngine.UI.Image LifeManager::black
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___black_7;
	// System.Int32 LifeManager::energy
	int32_t ___energy_8;
	// System.Single LifeManager::elapsed
	float ___elapsed_10;
	// System.Single LifeManager::alfa
	float ___alfa_11;
	// System.Int32 LifeManager::gameover
	int32_t ___gameover_12;
	// System.Boolean LifeManager::on
	bool ___on_13;
	// UnityEngine.AudioSource LifeManager::se
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___se_14;
	// UnityEngine.AudioSource LifeManager::over
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___over_15;
};

struct LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_StaticFields
{
	// System.Int32 LifeManager::charging
	int32_t ___charging_9;
};

// UnityEngine.U2D.Light2DBase
struct Light2DBase_t21E41B15B3A532090B53439B4E99AB1207263C26  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LonelyDontDestroy
struct LonelyDontDestroy_t49C1C64058151804BD2E589367F14B686165A66A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource LonelyDontDestroy::BGM
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___BGM_4;
};

// ObjCollision
struct ObjCollision_tEEE9DC77F8A0E485F9AE05B394DCFE67CE85C657  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ObjCollision::story
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___story_4;
	// UnityEngine.GameObject ObjCollision::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_5;
};

// Reload
struct Reload_tB3539521ADE4D4498E158FF5016D54E012E06080  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SceneControll
struct SceneControll_tC3EECDA55DC14756D26FE8255E5CA4D27F76CFF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// System.Single SceneControll::startPosX
	float ___startPosX_5;
	// System.Single SceneControll::startPosY
	float ___startPosY_6;
	// System.Single SceneControll::goalPosX
	float ___goalPosX_7;
};

// SceneControll1
struct SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll1::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// System.Single SceneControll1::startPosX
	float ___startPosX_5;
	// System.Single SceneControll1::startPosY
	float ___startPosY_6;
	// System.Single SceneControll1::goalPosX
	float ___goalPosX_7;
	// TMPro.TextMeshProUGUI[] SceneControll1::drinkNum
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___drinkNum_8;
	// UnityEngine.UI.Image SceneControll1::drinkPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkPanel_9;
	// System.Int32 SceneControll1::remain
	int32_t ___remain_10;
};

struct SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE_StaticFields
{
	// System.Int32 SceneControll1::save
	int32_t ___save_11;
};

// SceneControll10
struct SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll10::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// System.Single SceneControll10::startPosX
	float ___startPosX_5;
	// System.Single SceneControll10::startPosY
	float ___startPosY_6;
	// TMPro.TextMeshProUGUI[] SceneControll10::drinkNum
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___drinkNum_7;
	// UnityEngine.UI.Image SceneControll10::drinkPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkPanel_8;
	// System.Int32 SceneControll10::remain3
	int32_t ___remain3_9;
};

struct SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0_StaticFields
{
	// System.Int32 SceneControll10::save3
	int32_t ___save3_10;
};

// SceneControll11
struct SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll11::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// System.Single SceneControll11::startPosX
	float ___startPosX_5;
	// System.Single SceneControll11::startPosY
	float ___startPosY_6;
	// System.Single SceneControll11::goalPosX
	float ___goalPosX_7;
};

struct SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C_StaticFields
{
	// System.Int32 SceneControll11::save10
	int32_t ___save10_8;
};

// SceneControll12
struct SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll12::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// System.Single SceneControll12::startPosX
	float ___startPosX_5;
	// System.Single SceneControll12::startPosY
	float ___startPosY_6;
	// System.Single SceneControll12::goalPosY
	float ___goalPosY_7;
};

struct SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981_StaticFields
{
	// System.Int32 SceneControll12::save11
	int32_t ___save11_8;
};

// SceneControll13
struct SceneControll13_tE0EC13912247294E452DD45AE63B71EF544EDFEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll13::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// System.Single SceneControll13::startPosX
	float ___startPosX_5;
	// System.Single SceneControll13::startPosY
	float ___startPosY_6;
};

// SceneControll2
struct SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll2::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// System.Single SceneControll2::startPosX
	float ___startPosX_5;
	// System.Single SceneControll2::startPosY
	float ___startPosY_6;
	// System.Single SceneControll2::goalPosX
	float ___goalPosX_7;
	// TMPro.TextMeshProUGUI[] SceneControll2::drinkNum
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___drinkNum_8;
	// UnityEngine.UI.Image SceneControll2::drinkPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkPanel_9;
	// System.Int32 SceneControll2::remain1
	int32_t ___remain1_10;
};

struct SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362_StaticFields
{
	// System.Int32 SceneControll2::save1
	int32_t ___save1_11;
};

// SceneControll3
struct SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll3::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// System.Single SceneControll3::startPosX
	float ___startPosX_5;
	// System.Single SceneControll3::startPosY
	float ___startPosY_6;
	// System.Single SceneControll3::goalPosX
	float ___goalPosX_7;
	// TMPro.TextMeshProUGUI[] SceneControll3::drinkNum
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___drinkNum_8;
	// UnityEngine.UI.Image SceneControll3::drinkPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkPanel_9;
	// System.Int32 SceneControll3::remain2
	int32_t ___remain2_10;
};

struct SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133_StaticFields
{
	// System.Int32 SceneControll3::save2
	int32_t ___save2_11;
};

// SceneControll4
struct SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll4::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// UnityEngine.GameObject SceneControll4::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_5;
	// System.Single SceneControll4::startPosX
	float ___startPosX_6;
	// System.Single SceneControll4::startPosY
	float ___startPosY_7;
	// System.Single SceneControll4::goalPosX
	float ___goalPosX_8;
	// System.Boolean SceneControll4::keep
	bool ___keep_9;
	// System.Boolean SceneControll4::boyKeep
	bool ___boyKeep_10;
	// System.Boolean SceneControll4::girlKeep
	bool ___girlKeep_11;
	// UnityEngine.UI.Image SceneControll4::textBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___textBar_12;
	// UnityEngine.Rendering.Universal.Light2D[] SceneControll4::begin
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___begin_13;
	// System.Single SceneControll4::alfa
	float ___alfa_14;
	// TMPro.TextMeshProUGUI[] SceneControll4::drinkNum
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___drinkNum_15;
	// UnityEngine.UI.Image SceneControll4::drinkPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkPanel_16;
	// System.Int32 SceneControll4::remain4
	int32_t ___remain4_17;
};

struct SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF_StaticFields
{
	// System.Int32 SceneControll4::save4
	int32_t ___save4_18;
};

// SceneControll5
struct SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll5::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// UnityEngine.GameObject SceneControll5::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_5;
	// System.Single SceneControll5::startPosX
	float ___startPosX_6;
	// System.Single SceneControll5::startPosY
	float ___startPosY_7;
	// System.Single SceneControll5::goalPosX
	float ___goalPosX_8;
	// System.Boolean SceneControll5::keep
	bool ___keep_9;
	// System.Boolean SceneControll5::boyKeep
	bool ___boyKeep_10;
	// System.Boolean SceneControll5::girlKeep
	bool ___girlKeep_11;
	// UnityEngine.UI.Image SceneControll5::textBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___textBar_12;
	// TMPro.TextMeshProUGUI[] SceneControll5::drinkNum
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___drinkNum_13;
	// UnityEngine.UI.Image SceneControll5::drinkPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkPanel_14;
	// System.Int32 SceneControll5::remain5
	int32_t ___remain5_15;
};

struct SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B_StaticFields
{
	// System.Int32 SceneControll5::save5
	int32_t ___save5_16;
};

// SceneControll6
struct SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll6::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// UnityEngine.GameObject SceneControll6::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_5;
	// System.Single SceneControll6::startPosX
	float ___startPosX_6;
	// System.Single SceneControll6::startPosY
	float ___startPosY_7;
	// System.Single SceneControll6::goalPosX
	float ___goalPosX_8;
	// System.Boolean SceneControll6::keep
	bool ___keep_9;
	// System.Boolean SceneControll6::boyKeep
	bool ___boyKeep_10;
	// System.Boolean SceneControll6::girlKeep
	bool ___girlKeep_11;
	// UnityEngine.UI.Image SceneControll6::textBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___textBar_12;
	// UnityEngine.Rendering.Universal.Light2D[] SceneControll6::end
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___end_13;
	// System.Single SceneControll6::alfa
	float ___alfa_14;
	// TMPro.TextMeshProUGUI[] SceneControll6::drinkNum
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___drinkNum_15;
	// UnityEngine.UI.Image SceneControll6::drinkPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkPanel_16;
	// System.Int32 SceneControll6::remain6
	int32_t ___remain6_17;
};

struct SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222_StaticFields
{
	// System.Int32 SceneControll6::save6
	int32_t ___save6_18;
};

// SceneControll7
struct SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll7::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// UnityEngine.GameObject SceneControll7::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_5;
	// System.Single SceneControll7::startPosX
	float ___startPosX_6;
	// System.Single SceneControll7::startPosY
	float ___startPosY_7;
	// System.Single SceneControll7::goalPosX
	float ___goalPosX_8;
	// System.Boolean SceneControll7::keep
	bool ___keep_9;
	// System.Boolean SceneControll7::boyKeep
	bool ___boyKeep_10;
	// System.Boolean SceneControll7::girlKeep
	bool ___girlKeep_11;
	// UnityEngine.UI.Image SceneControll7::textBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___textBar_12;
	// TMPro.TextMeshProUGUI[] SceneControll7::drinkNum
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___drinkNum_13;
	// UnityEngine.UI.Image SceneControll7::drinkPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkPanel_14;
	// System.Int32 SceneControll7::remain7
	int32_t ___remain7_15;
	// UnityEngine.Rendering.Universal.Light2D[] SceneControll7::begin
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___begin_17;
	// System.Single SceneControll7::alfa
	float ___alfa_18;
};

struct SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383_StaticFields
{
	// System.Int32 SceneControll7::save7
	int32_t ___save7_16;
};

// SceneControll8
struct SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll8::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// UnityEngine.GameObject SceneControll8::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_5;
	// System.Single SceneControll8::startPosX
	float ___startPosX_6;
	// System.Single SceneControll8::startPosY
	float ___startPosY_7;
	// System.Single SceneControll8::goalPosX
	float ___goalPosX_8;
	// System.Boolean SceneControll8::keep
	bool ___keep_9;
	// System.Boolean SceneControll8::boyKeep
	bool ___boyKeep_10;
	// System.Boolean SceneControll8::girlKeep
	bool ___girlKeep_11;
	// UnityEngine.UI.Image SceneControll8::textBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___textBar_12;
	// TMPro.TextMeshProUGUI[] SceneControll8::drinkNum
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___drinkNum_13;
	// UnityEngine.UI.Image SceneControll8::drinkPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkPanel_14;
	// System.Int32 SceneControll8::remain8
	int32_t ___remain8_15;
	// UnityEngine.Rendering.Universal.Light2D[] SceneControll8::end
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___end_17;
	// System.Single SceneControll8::alfa
	float ___alfa_18;
};

struct SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E_StaticFields
{
	// System.Int32 SceneControll8::save8
	int32_t ___save8_16;
};

// SceneControll9
struct SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneControll9::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_4;
	// UnityEngine.GameObject SceneControll9::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_5;
	// System.Single SceneControll9::startPosX
	float ___startPosX_6;
	// System.Single SceneControll9::startPosY
	float ___startPosY_7;
	// System.Single SceneControll9::goalPosX
	float ___goalPosX_8;
	// System.Boolean SceneControll9::keep
	bool ___keep_9;
	// System.Boolean SceneControll9::boyKeep
	bool ___boyKeep_10;
	// System.Boolean SceneControll9::girlKeep
	bool ___girlKeep_11;
	// UnityEngine.UI.Image SceneControll9::textBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___textBar_12;
	// TMPro.TextMeshProUGUI[] SceneControll9::drinkNum
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___drinkNum_13;
	// UnityEngine.UI.Image SceneControll9::drinkPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkPanel_14;
	// System.Int32 SceneControll9::remain9
	int32_t ___remain9_15;
	// UnityEngine.Rendering.Universal.Light2D[] SceneControll9::begin
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___begin_17;
	// UnityEngine.Rendering.Universal.Light2D[] SceneControll9::end
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___end_18;
	// System.Single SceneControll9::alfa
	float ___alfa_19;
};

struct SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55_StaticFields
{
	// System.Int32 SceneControll9::save9
	int32_t ___save9_16;
};

// SoundOption
struct SoundOption_tBB7CE8E47CF3CBCD485DF4FC193F72CBF80754BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Audio.AudioMixer SoundOption::_audioMixer
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ____audioMixer_4;
	// UnityEngine.UI.Slider SoundOption::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
	// System.Single SoundOption::volume
	float ___volume_6;
};

// Stage1Anim
struct Stage1Anim_t6E5CDBB177EFD025F7DCD513FA6B8C7A77150A6A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Stage1Anim::speed
	float ___speed_4;
	// System.Single Stage1Anim::elapsedTime
	float ___elapsedTime_5;
	// UnityEngine.GameObject Stage1Anim::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_6;
	// UnityEngine.GameObject Stage1Anim::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_7;
	// UnityEngine.GameObject Stage1Anim::back
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___back_8;
	// UnityEngine.Camera Stage1Anim::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_9;
	// UnityEngine.Rendering.Universal.Light2D Stage1Anim::begin
	Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* ___begin_10;
	// System.Single Stage1Anim::alfa
	float ___alfa_11;
	// UnityEngine.AudioSource Stage1Anim::bgm
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgm_12;
	// System.Boolean Stage1Anim::audioOn
	bool ___audioOn_13;
};

// Stage2Anim
struct Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Stage2Anim::speed
	float ___speed_4;
	// System.Single Stage2Anim::elapsedTime
	float ___elapsedTime_5;
	// System.Single Stage2Anim::alfa
	float ___alfa_6;
	// System.Single Stage2Anim::alfa1
	float ___alfa1_7;
	// UnityEngine.GameObject Stage2Anim::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_8;
	// UnityEngine.GameObject Stage2Anim::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_9;
	// UnityEngine.GameObject Stage2Anim::back
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___back_10;
	// UnityEngine.Camera Stage2Anim::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_11;
	// UnityEngine.Rendering.Universal.Light2D Stage2Anim::begin
	Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* ___begin_12;
	// UnityEngine.Rendering.Universal.Light2D[] Stage2Anim::light2d
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___light2d_13;
	// UnityEngine.AudioSource Stage2Anim::bgm
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgm_14;
	// System.Boolean Stage2Anim::audioOn
	bool ___audioOn_15;
};

struct Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_StaticFields
{
	// System.Boolean Stage2Anim::good
	bool ___good_16;
};

// Stage3Anim
struct Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Stage3Anim::speed
	float ___speed_4;
	// System.Single Stage3Anim::speed1
	float ___speed1_5;
	// System.Single Stage3Anim::speedKeep
	float ___speedKeep_6;
	// System.Single Stage3Anim::elapsedTime
	float ___elapsedTime_7;
	// UnityEngine.GameObject Stage3Anim::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_8;
	// UnityEngine.GameObject Stage3Anim::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_9;
	// UnityEngine.GameObject Stage3Anim::shadow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shadow_10;
	// System.Boolean Stage3Anim::stop
	bool ___stop_11;
	// System.Boolean Stage3Anim::stop1
	bool ___stop1_12;
	// System.Boolean Stage3Anim::stop2
	bool ___stop2_13;
	// System.Boolean Stage3Anim::stop3
	bool ___stop3_14;
	// UnityEngine.Rendering.Universal.Light2D[] Stage3Anim::pointbrinklight
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___pointbrinklight_15;
	// UnityEngine.UI.Image Stage3Anim::alarm
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___alarm_16;
	// System.Single Stage3Anim::alfa
	float ___alfa_17;
	// System.Boolean Stage3Anim::alfaPlus
	bool ___alfaPlus_18;
	// System.Boolean Stage3Anim::alartOn
	bool ___alartOn_19;
	// System.Boolean Stage3Anim::walk
	bool ___walk_20;
	// UnityEngine.Rendering.Universal.Light2D Stage3Anim::begin
	Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* ___begin_21;
	// UnityEngine.Rendering.Universal.Light2D[] Stage3Anim::light2d
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___light2d_22;
	// System.Single Stage3Anim::alfa1
	float ___alfa1_23;
	// System.Single Stage3Anim::alfa2
	float ___alfa2_24;
	// UnityEngine.AudioSource Stage3Anim::warning
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___warning_26;
};

struct Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_StaticFields
{
	// System.Boolean Stage3Anim::good
	bool ___good_25;
};

// Stage4Anim
struct Stage4Anim_tE1639F7EFF3C9F81A7EB20CEE075213620065B6E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Stage4Anim::speed
	float ___speed_4;
	// System.Single Stage4Anim::speed1
	float ___speed1_5;
	// System.Single Stage4Anim::speedKeep
	float ___speedKeep_6;
	// System.Single Stage4Anim::elapsedTime
	float ___elapsedTime_7;
	// UnityEngine.GameObject Stage4Anim::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_8;
	// UnityEngine.GameObject Stage4Anim::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_9;
	// System.Boolean Stage4Anim::stop
	bool ___stop_10;
	// System.Boolean Stage4Anim::stop1
	bool ___stop1_11;
	// System.Boolean Stage4Anim::stop2
	bool ___stop2_12;
	// System.Boolean Stage4Anim::stop3
	bool ___stop3_13;
	// System.Boolean Stage4Anim::ending
	bool ___ending_14;
	// System.Single Stage4Anim::elapsed
	float ___elapsed_15;
	// System.Int32 Stage4Anim::anim
	int32_t ___anim_16;
	// UnityEngine.AudioSource Stage4Anim::forever
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___forever_17;
	// System.Boolean Stage4Anim::audioCont
	bool ___audioCont_18;
	// UnityEngine.Rendering.Universal.Light2D Stage4Anim::whole
	Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* ___whole_19;
	// UnityEngine.Rendering.Universal.Light2D Stage4Anim::light2d
	Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* ___light2d_20;
	// UnityEngine.GameObject Stage4Anim::door
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___door_21;
	// System.Single Stage4Anim::alfa
	float ___alfa_22;
	// System.Single Stage4Anim::alfa1
	float ___alfa1_23;
};

// StartButton
struct StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image StartButton::BlackOut
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___BlackOut_4;
	// System.Single StartButton::alfa
	float ___alfa_5;
	// UnityEngine.AudioSource StartButton::noise
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___noise_6;
};

// StoryManager
struct StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields
{
	// System.Int32 StoryManager::drink
	int32_t ___drink_4;
};

// SwitchCollision
struct SwitchCollision_t30BB3AAC014A94231CC237C9FD9217DD930D01FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SwitchCollision::switchNum
	int32_t ___switchNum_4;
	// System.Int32[] SwitchCollision::arrow
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrow_5;
	// UnityEngine.Rendering.Universal.Light2D[] SwitchCollision::light2d
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___light2d_6;
	// UnityEngine.AudioSource SwitchCollision::on
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___on_7;
};

// SwitchCollision1
struct SwitchCollision1_t6A37EB2C204508A0B0188C3E53395176B5F5D9D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SwitchCollision1::switchNum
	int32_t ___switchNum_4;
	// System.Int32[] SwitchCollision1::arrow
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrow_5;
	// UnityEngine.Rendering.Universal.Light2D[] SwitchCollision1::light2d
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___light2d_6;
	// UnityEngine.AudioSource SwitchCollision1::on
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___on_7;
};

// SwitchCollision2
struct SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32[] SwitchCollision2::arrow
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrow_5;
	// System.Int32[] SwitchCollision2::arrowBarrier
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrowBarrier_6;
	// UnityEngine.Rendering.Universal.Light2D[] SwitchCollision2::light2d
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___light2d_7;
	// UnityEngine.GameObject[] SwitchCollision2::barrier
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___barrier_8;
	// UnityEngine.AudioSource SwitchCollision2::on
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___on_9;
};

struct SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_StaticFields
{
	// System.Int32 SwitchCollision2::switchNum
	int32_t ___switchNum_4;
};

// SwitchCollision3
struct SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32[] SwitchCollision3::arrow
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrow_5;
	// System.Int32[] SwitchCollision3::arrowBarrier
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrowBarrier_6;
	// UnityEngine.Rendering.Universal.Light2D[] SwitchCollision3::light2d
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___light2d_7;
	// UnityEngine.GameObject[] SwitchCollision3::barrier
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___barrier_8;
	// UnityEngine.AudioSource SwitchCollision3::on
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___on_9;
};

struct SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_StaticFields
{
	// System.Int32 SwitchCollision3::switchNum
	int32_t ___switchNum_4;
};

// SwitchCollision4
struct SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32[] SwitchCollision4::arrow
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrow_5;
	// System.Int32[] SwitchCollision4::arrowBarrier
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrowBarrier_6;
	// UnityEngine.Rendering.Universal.Light2D[] SwitchCollision4::light2d
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___light2d_7;
	// UnityEngine.GameObject[] SwitchCollision4::barrier
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___barrier_8;
	// UnityEngine.AudioSource SwitchCollision4::on
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___on_9;
};

struct SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_StaticFields
{
	// System.Int32 SwitchCollision4::switchNum
	int32_t ___switchNum_4;
};

// SwitchCollision5
struct SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32[] SwitchCollision5::arrow
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrow_5;
	// System.Int32[] SwitchCollision5::arrowBarrier
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrowBarrier_6;
	// UnityEngine.Rendering.Universal.Light2D[] SwitchCollision5::light2d
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___light2d_7;
	// UnityEngine.GameObject[] SwitchCollision5::barrier
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___barrier_8;
	// UnityEngine.AudioSource SwitchCollision5::on
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___on_9;
};

struct SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_StaticFields
{
	// System.Int32 SwitchCollision5::switchNum
	int32_t ___switchNum_4;
};

// SwitchCollision6
struct SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32[] SwitchCollision6::arrow
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrow_5;
	// System.Int32[] SwitchCollision6::arrowBarrier
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrowBarrier_6;
	// UnityEngine.Rendering.Universal.Light2D[] SwitchCollision6::light2d
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___light2d_7;
	// UnityEngine.GameObject[] SwitchCollision6::barrier
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___barrier_8;
	// UnityEngine.AudioSource SwitchCollision6::on
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___on_9;
};

struct SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_StaticFields
{
	// System.Int32 SwitchCollision6::switchNum
	int32_t ___switchNum_4;
};

// SwitchCollision7
struct SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32[] SwitchCollision7::arrow
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrow_5;
	// System.Int32[] SwitchCollision7::arrowBarrier
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arrowBarrier_6;
	// UnityEngine.Rendering.Universal.Light2D[] SwitchCollision7::light2d
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___light2d_7;
	// UnityEngine.GameObject[] SwitchCollision7::barrier
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___barrier_8;
	// UnityEngine.AudioSource SwitchCollision7::on
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___on_9;
};

struct SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_StaticFields
{
	// System.Int32 SwitchCollision7::switchNum
	int32_t ___switchNum_4;
};

// Tutorial1Anim
struct Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Tutorial1Anim::girlCaptured
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girlCaptured_4;
	// UnityEngine.GameObject Tutorial1Anim::girlFalling
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girlFalling_5;
	// UnityEngine.GameObject Tutorial1Anim::girl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___girl_6;
	// UnityEngine.GameObject Tutorial1Anim::shadow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shadow_7;
	// UnityEngine.UI.Image Tutorial1Anim::black
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___black_8;
	// System.Single Tutorial1Anim::elapsedTime
	float ___elapsedTime_9;
	// System.Single Tutorial1Anim::elapsedTime1
	float ___elapsedTime1_10;
	// System.Single Tutorial1Anim::elapsedTime2
	float ___elapsedTime2_11;
	// System.Boolean Tutorial1Anim::time
	bool ___time_12;
	// System.Boolean Tutorial1Anim::stop
	bool ___stop_13;
	// System.Boolean Tutorial1Anim::walk
	bool ___walk_14;
	// UnityEngine.AudioSource Tutorial1Anim::hyun
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___hyun_15;
	// UnityEngine.AudioSource Tutorial1Anim::bgm
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgm_16;
	// System.Boolean Tutorial1Anim::bgmlim
	bool ___bgmlim_17;
	// System.Boolean Tutorial1Anim::hyunLim
	bool ___hyunLim_18;
};

// TutorialAnim
struct TutorialAnim_t26C52CAE01088DFB27B30699E790A17CCD417674  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TutorialAnim::elapsedTime
	float ___elapsedTime_4;
	// System.Single TutorialAnim::alfa
	float ___alfa_5;
	// System.Single TutorialAnim::alfa1
	float ___alfa1_6;
	// UnityEngine.Rendering.Universal.Light2D TutorialAnim::pointbrinklight
	Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* ___pointbrinklight_7;
	// UnityEngine.Rendering.Universal.Light2D[] TutorialAnim::pointbrinklight1
	Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* ___pointbrinklight1_8;
	// UnityEngine.GameObject TutorialAnim::boy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boy_9;
	// UnityEngine.Animator TutorialAnim::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.Rendering.Universal.Light2D
struct Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD  : public Light2DBase_t21E41B15B3A532090B53439B4E99AB1207263C26
{
	// UnityEngine.Rendering.Universal.Light2D/ComponentVersions UnityEngine.Rendering.Universal.Light2D::m_ComponentVersion
	int32_t ___m_ComponentVersion_5;
	// UnityEngine.Rendering.Universal.Light2D/LightType UnityEngine.Rendering.Universal.Light2D::m_LightType
	int32_t ___m_LightType_6;
	// System.Int32 UnityEngine.Rendering.Universal.Light2D::m_BlendStyleIndex
	int32_t ___m_BlendStyleIndex_7;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_FalloffIntensity
	float ___m_FalloffIntensity_8;
	// UnityEngine.Color UnityEngine.Rendering.Universal.Light2D::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_9;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_Intensity
	float ___m_Intensity_10;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_LightVolumeIntensity
	float ___m_LightVolumeIntensity_11;
	// System.Boolean UnityEngine.Rendering.Universal.Light2D::m_LightVolumeIntensityEnabled
	bool ___m_LightVolumeIntensityEnabled_12;
	// System.Int32[] UnityEngine.Rendering.Universal.Light2D::m_ApplyToSortingLayers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_ApplyToSortingLayers_13;
	// UnityEngine.Sprite UnityEngine.Rendering.Universal.Light2D::m_LightCookieSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_LightCookieSprite_14;
	// UnityEngine.Sprite UnityEngine.Rendering.Universal.Light2D::m_DeprecatedPointLightCookieSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DeprecatedPointLightCookieSprite_15;
	// System.Int32 UnityEngine.Rendering.Universal.Light2D::m_LightOrder
	int32_t ___m_LightOrder_16;
	// System.Boolean UnityEngine.Rendering.Universal.Light2D::m_AlphaBlendOnOverlap
	bool ___m_AlphaBlendOnOverlap_17;
	// UnityEngine.Rendering.Universal.Light2D/OverlapOperation UnityEngine.Rendering.Universal.Light2D::m_OverlapOperation
	int32_t ___m_OverlapOperation_18;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_NormalMapDistance
	float ___m_NormalMapDistance_19;
	// UnityEngine.Rendering.Universal.Light2D/NormalMapQuality UnityEngine.Rendering.Universal.Light2D::m_NormalMapQuality
	int32_t ___m_NormalMapQuality_20;
	// System.Boolean UnityEngine.Rendering.Universal.Light2D::m_UseNormalMap
	bool ___m_UseNormalMap_21;
	// System.Boolean UnityEngine.Rendering.Universal.Light2D::m_ShadowIntensityEnabled
	bool ___m_ShadowIntensityEnabled_22;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_ShadowIntensity
	float ___m_ShadowIntensity_23;
	// System.Boolean UnityEngine.Rendering.Universal.Light2D::m_ShadowVolumeIntensityEnabled
	bool ___m_ShadowVolumeIntensityEnabled_24;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_ShadowVolumeIntensity
	float ___m_ShadowVolumeIntensity_25;
	// UnityEngine.Mesh UnityEngine.Rendering.Universal.Light2D::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_26;
	// UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex[] UnityEngine.Rendering.Universal.Light2D::m_Vertices
	LightMeshVertexU5BU5D_t9DE3B9AD46622DA5866FC545286737925F4EBA53* ___m_Vertices_27;
	// System.UInt16[] UnityEngine.Rendering.Universal.Light2D::m_Triangles
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_Triangles_28;
	// System.Int32 UnityEngine.Rendering.Universal.Light2D::m_PreviousLightCookieSprite
	int32_t ___m_PreviousLightCookieSprite_29;
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.Light2D::m_CachedPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedPosition_30;
	// UnityEngine.Bounds UnityEngine.Rendering.Universal.Light2D::m_LocalBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_LocalBounds_31;
	// UnityEngine.BoundingSphere UnityEngine.Rendering.Universal.Light2D::<boundingSphere>k__BackingField
	BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 ___U3CboundingSphereU3Ek__BackingField_32;
	// System.Boolean UnityEngine.Rendering.Universal.Light2D::forceUpdate
	bool ___forceUpdate_33;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_PointLightInnerAngle
	float ___m_PointLightInnerAngle_34;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_PointLightOuterAngle
	float ___m_PointLightOuterAngle_35;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_PointLightInnerRadius
	float ___m_PointLightInnerRadius_36;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_PointLightOuterRadius
	float ___m_PointLightOuterRadius_37;
	// System.Int32 UnityEngine.Rendering.Universal.Light2D::m_ShapeLightParametricSides
	int32_t ___m_ShapeLightParametricSides_38;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_ShapeLightParametricAngleOffset
	float ___m_ShapeLightParametricAngleOffset_39;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_ShapeLightParametricRadius
	float ___m_ShapeLightParametricRadius_40;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_ShapeLightFalloffSize
	float ___m_ShapeLightFalloffSize_41;
	// UnityEngine.Vector2 UnityEngine.Rendering.Universal.Light2D::m_ShapeLightFalloffOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ShapeLightFalloffOffset_42;
	// UnityEngine.Vector3[] UnityEngine.Rendering.Universal.Light2D::m_ShapePath
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ShapePath_43;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_PreviousShapeLightFalloffSize
	float ___m_PreviousShapeLightFalloffSize_44;
	// System.Int32 UnityEngine.Rendering.Universal.Light2D::m_PreviousShapeLightParametricSides
	int32_t ___m_PreviousShapeLightParametricSides_45;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_PreviousShapeLightParametricAngleOffset
	float ___m_PreviousShapeLightParametricAngleOffset_46;
	// System.Single UnityEngine.Rendering.Universal.Light2D::m_PreviousShapeLightParametricRadius
	float ___m_PreviousShapeLightParametricRadius_47;
	// System.Int32 UnityEngine.Rendering.Universal.Light2D::m_PreviousShapePathHash
	int32_t ___m_PreviousShapePathHash_48;
	// UnityEngine.Rendering.Universal.Light2D/LightType UnityEngine.Rendering.Universal.Light2D::m_PreviousLightType
	int32_t ___m_PreviousLightType_49;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.Universal.Light2D[]
struct Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6  : public RuntimeArray
{
	ALIGN_FIELD (8) Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* m_Items[1];

	inline Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A  : public RuntimeArray
{
	ALIGN_FIELD (8) TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* m_Items[1];

	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared (RuntimeObject* ___t0, int32_t ___ease1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Play<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Play_TisRuntimeObject_m9C5B8B16699BA91E6605510B84969F71F944D46F_gshared (RuntimeObject* ___t0, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_Create_mCAF6C1AE93353CC333626F054FE86F022BFCB9FA_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, RuntimeObject* ___template1, int32_t ___inputCount2, const RuntimeMethod* method) ;
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_GetBehaviour_m86713AAFF1D1F7D4FB370489F71AE4228741EFE8_gshared (ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000* __this, const RuntimeMethod* method) ;
// T UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExposedReference_1_Resolve_mFA2938DF9E0A74422B71F573F5CC0A8B1CA54647_gshared (ExposedReference_1_t31F2EFC3C777E00A7D70852263DA16810530A869* __this, RuntimeObject* ___resolver0, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared (ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ___playable0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessage_mB1BCD3D07E4CF35877A56FE404902FCC83A3EB46 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<BoyWalkAnim>()
inline BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* Component_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m6B5C5CC8667C05887B6852C87ABD95F966721D8D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<AttackColliderController1>()
inline AttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34* Component_GetComponent_TisAttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34_mFFCD83D8093E35E3C7B6FD0CAFC34958A0E7CFB8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Linecast_m38BDCA98A5B3B55B46E7AD91B9B3C0B1F60ADA43 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___end1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GirlWalkAnim>()
inline GirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306* GameObject_GetComponent_TisGirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306_m1C506F5408841E97A137703134027581F698F459 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<LifeManager>()
inline LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* Component_GetComponent_TisLifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_mE10EAB1EAEFDC002588C4A2720746C4C24E7F518 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<BoyWalkAnim>()
inline BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<LifeManager>()
inline LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* GameObject_GetComponent_TisLifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_mDB401DC36ECEF70F7CF711104C9071B0ED8276D7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ExtraAnim>()
inline ExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34* GameObject_GetComponent_TisExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34_m5619C3475593C380265D5005814A315FE0A4E12F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Reload>()
inline Reload_tB3539521ADE4D4498E158FF5016D54E012E06080* GameObject_GetComponent_TisReload_tB3539521ADE4D4498E158FF5016D54E012E06080_m491D809A7E2430901C34E949330674457BC008A4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Reload_tB3539521ADE4D4498E158FF5016D54E012E06080* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Tutorial1Anim>()
inline Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79* GameObject_GetComponent_TisTutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79_mDDA456F1386949B156419C68785706E3CFE7AD0C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rendering.Universal.Light2D>()
inline Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Light2D::set_color(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline (Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// DG.Tweening.Sequence DG.Tweening.DOTween::Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared)(___t0, ___ease1, method);
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Append(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___s0, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t1, const RuntimeMethod* method) ;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::AppendInterval(DG.Tweening.Sequence,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_AppendInterval_m5254F71A9B119195C76E65B4DD15BE25D48CB891 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___s0, float ___interval1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Play<DG.Tweening.Sequence>(T)
inline Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___t0, const RuntimeMethod* method)
{
	return ((  Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* (*) (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C*, const RuntimeMethod*))TweenExtensions_Play_TisRuntimeObject_m9C5B8B16699BA91E6605510B84969F71F944D46F_gshared)(___t0, method);
}
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioMixer::GetFloat(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___name0, float* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void Fungus.Flowchart::BroadcastFungusMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C (String_t* ___messageName0, const RuntimeMethod* method) ;
// TMPro.TMP_Text NarrationBehaviour::get_mTextUI()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* NarrationBehaviour_get_mTextUI_mC03B6F80E09BA670F97DA7F156F0656469A6CB43_inline (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.Playable>(U)
inline double PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_gshared)(___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(U)
inline double PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B_gshared)(___playable0, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_maxVisibleCharacters(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_maxVisibleCharacters_mEDD8DCB11D204F3FC10BFAC49BF6E8E09548358A (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<NarrationBehaviour>::Create(UnityEngine.Playables.PlayableGraph,T,System.Int32)
inline ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2 ScriptPlayable_1_Create_m02AF32FC43AC53D3C5CCA45EA08B26CE4DE32C5D (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* ___template1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2 (*) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03*, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mCAF6C1AE93353CC333626F054FE86F022BFCB9FA_gshared)(___graph0, ___template1, ___inputCount2, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<NarrationBehaviour>::GetBehaviour()
inline NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* ScriptPlayable_1_GetBehaviour_m7852F280169A01ABB2616F29C252E51041BAFB65 (ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2* __this, const RuntimeMethod* method)
{
	return ((  NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* (*) (ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2*, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_m86713AAFF1D1F7D4FB370489F71AE4228741EFE8_gshared)(__this, method);
}
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// T UnityEngine.ExposedReference`1<TMPro.TMP_Text>::Resolve(UnityEngine.IExposedPropertyTable)
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ExposedReference_1_Resolve_mACB8FF709590BA7B11393BF2BCFE673084259D3B (ExposedReference_1_t4A7CCE48B335478E78C72DA7F792491FB788BE8A* __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (ExposedReference_1_t4A7CCE48B335478E78C72DA7F792491FB788BE8A*, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_mFA2938DF9E0A74422B71F573F5CC0A8B1CA54647_gshared)(__this, ___resolver0, method);
}
// System.Void NarrationBehaviour::set_mTextUI(TMPro.TMP_Text)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NarrationBehaviour_set_mTextUI_m41320953CF6A5BF0DBC04EACA2C5F42F06D964FF_inline (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<NarrationBehaviour>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_mF0D4FCCFF204C69A8A7E8F3CF301030ADAA9007D (ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2 ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2, const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m3FD2FD61DA16E18891F5223F509D18DBB614265A_gshared)(___playable0, method);
}
// System.Void NarrationBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrationBehaviour__ctor_m4D54CA8411FEBA23A61282095087111A99CEA505 (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_AddComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m7E6DD79B4F853CBB46CD7B9CDA2324E1F5297A72 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AttackColliderController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackColliderController_Start_mE34BBFC7B494CE1ED3762AD10184DBDFAD31F5D2 (AttackColliderController_t3B309E6BBE2B1BF72BBFC8A0BD7C45AC0BE813DA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AttackColliderController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackColliderController_Update_m38FEF448D450273FFB18C6D9CE171B8F4A3782CA (AttackColliderController_t3B309E6BBE2B1BF72BBFC8A0BD7C45AC0BE813DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D7DE069B48DC693967E0FECB75D31F05DB35E4);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&V_0), NULL);
		if ((!(((float)L_2) >= ((float)(1.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		// SendMessage("ColliderOff");
		Component_SendMessage_mB1BCD3D07E4CF35877A56FE404902FCC83A3EB46(__this, _stringLiteralC8D7DE069B48DC693967E0FECB75D31F05DB35E4, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void AttackColliderController::ColliderOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackColliderController_ColliderOn_m07031D5E948B3362983DEFF85892ACE469EC5AE4 (AttackColliderController_t3B309E6BBE2B1BF72BBFC8A0BD7C45AC0BE813DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BoyWalkAnim.direction)
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		bool L_0 = ((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// attackColliderR.GetComponent<BoxCollider2D>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___attackColliderR_4;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2;
		L_2 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_1, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		return;
	}

IL_0019:
	{
		// attackColliderL.GetComponent<BoxCollider2D>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___attackColliderL_5;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_4;
		L_4 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_3, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AttackColliderController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackColliderController__ctor_m3FCDEA10F26CD8E0538505034BBFC1E52FF85E9F (AttackColliderController_t3B309E6BBE2B1BF72BBFC8A0BD7C45AC0BE813DA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AttackColliderController1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackColliderController1_Start_m3E655EA344409E0A9B360F3E26EAA96149C04242 (AttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AttackColliderController1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackColliderController1_Update_mBC11D4FC92BA205E629BFF2A2A9853C7928582F5 (AttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AttackColliderController1::ColliderOn1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackColliderController1_ColliderOn1_mF9764CE1A4C9ACCC28B19DDD02DEE09E01BD6442 (AttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BoyWalkAnim.direction)
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		bool L_0 = ((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// hissatsuColliderR.GetComponent<BoxCollider2D>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___hissatsuColliderR_4;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2;
		L_2 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_1, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		return;
	}

IL_0019:
	{
		// hissatsuColliderL.GetComponent<BoxCollider2D>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___hissatsuColliderL_5;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_4;
		L_4 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_3, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AttackColliderController1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackColliderController1__ctor_mAD18939973D3EE2B6D2B3A91BDAFCA3D4C024265 (AttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AttackEnd::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackEnd_Start_m424D928A3AB3E11EF362F1F1A5FD0ACD5A7C6A75 (AttackEnd_tE3D4DECA8B301E4F23A05EE8D69731181F8EF158* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AttackEnd::ColliderOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackEnd_ColliderOff_mBA7B94E9621778DCD2B135F849A5048D4A719257 (AttackEnd_tE3D4DECA8B301E4F23A05EE8D69731181F8EF158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34_mFFCD83D8093E35E3C7B6FD0CAFC34958A0E7CFB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m6B5C5CC8667C05887B6852C87ABD95F966721D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BoyWalkAnim.direction)
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		bool L_0 = ((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7;
		if (!L_0)
		{
			goto IL_008f;
		}
	}
	{
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		// if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)275), NULL);
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)100), NULL);
		if (!L_4)
		{
			goto IL_0068;
		}
	}

IL_0041:
	{
		// GetComponent<Animator>().SetBool("right", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		goto IL_012e;
	}

IL_0068:
	{
		// GetComponent<Animator>().SetBool("idleR", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7;
		L_7 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		goto IL_012e;
	}

IL_008f:
	{
		// GetComponent<Animator>().SetBool("idleL", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9;
		L_9 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10;
		L_10 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11;
		L_11 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_11, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12;
		L_12 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
		bool L_13;
		L_13 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)276), NULL);
		if (L_13)
		{
			goto IL_00e8;
		}
	}
	{
		bool L_14;
		L_14 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)97), NULL);
		if (!L_14)
		{
			goto IL_010c;
		}
	}

IL_00e8:
	{
		// GetComponent<Animator>().SetBool("left", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15;
		L_15 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_15, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16;
		L_16 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_16, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		goto IL_012e;
	}

IL_010c:
	{
		// GetComponent<Animator>().SetBool("idleL", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17;
		L_17 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_17, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18;
		L_18 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_18, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
	}

IL_012e:
	{
		// GetComponent<BoyWalkAnim>().enabled = true;
		BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* L_19;
		L_19 = Component_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m6B5C5CC8667C05887B6852C87ABD95F966721D8D(__this, Component_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m6B5C5CC8667C05887B6852C87ABD95F966721D8D_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_19, (bool)1, NULL);
		// attackColliderR.GetComponent<BoxCollider2D>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___attackColliderR_4;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_21;
		L_21 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_20, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_21, (bool)0, NULL);
		// attackColliderL.GetComponent<BoxCollider2D>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___attackColliderL_5;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_23;
		L_23 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_22, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_23, (bool)0, NULL);
		// hissatsuColliderR.GetComponent<BoxCollider2D>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___hissatsuColliderR_6;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_25;
		L_25 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_24, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)0, NULL);
		// hissatsuColliderL.GetComponent<BoxCollider2D>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___hissatsuColliderL_7;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_27;
		L_27 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_26, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)0, NULL);
		// GetComponent<AttackColliderController1>().enabled = false;
		AttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34* L_28;
		L_28 = Component_GetComponent_TisAttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34_mFFCD83D8093E35E3C7B6FD0CAFC34958A0E7CFB8(__this, Component_GetComponent_TisAttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34_mFFCD83D8093E35E3C7B6FD0CAFC34958A0E7CFB8_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_28, (bool)0, NULL);
		// BoyWalkAnim.attack = false;
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___attack_14 = (bool)0;
		// }
		return;
	}
}
// System.Void AttackEnd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackEnd__ctor_mFD7648B4EB2530E520BDFC3DBFB8B993A9154F35 (AttackEnd_tE3D4DECA8B301E4F23A05EE8D69731181F8EF158* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoyWalkAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoyWalkAnim_Start_m28DF76463F587E10AECF8FFAD7BC2A759D7D825F (BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rbody2D_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rbody2D_6), (void*)L_0);
		// direction = true;
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7 = (bool)1;
		// if (GameObject.Find("Girl"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// GameObject.Find("Girl").GetComponent<SpriteRenderer>().color = new Color(0.2f, 0.2f, 0.2f, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_3, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_5), (0.200000003f), (0.200000003f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_4, L_5, NULL);
	}

IL_0050:
	{
		// attack = false;
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___attack_14 = (bool)0;
		// grounded = true;
		__this->___grounded_9 = (bool)1;
		// grounded1 = true;
		__this->___grounded1_10 = (bool)1;
		// speedKeep = speed;
		float L_6 = __this->___speed_4;
		__this->___speedKeep_5 = L_6;
		// }
		return;
	}
}
// System.Void BoyWalkAnim::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoyWalkAnim_FixedUpdate_mECC0E3BFADF1428A976B1C76D1D76F5E3DCBB165 (BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3 left_SP = transform.position - Vector3.right * 0.3f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, (0.300000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_3, NULL);
		// Vector3 right_SP = transform.position + Vector3.right * 0.3f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, (0.300000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_8, NULL);
		// Vector3 EP = transform.position - Vector3.up * 0.1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_11, L_13, NULL);
		// rbody2D.velocity = new Vector2(
		//     Input.GetAxisRaw("Horizontal") * speed * Time.deltaTime,
		//     rbody2D.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15 = __this->___rbody2D_6;
		float L_16;
		L_16 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_17 = __this->___speed_4;
		float L_18;
		L_18 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_19 = __this->___rbody2D_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_19, NULL);
		float L_21 = L_20.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_16, L_17)), L_18)), L_21, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_15, L_22, NULL);
		// if (!attack && speed == 0f)
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		bool L_23 = ((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___attack_14;
		if (L_23)
		{
			goto IL_00b7;
		}
	}
	{
		float L_24 = __this->___speed_4;
		if ((!(((float)L_24) == ((float)(0.0f)))))
		{
			goto IL_00b7;
		}
	}
	{
		// speed = speedKeep;
		float L_25 = __this->___speedKeep_5;
		__this->___speed_4 = L_25;
	}

IL_00b7:
	{
		// if (GameObject.Find("Girl"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_26, NULL);
		if (!L_27)
		{
			goto IL_00ff;
		}
	}
	{
		// GameObject.Find("Girl").GetComponent<Rigidbody2D>().velocity = new Vector2(0, GameObject.Find("Girl").GetComponent<Rigidbody2D>().velocity.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_29;
		L_29 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_28, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_31;
		L_31 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_30, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_31, NULL);
		float L_33 = L_32.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), (0.0f), L_33, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_29, L_34, NULL);
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Void BoyWalkAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoyWalkAnim_Update_m870F82ECB057A010BCE249C0EFFDAED6FD7CF742 (BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_mE10EAB1EAEFDC002588C4A2720746C4C24E7F518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306_m1C506F5408841E97A137703134027581F698F459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AD7F794D6674C75B4B7823474DA9C76501AFFAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B246DA1ACB838C5E1656064C3FBC993F29C9556);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73AB6F8E1B3FCDF7E97165EA5D9AC74FB83D8013);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A34A7C1EEA7328577EA7F70709DED6D3BADA456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE6613FF2F4512336AADC93EEA583737F1A8A7E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<SpriteRenderer>().sortingOrder = 4;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_0, 4, NULL);
		// grounded = Physics2D.Linecast(transform.position - Vector3.right * 0.182f,
		//    transform.position - Vector3.right * 0.182f - transform.up / 20,
		//    groundlayer | objectlayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.181999996f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, (0.181999996f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_13, (20.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_11, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_15, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = __this->___groundlayer_11;
		int32_t L_18;
		L_18 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_17, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_19 = __this->___objectlayer_12;
		int32_t L_20;
		L_20 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_21;
		L_21 = Physics2D_Linecast_m38BDCA98A5B3B55B46E7AD91B9B3C0B1F60ADA43(L_6, L_16, ((int32_t)(L_18|L_20)), NULL);
		bool L_22;
		L_22 = RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5(L_21, NULL);
		__this->___grounded_9 = L_22;
		// grounded1 = Physics2D.Linecast(transform.position - Vector3.left * 0.252f,
		//    transform.position - Vector3.left * 0.252f - transform.up / 20,
		//    groundlayer | objectlayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, (0.252000004f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_24, L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_31, (0.252000004f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_30, L_32, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_35, (20.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_33, L_36, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_37, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_39 = __this->___groundlayer_11;
		int32_t L_40;
		L_40 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_39, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_41 = __this->___objectlayer_12;
		int32_t L_42;
		L_42 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_41, NULL);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_43;
		L_43 = Physics2D_Linecast_m38BDCA98A5B3B55B46E7AD91B9B3C0B1F60ADA43(L_28, L_38, ((int32_t)(L_40|L_42)), NULL);
		bool L_44;
		L_44 = RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5(L_43, NULL);
		__this->___grounded1_10 = L_44;
		// if ((Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W)) && (grounded || grounded1))
		bool L_45;
		L_45 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)273), NULL);
		if (L_45)
		{
			goto IL_0133;
		}
	}
	{
		bool L_46;
		L_46 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)119), NULL);
		if (!L_46)
		{
			goto IL_0169;
		}
	}

IL_0133:
	{
		bool L_47 = __this->___grounded_9;
		if (L_47)
		{
			goto IL_0143;
		}
	}
	{
		bool L_48 = __this->___grounded1_10;
		if (!L_48)
		{
			goto IL_0169;
		}
	}

IL_0143:
	{
		// this.rbody2D.AddForce(transform.up * jumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_49 = __this->___rbody2D_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_50, NULL);
		float L_52 = __this->___jumpForce_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_51, L_52, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_53, NULL);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_49, L_54, NULL);
	}

IL_0169:
	{
		// if (Input.GetKeyDown(KeyCode.Space) && LifeManager.charging >= 1) // ?U?????[?V?????BAttackColliderController?AAttackEnd??????B
		bool L_55;
		L_55 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_55)
		{
			goto IL_0340;
		}
	}
	{
		int32_t L_56 = ((LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_StaticFields*)il2cpp_codegen_static_fields_for(LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var))->___charging_9;
		if ((((int32_t)L_56) < ((int32_t)1)))
		{
			goto IL_0340;
		}
	}
	{
		// attack = true;
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___attack_14 = (bool)1;
		// if (LifeManager.charging == 1)
		int32_t L_57 = ((LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_StaticFields*)il2cpp_codegen_static_fields_for(LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var))->___charging_9;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_024d;
		}
	}
	{
		// if (BoyWalkAnim.direction)
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		bool L_58 = ((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7;
		if (!L_58)
		{
			goto IL_01ee;
		}
	}
	{
		// GetComponent<Animator>().SetTrigger("attackR");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_59;
		L_59 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_59, _stringLiteral6B246DA1ACB838C5E1656064C3FBC993F29C9556, NULL);
		// GetComponent<Animator>().SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_60;
		L_60 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_60, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_61;
		L_61 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_61, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_62;
		L_62 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_62, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_63;
		L_63 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_63, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		goto IL_0242;
	}

IL_01ee:
	{
		// GetComponent<Animator>().SetTrigger("attackL");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_64;
		L_64 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_64, _stringLiteralDE6613FF2F4512336AADC93EEA583737F1A8A7E6, NULL);
		// GetComponent<Animator>().SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_65;
		L_65 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_65, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_66;
		L_66 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_66, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_67;
		L_67 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_67, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_68;
		L_68 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_68, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
	}

IL_0242:
	{
		// attackSE.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_69 = __this->___attackSE_16;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_69, NULL);
	}

IL_024d:
	{
		// if (LifeManager.charging >= 2)
		int32_t L_70 = ((LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_StaticFields*)il2cpp_codegen_static_fields_for(LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var))->___charging_9;
		if ((((int32_t)L_70) < ((int32_t)2)))
		{
			goto IL_0314;
		}
	}
	{
		// if (BoyWalkAnim.direction)
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		bool L_71 = ((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7;
		if (!L_71)
		{
			goto IL_02b5;
		}
	}
	{
		// GetComponent<Animator>().SetTrigger("hissatsuR");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_72;
		L_72 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_72, _stringLiteral1AD7F794D6674C75B4B7823474DA9C76501AFFAE, NULL);
		// GetComponent<Animator>().SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_73;
		L_73 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_73, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_74;
		L_74 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_74, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_75;
		L_75 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_75, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_76;
		L_76 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_76, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		goto IL_0309;
	}

IL_02b5:
	{
		// GetComponent<Animator>().SetTrigger("hissatsuL");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_77;
		L_77 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_77, _stringLiteral9A34A7C1EEA7328577EA7F70709DED6D3BADA456, NULL);
		// GetComponent<Animator>().SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_78;
		L_78 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_78, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_79;
		L_79 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_79, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_80;
		L_80 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_80, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_81;
		L_81 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_81, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
	}

IL_0309:
	{
		// hissatsuSE.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_82 = __this->___hissatsuSE_17;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_82, NULL);
	}

IL_0314:
	{
		// SendMessage("LifeUI");
		Component_SendMessage_mB1BCD3D07E4CF35877A56FE404902FCC83A3EB46(__this, _stringLiteral73AB6F8E1B3FCDF7E97165EA5D9AC74FB83D8013, NULL);
		// LifeManager.charging = 0;
		((LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_StaticFields*)il2cpp_codegen_static_fields_for(LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var))->___charging_9 = 0;
		// if (grounded || grounded1)
		bool L_83 = __this->___grounded_9;
		if (L_83)
		{
			goto IL_0335;
		}
	}
	{
		bool L_84 = __this->___grounded1_10;
		if (!L_84)
		{
			goto IL_0340;
		}
	}

IL_0335:
	{
		// speed = 0f;
		__this->___speed_4 = (0.0f);
	}

IL_0340:
	{
		// if (!attack)
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		bool L_85 = ((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___attack_14;
		if (L_85)
		{
			goto IL_06a5;
		}
	}
	{
		// if ((Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D)))
		bool L_86;
		L_86 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)275), NULL);
		if (L_86)
		{
			goto IL_035f;
		}
	}
	{
		bool L_87;
		L_87 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)100), NULL);
		if (!L_87)
		{
			goto IL_03b0;
		}
	}

IL_035f:
	{
		// GetComponent<Animator>().SetBool("right", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_88;
		L_88 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_88, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_89;
		L_89 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_89, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_90;
		L_90 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_90, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_91;
		L_91 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_91, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// direction = true;
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7 = (bool)1;
		// stand = 1;
		__this->___stand_13 = 1;
	}

IL_03b0:
	{
		// if ((Input.GetKeyUp(KeyCode.RightArrow) || Input.GetKeyUp(KeyCode.D)) && stand == 1)
		bool L_92;
		L_92 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)275), NULL);
		if (L_92)
		{
			goto IL_03c5;
		}
	}
	{
		bool L_93;
		L_93 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)100), NULL);
		if (!L_93)
		{
			goto IL_041f;
		}
	}

IL_03c5:
	{
		int32_t L_94 = __this->___stand_13;
		if ((!(((uint32_t)L_94) == ((uint32_t)1))))
		{
			goto IL_041f;
		}
	}
	{
		// GetComponent<Animator>().SetBool("idleR", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_95;
		L_95 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_95, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_96;
		L_96 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_96, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_97;
		L_97 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_97, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_98;
		L_98 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_98, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// direction = true;
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7 = (bool)1;
		// stand = 0;
		__this->___stand_13 = 0;
	}

IL_041f:
	{
		// if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
		bool L_99;
		L_99 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)276), NULL);
		if (L_99)
		{
			goto IL_0434;
		}
	}
	{
		bool L_100;
		L_100 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)97), NULL);
		if (!L_100)
		{
			goto IL_0485;
		}
	}

IL_0434:
	{
		// GetComponent<Animator>().SetBool("left", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_101;
		L_101 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_101, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_102;
		L_102 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_102, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_103;
		L_103 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_103, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_104;
		L_104 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_104, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// direction = false;
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7 = (bool)0;
		// stand = 2;
		__this->___stand_13 = 2;
	}

IL_0485:
	{
		// if ((Input.GetKeyUp(KeyCode.LeftArrow) || Input.GetKeyUp(KeyCode.A)) && stand == 2)
		bool L_105;
		L_105 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)276), NULL);
		if (L_105)
		{
			goto IL_049a;
		}
	}
	{
		bool L_106;
		L_106 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)97), NULL);
		if (!L_106)
		{
			goto IL_04f4;
		}
	}

IL_049a:
	{
		int32_t L_107 = __this->___stand_13;
		if ((!(((uint32_t)L_107) == ((uint32_t)2))))
		{
			goto IL_04f4;
		}
	}
	{
		// GetComponent<Animator>().SetBool("idleL", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_108;
		L_108 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_108, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_109;
		L_109 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_109, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_110;
		L_110 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_110, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_111;
		L_111 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_111, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// direction = false;
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7 = (bool)0;
		// stand = 0;
		__this->___stand_13 = 0;
	}

IL_04f4:
	{
		// if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S))
		bool L_112;
		L_112 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)274), NULL);
		if (L_112)
		{
			goto IL_050c;
		}
	}
	{
		bool L_113;
		L_113 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)115), NULL);
		if (!L_113)
		{
			goto IL_06a5;
		}
	}

IL_050c:
	{
		// if (GameObject.Find("Girl"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_114;
		L_114 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_114, NULL);
		if (!L_115)
		{
			goto IL_06a5;
		}
	}
	{
		// GetComponent<SpriteRenderer>().enabled= false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116;
		L_116 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_116, (bool)0, NULL);
		// GetComponent<Animator>().enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_117;
		L_117 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_117, (bool)0, NULL);
		// shadow.GetComponent<SpriteRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_118 = __this->___shadow_15;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119;
		L_119 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_118, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_119, (bool)1, NULL);
		// shadow.GetComponent<SpriteRenderer>().sortingOrder = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120 = __this->___shadow_15;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121;
		L_121 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_120, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_121, 3, NULL);
		// GameObject.Find("Girl").GetComponent<GirlWalkAnim>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122;
		L_122 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		GirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306* L_123;
		L_123 = GameObject_GetComponent_TisGirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306_m1C506F5408841E97A137703134027581F698F459(L_122, GameObject_GetComponent_TisGirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306_m1C506F5408841E97A137703134027581F698F459_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_123, (bool)1, NULL);
		// GameObject.Find("Girl").GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124;
		L_124 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_125;
		L_125 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_124, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_126;
		memset((&L_126), 0, sizeof(L_126));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_126), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_125, L_126, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// GetComponent<LifeManager>().enabled = false;
		LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* L_127;
		L_127 = Component_GetComponent_TisLifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_mE10EAB1EAEFDC002588C4A2720746C4C24E7F518(__this, Component_GetComponent_TisLifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_mE10EAB1EAEFDC002588C4A2720746C4C24E7F518_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_127, (bool)0, NULL);
		// if (direction)
		il2cpp_codegen_runtime_class_init_inline(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		bool L_128 = ((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7;
		if (!L_128)
		{
			goto IL_062e;
		}
	}
	{
		// GetComponent<Animator>().SetBool("idleR", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_129;
		L_129 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_129, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_130;
		L_130 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_130, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_131;
		L_131 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_131, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_132;
		L_132 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_132, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// shadow.GetComponent<Animator>().SetBool("idleR", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_133 = __this->___shadow_15;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_134;
		L_134 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_133, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_134, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)1, NULL);
		// shadow.GetComponent<Animator>().SetBool("idleL", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_135 = __this->___shadow_15;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_136;
		L_136 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_135, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_136, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_062e:
	{
		// GetComponent<Animator>().SetBool("idleL", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_137;
		L_137 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_137, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)1, NULL);
		// GetComponent<Animator>().SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_138;
		L_138 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_138, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_139;
		L_139 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_139, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_140;
		L_140 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_140, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// shadow.GetComponent<Animator>().SetBool("idleL", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = __this->___shadow_15;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_142;
		L_142 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_141, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_142, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)1, NULL);
		// shadow.GetComponent<Animator>().SetBool("idleR", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_143 = __this->___shadow_15;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_144;
		L_144 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_143, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_144, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_06a5:
	{
		// }
		return;
	}
}
// System.Void BoyWalkAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoyWalkAnim__ctor_m1657ECE66EE2E40DB2A08D2188F3F483447023E7 (BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* __this, const RuntimeMethod* method) 
{
	{
		// private float jumpForce = 350f;
		__this->___jumpForce_8 = (350.0f);
		// private bool grounded = true;
		__this->___grounded_9 = (bool)1;
		// private bool grounded1 = true;
		__this->___grounded1_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void BoyWalkAnim::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoyWalkAnim__cctor_m87BB16445F5E2A528858BBC3C58451665CC0E379 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool direction = true; // true????E?????Afalse?????????
		((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___direction_7 = (bool)1;
		// public static bool attack = false; // ?U?????[?V?????????????????????????|???i?C????????????????j
		((BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_StaticFields*)il2cpp_codegen_static_fields_for(BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_il2cpp_TypeInfo_var))->___attack_14 = (bool)0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LifeManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeManager_Start_m1AFFE44AF185511FFE8D1970D877CB2F45B38642 (LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// charging = 0;
		((LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_StaticFields*)il2cpp_codegen_static_fields_for(LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var))->___charging_9 = 0;
		// }
		return;
	}
}
// System.Void LifeManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeManager_Update_m30FE9748ECC76B1D7B275BD9E4E0F7AD6AD23786 (LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34_mFFCD83D8093E35E3C7B6FD0CAFC34958A0E7CFB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m6B5C5CC8667C05887B6852C87ABD95F966721D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (charging >= 2)
		int32_t L_0 = ((LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_StaticFields*)il2cpp_codegen_static_fields_for(LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var))->___charging_9;
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		// GetComponent<AttackColliderController1>().enabled = true;
		AttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34* L_1;
		L_1 = Component_GetComponent_TisAttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34_mFFCD83D8093E35E3C7B6FD0CAFC34958A0E7CFB8(__this, Component_GetComponent_TisAttackColliderController1_t01EC488889F9A416B3994C078686E8F94C801D34_mFFCD83D8093E35E3C7B6FD0CAFC34958A0E7CFB8_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
	}

IL_0014:
	{
		// switch (LifeLimit.lifeLimit)
		int32_t L_2 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_0060;
			}
			case 3:
			{
				goto IL_00a1;
			}
		}
	}
	{
		goto IL_00ab;
	}

IL_0032:
	{
		// gameover = 5;
		__this->___gameover_12 = 5;
		// break;
		goto IL_00b2;
	}

IL_003b:
	{
		// gameover = 3;
		__this->___gameover_12 = 3;
		// life[0].enabled = false;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_4 = __this->___life_4;
		int32_t L_5 = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// life[1].enabled = false;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_7 = __this->___life_4;
		int32_t L_8 = 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// break;
		goto IL_00b2;
	}

IL_0060:
	{
		// gameover = 1;
		__this->___gameover_12 = 1;
		// life[0].enabled = false;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_10 = __this->___life_4;
		int32_t L_11 = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, (bool)0, NULL);
		// life[1].enabled = false;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_13 = __this->___life_4;
		int32_t L_14 = 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)0, NULL);
		// life[2].enabled = false;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_16 = __this->___life_4;
		int32_t L_17 = 2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)0, NULL);
		// life[3].enabled = false;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_19 = __this->___life_4;
		int32_t L_20 = 3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_21, (bool)0, NULL);
		// break;
		goto IL_00b2;
	}

IL_00a1:
	{
		// gameover = 99;
		__this->___gameover_12 = ((int32_t)99);
		// break;
		goto IL_00b2;
	}

IL_00ab:
	{
		// gameover = 5;
		__this->___gameover_12 = 5;
	}

IL_00b2:
	{
		// if (energy >= gameover)
		int32_t L_22 = __this->___energy_8;
		int32_t L_23 = __this->___gameover_12;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_019d;
		}
	}
	{
		// GetComponent<BoyWalkAnim>().enabled = false;
		BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* L_24;
		L_24 = Component_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m6B5C5CC8667C05887B6852C87ABD95F966721D8D(__this, Component_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m6B5C5CC8667C05887B6852C87ABD95F966721D8D_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)0, NULL);
		// GetComponent<Rigidbody2D>().velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_25;
		L_25 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_25, L_26, NULL);
		// bokashi.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___bokashi_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)1, NULL);
		// if (!over.isPlaying && on)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_28 = __this->___over_15;
		bool L_29;
		L_29 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_28, NULL);
		if (L_29)
		{
			goto IL_011c;
		}
	}
	{
		bool L_30 = __this->___on_13;
		if (!L_30)
		{
			goto IL_011c;
		}
	}
	{
		// over.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_31 = __this->___over_15;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_31, NULL);
		// on = false;
		__this->___on_13 = (bool)0;
	}

IL_011c:
	{
		// elapsed += Time.deltaTime;
		float L_32 = __this->___elapsed_10;
		float L_33;
		L_33 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsed_10 = ((float)il2cpp_codegen_add(L_32, L_33));
		// if (elapsed >= 0.2f)
		float L_34 = __this->___elapsed_10;
		if ((!(((float)L_34) >= ((float)(0.200000003f)))))
		{
			goto IL_019d;
		}
	}
	{
		// alfa += Time.deltaTime;
		float L_35 = __this->___alfa_11;
		float L_36;
		L_36 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_11 = ((float)il2cpp_codegen_add(L_35, L_36));
		// black.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___black_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_37, (bool)1, NULL);
		// black.color = new Color(0, 0, 0, alfa);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38 = __this->___black_7;
		float L_39 = __this->___alfa_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		memset((&L_40), 0, sizeof(L_40));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_40), (0.0f), (0.0f), (0.0f), L_39, /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_38, L_40);
		// if (alfa >= 1.0f)
		float L_41 = __this->___alfa_11;
		if ((!(((float)L_41) >= ((float)(1.0f)))))
		{
			goto IL_019d;
		}
	}
	{
		// Scene loadScene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_42;
		L_42 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_1 = L_42;
		// SceneManager.LoadScene(loadScene.name);
		String_t* L_43;
		L_43 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_1), NULL);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_43, NULL);
	}

IL_019d:
	{
		// }
		return;
	}
}
// System.Void LifeManager::LifeUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeManager_LifeUI_m7993BA2A629E9832256414233FB0A401E48EF949 (LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9EE5AF5B4EB10F18968FD4043D831AFE5F501EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (LifeLimit.lifeLimit == 0)
		int32_t L_0 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4;
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		// for (int r = 0; r <= energy; r++)
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		// life[r].GetComponent<Animator>().SetBool("release", true);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_1 = __this->___life_4;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_4, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteralD9EE5AF5B4EB10F18968FD4043D831AFE5F501EC, (bool)1, NULL);
		// for (int r = 0; r <= energy; r++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		// for (int r = 0; r <= energy; r++)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___energy_8;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_0031:
	{
		// else if (LifeLimit.lifeLimit == 1)
		int32_t L_9 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}
	{
		// for (int r = 2; r <= energy + 2; r++)
		V_1 = 2;
		goto IL_0059;
	}

IL_003d:
	{
		// life[r].GetComponent<Animator>().SetBool("release", true);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_10 = __this->___life_4;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14;
		L_14 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_13, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_14, _stringLiteralD9EE5AF5B4EB10F18968FD4043D831AFE5F501EC, (bool)1, NULL);
		// for (int r = 2; r <= energy + 2; r++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0059:
	{
		// for (int r = 2; r <= energy + 2; r++)
		int32_t L_16 = V_1;
		int32_t L_17 = __this->___energy_8;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_17, 2)))))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_0065:
	{
		// else if (LifeLimit.lifeLimit == 2)
		int32_t L_18 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_0099;
		}
	}
	{
		// for (int r = 4; r <= energy + 4; r++)
		V_2 = 4;
		goto IL_008d;
	}

IL_0071:
	{
		// life[r].GetComponent<Animator>().SetBool("release", true);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_19 = __this->___life_4;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23;
		L_23 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_22, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_23, _stringLiteralD9EE5AF5B4EB10F18968FD4043D831AFE5F501EC, (bool)1, NULL);
		// for (int r = 4; r <= energy + 4; r++)
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008d:
	{
		// for (int r = 4; r <= energy + 4; r++)
		int32_t L_25 = V_2;
		int32_t L_26 = __this->___energy_8;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 4)))))
		{
			goto IL_0071;
		}
	}
	{
		return;
	}

IL_0099:
	{
		// drink[0].enabled = false;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_27 = __this->___drink_5;
		int32_t L_28 = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		// drink[1].enabled = false;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_30 = __this->___drink_5;
		int32_t L_31 = 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_32, (bool)0, NULL);
		// drink[2].enabled = false;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_33 = __this->___drink_5;
		int32_t L_34 = 2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_35, (bool)0, NULL);
		// drink[3].enabled = false;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_36 = __this->___drink_5;
		int32_t L_37 = 3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_38, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LifeManager::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeManager_OnTriggerEnter2D_m65868B00F0458D38F9EB80655D0E9DE19793C45D (LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14D50FB15D3553C45579FC77CBBB19F0DB0D1113);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A13903ED2D1E2FB7298D14AE4191CD0A3870D4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (collision.gameObject.name == "drink")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral49A13903ED2D1E2FB7298D14AE4191CD0A3870D4, NULL);
		if (!L_3)
		{
			goto IL_0105;
		}
	}
	{
		// energy++;
		int32_t L_4 = __this->___energy_8;
		__this->___energy_8 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// if (LifeLimit.lifeLimit == 0)
		int32_t L_5 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4;
		if (L_5)
		{
			goto IL_005a;
		}
	}
	{
		// for (int r = 0; r <= energy; r++)
		V_0 = 0;
		goto IL_004f;
	}

IL_0033:
	{
		// life[r].GetComponent<Animator>().SetBool("charge", true);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_6 = __this->___life_4;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10;
		L_10 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_9, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral14D50FB15D3553C45579FC77CBBB19F0DB0D1113, (bool)1, NULL);
		// for (int r = 0; r <= energy; r++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004f:
	{
		// for (int r = 0; r <= energy; r++)
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___energy_8;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0033;
		}
	}
	{
		goto IL_00d7;
	}

IL_005a:
	{
		// else if (LifeLimit.lifeLimit == 1)
		int32_t L_14 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_008f;
		}
	}
	{
		// for (int r = 2; r <= energy + 2; r++)
		V_1 = 2;
		goto IL_0082;
	}

IL_0066:
	{
		// life[r].GetComponent<Animator>().SetBool("charge", true);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_15 = __this->___life_4;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19;
		L_19 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_18, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_19, _stringLiteral14D50FB15D3553C45579FC77CBBB19F0DB0D1113, (bool)1, NULL);
		// for (int r = 2; r <= energy + 2; r++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0082:
	{
		// for (int r = 2; r <= energy + 2; r++)
		int32_t L_21 = V_1;
		int32_t L_22 = __this->___energy_8;
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_22, 2)))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_00d7;
	}

IL_008f:
	{
		// else if (LifeLimit.lifeLimit == 2)
		int32_t L_23 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4;
		if ((!(((uint32_t)L_23) == ((uint32_t)2))))
		{
			goto IL_00c4;
		}
	}
	{
		// for (int r = 4; r <= energy + 4; r++)
		V_2 = 4;
		goto IL_00b7;
	}

IL_009b:
	{
		// life[r].GetComponent<Animator>().SetBool("charge", true);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_24 = __this->___life_4;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28;
		L_28 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_27, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_28, _stringLiteral14D50FB15D3553C45579FC77CBBB19F0DB0D1113, (bool)1, NULL);
		// for (int r = 4; r <= energy + 4; r++)
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00b7:
	{
		// for (int r = 4; r <= energy + 4; r++)
		int32_t L_30 = V_2;
		int32_t L_31 = __this->___energy_8;
		if ((((int32_t)L_30) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_31, 4)))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_00d7;
	}

IL_00c4:
	{
		// drink[energy].enabled = true;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_32 = __this->___drink_5;
		int32_t L_33 = __this->___energy_8;
		int32_t L_34 = L_33;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_35, (bool)1, NULL);
	}

IL_00d7:
	{
		// Destroy(collision.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_36 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_37, NULL);
		// charging++;
		int32_t L_38 = ((LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_StaticFields*)il2cpp_codegen_static_fields_for(LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var))->___charging_9;
		((LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_StaticFields*)il2cpp_codegen_static_fields_for(LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_il2cpp_TypeInfo_var))->___charging_9 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		// StoryManager.drink++;
		int32_t L_39 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		// se.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_40 = __this->___se_14;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_40, NULL);
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void LifeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeManager__ctor_mE84B9B1626A981FFADCF9B3005CF0BDB3AD0EE04 (LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* __this, const RuntimeMethod* method) 
{
	{
		// private int energy = -1; // ????????life???
		__this->___energy_8 = (-1);
		// private int gameover = 5;
		__this->___gameover_12 = 5;
		// private bool on = true;
		__this->___on_13 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DefeatEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatEnemy_Start_m65BDA5AF16ADF8FCBDF2BED70CAE31BC8351969C (DefeatEnemy_tB034F887EC4B7602534EF5A0A93D449A0DDC0E4C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DefeatEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatEnemy_Update_m03C1F3F8EE3CD30DC4A294423B15EC4115F43512 (DefeatEnemy_tB034F887EC4B7602534EF5A0A93D449A0DDC0E4C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DefeatEnemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatEnemy_OnTriggerEnter2D_m577F735D70F78BA5FE0546EF63614F023AFA96B2 (DefeatEnemy_tB034F887EC4B7602534EF5A0A93D449A0DDC0E4C* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F05CCFA5D61E9513722E152662BB6C2A7E73A3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D75839F7EE2FBF5783870F5CB50ABAFB2CEA325);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "HissatsuCollider")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral8D75839F7EE2FBF5783870F5CB50ABAFB2CEA325, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_4;
		L_4 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("defeat", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral6F05CCFA5D61E9513722E152662BB6C2A7E73A3E, (bool)1, NULL);
		// defeat.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___defeat_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void DefeatEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatEnemy__ctor_mB04CB998642428AEAF6CE25563A5D644D410F8F7 (DefeatEnemy_tB034F887EC4B7602534EF5A0A93D449A0DDC0E4C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DefeatEnemy1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatEnemy1_Start_mBDD83242C96E1766B0398C3C10C24F52BCA47D26 (DefeatEnemy1_t1E828594344258400A4A3FEBF9DB129F750A9F2B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DefeatEnemy1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatEnemy1_Update_mE74B571DF143899EE9923FEEC6843381E555BB39 (DefeatEnemy1_t1E828594344258400A4A3FEBF9DB129F750A9F2B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DefeatEnemy1::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatEnemy1_OnTriggerEnter2D_m21366879F4C8A372F95CEAFF54A9584FE56284DF (DefeatEnemy1_t1E828594344258400A4A3FEBF9DB129F750A9F2B* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00899987F06AB9DF856C491E2F1A2C97BE8ED58F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF16545FEE2A7CBB2699FA0B96CB7E103B27CF1EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "HissatsuCollider1")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralF16545FEE2A7CBB2699FA0B96CB7E103B27CF1EC, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_4;
		L_4 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("defeat1", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral00899987F06AB9DF856C491E2F1A2C97BE8ED58F, (bool)1, NULL);
		// defeat.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___defeat_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void DefeatEnemy1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatEnemy1__ctor_m89D5B0AA141FB866DBE112F0A24FB034CBE0CE29 (DefeatEnemy1_t1E828594344258400A4A3FEBF9DB129F750A9F2B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GirlCapturedAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GirlCapturedAnim_Start_mC1D36E94F1829F3ED0A311676B8C120C7C3DAF84 (GirlCapturedAnim_tE49279D2656AC27DF06C57F50604BD74E8EF6FB8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GirlCapturedAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GirlCapturedAnim_Update_mABE3FBAA99188300C1335BE29995D7B9478CBA9C (GirlCapturedAnim_tE49279D2656AC27DF06C57F50604BD74E8EF6FB8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GirlCapturedAnim::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GirlCapturedAnim_OnCollisionEnter2D_m08FFB45DCFCBB4E806A2F7BE9D6A0ECD2832279F (GirlCapturedAnim_tE49279D2656AC27DF06C57F50604BD74E8EF6FB8* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DF270E89DA1217142D3889D410647EFC8CC79A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Tile")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE, NULL);
		if (!L_3)
		{
			goto IL_0094;
		}
	}
	{
		// GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 0f);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_5), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_4, L_5, NULL);
		// girlSleeping.GetComponent<SpriteRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___girlSleeping_5;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7;
		L_7 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_6, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)1, NULL);
		// boy.GetComponent<SpriteRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___boy_4;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)0, NULL);
		// shadow.GetComponent<SpriteRenderer>().enabled = true; // left direction
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___shadow_7;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11;
		L_11 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_10, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_11, (bool)1, NULL);
		// story.SendMessage("CollisionCheck"); // Tutorial1Anim
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___story_8;
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_12, _stringLiteral8DF270E89DA1217142D3889D410647EFC8CC79A9, NULL);
		// hyun.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = __this->___hyun_9;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_13, NULL);
		// dosa.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___dosa_10;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void GirlCapturedAnim::GirlGetUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GirlCapturedAnim_GirlGetUp_mEA4252F6D61F1E09DA85CBC820A587B9C9F4D33E (GirlCapturedAnim_tE49279D2656AC27DF06C57F50604BD74E8EF6FB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// girlSleeping.GetComponent<SpriteRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___girlSleeping_5;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)0, NULL);
		// girl.GetComponent<SpriteRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___girl_6;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_2, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GirlCapturedAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GirlCapturedAnim__ctor_mAD1F0C9EF304164AF8FED78CD9A59CBB0193FA94 (GirlCapturedAnim_tE49279D2656AC27DF06C57F50604BD74E8EF6FB8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GirlWalkAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GirlWalkAnim_Start_m22AB7108FE936E7C20EB696142C44B6AD6C88363 (GirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_0);
		// rbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rbody2D_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rbody2D_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void GirlWalkAnim::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GirlWalkAnim_FixedUpdate_mB3842E07733D802CD2D04A547D6DE680C47FF90B (GirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3 left_SP = transform.position - Vector3.right * 0.3f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, (0.300000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_3, NULL);
		// Vector3 right_SP = transform.position + Vector3.right * 0.3f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, (0.300000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_8, NULL);
		// Vector3 EP = transform.position - Vector3.up * 0.1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_11, L_13, NULL);
		//  rbody2D.velocity = new Vector2(
		//  Input.GetAxisRaw("Horizontal") * speed * Time.deltaTime,
		// rbody2D.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15 = __this->___rbody2D_6;
		float L_16;
		L_16 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_17 = __this->___speed_5;
		float L_18;
		L_18 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_19 = __this->___rbody2D_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_19, NULL);
		float L_21 = L_20.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_16, L_17)), L_18)), L_21, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_15, L_22, NULL);
		// GameObject.Find("Boy").GetComponent<Rigidbody2D>().velocity = new Vector2(0, GameObject.Find("Boy").GetComponent<Rigidbody2D>().velocity.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_24;
		L_24 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_23, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_26;
		L_26 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_25, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_26, NULL);
		float L_28 = L_27.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), (0.0f), L_28, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_24, L_29, NULL);
		// }
		return;
	}
}
// System.Void GirlWalkAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GirlWalkAnim_Update_m1EECA575E6B6D1817CB4027A1B7522A47F3AB5BB (GirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_mDB401DC36ECEF70F7CF711104C9071B0ED8276D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Find("Boy").GetComponent<BoyWalkAnim>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* L_1;
		L_1 = GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193(L_0, GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// GameObject.Find("Boy").GetComponent<Animator>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_2, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		// GetComponent<SpriteRenderer>().sortingOrder = 4;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_4, 4, NULL);
		// grounded = Physics2D.Linecast(transform.position - Vector3.right * 0.182f,
		//    transform.position - Vector3.right * 0.182f - transform.up / 20,
		//    groundlayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, (0.181999996f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_13, (0.181999996f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_17, (20.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_15, L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_19, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_21 = __this->___groundlayer_11;
		int32_t L_22;
		L_22 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_23;
		L_23 = Physics2D_Linecast_m38BDCA98A5B3B55B46E7AD91B9B3C0B1F60ADA43(L_10, L_20, L_22, NULL);
		bool L_24;
		L_24 = RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5(L_23, NULL);
		__this->___grounded_9 = L_24;
		// grounded1 = Physics2D.Linecast(transform.position - Vector3.left * 0.252f,
		//    transform.position - Vector3.left * 0.252f - transform.up / 20,
		//    groundlayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_27, (0.252000004f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_26, L_28, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_29, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_33, (0.252000004f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_32, L_34, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_37, (20.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_35, L_38, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_39, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_41 = __this->___groundlayer_11;
		int32_t L_42;
		L_42 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_41, NULL);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_43;
		L_43 = Physics2D_Linecast_m38BDCA98A5B3B55B46E7AD91B9B3C0B1F60ADA43(L_30, L_40, L_42, NULL);
		bool L_44;
		L_44 = RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5(L_43, NULL);
		__this->___grounded1_10 = L_44;
		// if ((Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W)) && (grounded || grounded1))
		bool L_45;
		L_45 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)273), NULL);
		if (L_45)
		{
			goto IL_0145;
		}
	}
	{
		bool L_46;
		L_46 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)119), NULL);
		if (!L_46)
		{
			goto IL_017b;
		}
	}

IL_0145:
	{
		bool L_47 = __this->___grounded_9;
		if (L_47)
		{
			goto IL_0155;
		}
	}
	{
		bool L_48 = __this->___grounded1_10;
		if (!L_48)
		{
			goto IL_017b;
		}
	}

IL_0155:
	{
		// this.rbody2D.AddForce(transform.up * jumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_49 = __this->___rbody2D_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_50, NULL);
		float L_52 = __this->___jumpForce_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_51, L_52, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_53, NULL);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_49, L_54, NULL);
	}

IL_017b:
	{
		// if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
		bool L_55;
		L_55 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)275), NULL);
		if (L_55)
		{
			goto IL_0190;
		}
	}
	{
		bool L_56;
		L_56 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)100), NULL);
		if (!L_56)
		{
			goto IL_01db;
		}
	}

IL_0190:
	{
		// animator.SetBool("right", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_57 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_57, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// animator.SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_58 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_58, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// animator.SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_59 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_59, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		// animator.SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_60 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_60, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// direction = true;
		__this->___direction_7 = (bool)1;
	}

IL_01db:
	{
		// if ((Input.GetKeyUp(KeyCode.RightArrow) || Input.GetKeyUp(KeyCode.D)))
		bool L_61;
		L_61 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)275), NULL);
		if (L_61)
		{
			goto IL_01f0;
		}
	}
	{
		bool L_62;
		L_62 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)100), NULL);
		if (!L_62)
		{
			goto IL_023b;
		}
	}

IL_01f0:
	{
		// animator.SetBool("idleR", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_63 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_63, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)1, NULL);
		// animator.SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_64 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_64, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		// animator.SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_65 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_65, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// animator.SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_66 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_66, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// direction = true;
		__this->___direction_7 = (bool)1;
	}

IL_023b:
	{
		// if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
		bool L_67;
		L_67 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)276), NULL);
		if (L_67)
		{
			goto IL_0250;
		}
	}
	{
		bool L_68;
		L_68 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)97), NULL);
		if (!L_68)
		{
			goto IL_029b;
		}
	}

IL_0250:
	{
		// animator.SetBool("left", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_69 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_69, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)1, NULL);
		// animator.SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_70 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_70, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		// animator.SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_71 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_71, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// animator.SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_72 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_72, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// direction = false;
		__this->___direction_7 = (bool)0;
	}

IL_029b:
	{
		// if ((Input.GetKeyUp(KeyCode.LeftArrow) || Input.GetKeyUp(KeyCode.A)))
		bool L_73;
		L_73 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)276), NULL);
		if (L_73)
		{
			goto IL_02b0;
		}
	}
	{
		bool L_74;
		L_74 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)97), NULL);
		if (!L_74)
		{
			goto IL_02fb;
		}
	}

IL_02b0:
	{
		// animator.SetBool("idleL", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_75 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_75, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)1, NULL);
		// animator.SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_76 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_76, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// animator.SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_77 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_77, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// animator.SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_78 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_78, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// direction = false;
		__this->___direction_7 = (bool)0;
	}

IL_02fb:
	{
		// if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S))
		bool L_79;
		L_79 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)274), NULL);
		if (L_79)
		{
			goto IL_0313;
		}
	}
	{
		bool L_80;
		L_80 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)115), NULL);
		if (!L_80)
		{
			goto IL_0454;
		}
	}

IL_0313:
	{
		// if (GameObject.Find("Boy"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81;
		L_81 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_81, NULL);
		if (!L_82)
		{
			goto IL_0454;
		}
	}
	{
		// GetComponent<SpriteRenderer>().color = new Color(0.2f, 0.2f, 0.2f, 1f);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_83;
		L_83 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84;
		memset((&L_84), 0, sizeof(L_84));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_84), (0.200000003f), (0.200000003f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_83, L_84, NULL);
		// GetComponent<SpriteRenderer>().sortingOrder = 3;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_85;
		L_85 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_85, 3, NULL);
		// GameObject.Find("Boy").GetComponent<BoyWalkAnim>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86;
		L_86 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* L_87;
		L_87 = GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193(L_86, GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_87, (bool)1, NULL);
		// GameObject.Find("Boy").GetComponent<SpriteRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88;
		L_88 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_89;
		L_89 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_88, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_89, (bool)1, NULL);
		// GameObject.Find("Boy").GetComponent<Animator>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90;
		L_90 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_91;
		L_91 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_90, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_91, (bool)1, NULL);
		// shadow.GetComponent<SpriteRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = __this->___shadow_12;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93;
		L_93 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_92, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_93, (bool)0, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// GameObject.Find("Boy").GetComponent<LifeManager>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94;
		L_94 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		LifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A* L_95;
		L_95 = GameObject_GetComponent_TisLifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_mDB401DC36ECEF70F7CF711104C9071B0ED8276D7(L_94, GameObject_GetComponent_TisLifeManager_t71F9ACBF91CA70D724959F8B799AFE1512712B9A_mDB401DC36ECEF70F7CF711104C9071B0ED8276D7_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_95, (bool)1, NULL);
		// if (direction)
		bool L_96 = __this->___direction_7;
		if (!L_96)
		{
			goto IL_0410;
		}
	}
	{
		// animator.SetBool("idleR", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_97 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_97, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)1, NULL);
		// animator.SetBool("idleL", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_98 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_98, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)0, NULL);
		// animator.SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_99 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_99, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// animator.SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_100 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_100, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		return;
	}

IL_0410:
	{
		// animator.SetBool("idleL", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_101 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_101, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)1, NULL);
		// animator.SetBool("idleR", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_102 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_102, _stringLiteral2F3AE0C7B497F4688169436C1C88398115EF19E6, (bool)0, NULL);
		// animator.SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_103 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_103, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// animator.SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_104 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_104, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
	}

IL_0454:
	{
		// }
		return;
	}
}
// System.Void GirlWalkAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GirlWalkAnim__ctor_m5AF7CCEA070CA28915D750471250BE080A3C18C1 (GirlWalkAnim_tAE3A62E3971B7A169F7AFFD358B0E01FB1CEE306* __this, const RuntimeMethod* method) 
{
	{
		// private bool direction = true; // true????E?????Afalse?????????
		__this->___direction_7 = (bool)1;
		// private float jumpForce = 350f;
		__this->___jumpForce_8 = (350.0f);
		// private bool grounded = true;
		__this->___grounded_9 = (bool)1;
		// private bool grounded1 = true;
		__this->___grounded1_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DefeatObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatObject_Start_mDEE5895BFC6DA5AF642BC2C892D934FBBED882B9 (DefeatObject_t671311F718029F3095C118B46B4DDB59B8C2AF4B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DefeatObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatObject_Update_m9359DF11D403820A9BAD23C1E923588C78A4C710 (DefeatObject_t671311F718029F3095C118B46B4DDB59B8C2AF4B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DefeatObject::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatObject_OnTriggerEnter2D_m9F3B8E37D50CB924D72831B90EDD48E1153556A4 (DefeatObject_t671311F718029F3095C118B46B4DDB59B8C2AF4B* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F05CCFA5D61E9513722E152662BB6C2A7E73A3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D75839F7EE2FBF5783870F5CB50ABAFB2CEA325);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB99CAFEC9AC4A422CF490876DCA2EC0188EC5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "AttackCollider" || collider.gameObject.name == "HissatsuCollider")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral8EB99CAFEC9AC4A422CF490876DCA2EC0188EC5D, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral8D75839F7EE2FBF5783870F5CB50ABAFB2CEA325, NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}

IL_002e:
	{
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_8;
		L_8 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("defeat", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9;
		L_9 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, _stringLiteral6F05CCFA5D61E9513722E152662BB6C2A7E73A3E, (bool)1, NULL);
		// defeat.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___defeat_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_10, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void DefeatObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatObject__ctor_m3DFB60A23E961C4453AFE67F003C96525A5CE550 (DefeatObject_t671311F718029F3095C118B46B4DDB59B8C2AF4B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DefeatObject1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatObject1_Start_mBF69CB6F67A5BBB51AD483DE9AAD741BF3EC5A6A (DefeatObject1_tA196356E50F2D278BA9BC06259267C7DBAE63AF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DefeatObject1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatObject1_Update_mC98BB76781BAB5189E7AE43ED900F37B60C0CEF8 (DefeatObject1_tA196356E50F2D278BA9BC06259267C7DBAE63AF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DefeatObject1::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatObject1_OnTriggerEnter2D_m3D7B2E12F01287B32D222AC35CC1600CD369F267 (DefeatObject1_tA196356E50F2D278BA9BC06259267C7DBAE63AF7* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00899987F06AB9DF856C491E2F1A2C97BE8ED58F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF16545FEE2A7CBB2699FA0B96CB7E103B27CF1EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1CD80D83F09B1873BCA3420E45DE736C511493F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "AttackCollider1" || collider.gameObject.name == "HissatsuCollider1")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralF1CD80D83F09B1873BCA3420E45DE736C511493F, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralF16545FEE2A7CBB2699FA0B96CB7E103B27CF1EC, NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}

IL_002e:
	{
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_8;
		L_8 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		// GetComponent<Animator>().SetBool("defeat1", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9;
		L_9 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, _stringLiteral00899987F06AB9DF856C491E2F1A2C97BE8ED58F, (bool)1, NULL);
		// defeat.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___defeat_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_10, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void DefeatObject1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefeatObject1__ctor_mC418E4ACE6103A7C78D03718406D029405FFB2D4 (DefeatObject1_tA196356E50F2D278BA9BC06259267C7DBAE63AF7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EngineCollision::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineCollision_Start_m6C6B36BC0B0025D98A2D305646C2EAA761E0BD0B (EngineCollision_tD5886ECAFF7EF6697F3FDECE27BD9FBA0203CEB5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EngineCollision::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineCollision_Update_mD98D1DC34BB7D0E44EC3E0CC450EBF34D2731912 (EngineCollision_tD5886ECAFF7EF6697F3FDECE27BD9FBA0203CEB5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EngineCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineCollision_OnTriggerEnter2D_m1A06BAF61DF75A1077AFDC78BC2B1489F365842A (EngineCollision_tD5886ECAFF7EF6697F3FDECE27BD9FBA0203CEB5* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34_m5619C3475593C380265D5005814A315FE0A4E12F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisReload_tB3539521ADE4D4498E158FF5016D54E012E06080_m491D809A7E2430901C34E949330674457BC008A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09DA551022AE508A5C260B7D63E34DFE4DC34858);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB99CAFEC9AC4A422CF490876DCA2EC0188EC5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1CD80D83F09B1873BCA3420E45DE736C511493F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "AttackCollider" || collision.gameObject.name == "AttackCollider1")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral8EB99CAFEC9AC4A422CF490876DCA2EC0188EC5D, NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralF1CD80D83F09B1873BCA3420E45DE736C511493F, NULL);
		if (!L_7)
		{
			goto IL_00e3;
		}
	}

IL_0031:
	{
		// GetComponent<Animator>().enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_9;
		L_9 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// boy.GetComponent<Animator>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___boy_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11;
		L_11 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_10, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
		// boy.GetComponent<BoyWalkAnim>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___boy_4;
		BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* L_13;
		L_13 = GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193(L_12, GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
		// GetComponent<SpriteRenderer>().enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14;
		L_14 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_14, (bool)0, NULL);
		// engine.GetComponent<SpriteRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___engine_6;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16;
		L_16 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_15, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_16, (bool)1, NULL);
		// on.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___on_7;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_17, NULL);
		// story.GetComponent<ExtraAnim>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___story_5;
		ExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34* L_19;
		L_19 = GameObject_GetComponent_TisExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34_m5619C3475593C380265D5005814A315FE0A4E12F(L_18, GameObject_GetComponent_TisExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34_m5619C3475593C380265D5005814A315FE0A4E12F_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_19, (bool)1, NULL);
		// story.GetComponent<Reload>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___story_5;
		Reload_tB3539521ADE4D4498E158FF5016D54E012E06080* L_21;
		L_21 = GameObject_GetComponent_TisReload_tB3539521ADE4D4498E158FF5016D54E012E06080_m491D809A7E2430901C34E949330674457BC008A4(L_20, GameObject_GetComponent_TisReload_tB3539521ADE4D4498E158FF5016D54E012E06080_m491D809A7E2430901C34E949330674457BC008A4_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_21, (bool)0, NULL);
		// GameObject.Find("Forever And Ever").GetComponent<AudioSource>().volume = 0f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral09DA551022AE508A5C260B7D63E34DFE4DC34858, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23;
		L_23 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_22, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_23, (0.0f), NULL);
		// Destroy(GameObject.Find("Forever And Ever"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral09DA551022AE508A5C260B7D63E34DFE4DC34858, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_24, NULL);
		// LifeLimit.replay = true;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5 = (bool)1;
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void EngineCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineCollision__ctor_m57F149E433D4C59F3D72422DD04EE75172CC47F6 (EngineCollision_tD5886ECAFF7EF6697F3FDECE27BD9FBA0203CEB5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjCollision::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjCollision_Start_m491E6D3B4964B8D6E72C305B5905F49513C7FA67 (ObjCollision_tEEE9DC77F8A0E485F9AE05B394DCFE67CE85C657* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ObjCollision::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjCollision_Update_mE9B8362920C1757E5EFDBCD912A8A54280495F6C (ObjCollision_tEEE9DC77F8A0E485F9AE05B394DCFE67CE85C657* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ObjCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjCollision_OnTriggerEnter2D_m66942EC458C425B923E1752D85ECC55954C2CDBE (ObjCollision_tEEE9DC77F8A0E485F9AE05B394DCFE67CE85C657* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisReload_tB3539521ADE4D4498E158FF5016D54E012E06080_m491D809A7E2430901C34E949330674457BC008A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79_mDDA456F1386949B156419C68785706E3CFE7AD0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F05CCFA5D61E9513722E152662BB6C2A7E73A3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB99CAFEC9AC4A422CF490876DCA2EC0188EC5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1CD80D83F09B1873BCA3420E45DE736C511493F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "AttackCollider" || collision.gameObject.name == "AttackCollider1")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral8EB99CAFEC9AC4A422CF490876DCA2EC0188EC5D, NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralF1CD80D83F09B1873BCA3420E45DE736C511493F, NULL);
		if (!L_7)
		{
			goto IL_00ba;
		}
	}

IL_0031:
	{
		// GetComponent<Animator>().SetBool("defeat", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteral6F05CCFA5D61E9513722E152662BB6C2A7E73A3E, (bool)1, NULL);
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_9;
		L_9 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// boy.GetComponent<Animator>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___boy_5;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11;
		L_11 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_10, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
		// boy.GetComponent<BoyWalkAnim>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___boy_5;
		BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* L_13;
		L_13 = GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193(L_12, GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
		// story.GetComponent<Reload>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___story_4;
		Reload_tB3539521ADE4D4498E158FF5016D54E012E06080* L_15;
		L_15 = GameObject_GetComponent_TisReload_tB3539521ADE4D4498E158FF5016D54E012E06080_m491D809A7E2430901C34E949330674457BC008A4(L_14, GameObject_GetComponent_TisReload_tB3539521ADE4D4498E158FF5016D54E012E06080_m491D809A7E2430901C34E949330674457BC008A4_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)0, NULL);
		// story.GetComponent<Tutorial1Anim>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___story_4;
		Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79* L_17;
		L_17 = GameObject_GetComponent_TisTutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79_mDDA456F1386949B156419C68785706E3CFE7AD0C(L_16, GameObject_GetComponent_TisTutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79_mDDA456F1386949B156419C68785706E3CFE7AD0C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)1, NULL);
		// GameObject.Find("LoopBGM").GetComponent<AudioSource>().volume = 0f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19;
		L_19 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_18, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_19, (0.0f), NULL);
		// Destroy(GameObject.Find("LoopBGM"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_20, NULL);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void ObjCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjCollision__ctor_m7FBEBA0D6E58364D70536FD38A15356891B45AB0 (ObjCollision_tEEE9DC77F8A0E485F9AE05B394DCFE67CE85C657* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwitchCollision::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision_Start_mDF296702F29D604F164A65CF3515D1BC8BCC19C1 (SwitchCollision_t30BB3AAC014A94231CC237C9FD9217DD930D01FB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SwitchCollision::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision_Update_m8F92D099DA3550BABC0E4AF46E8DDB974DAEB3E2 (SwitchCollision_t30BB3AAC014A94231CC237C9FD9217DD930D01FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (switchNum == 1)
		int32_t L_0 = __this->___switchNum_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0035;
		}
	}
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___arrow_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_002f;
	}

IL_0014:
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// light2d[i].GetComponent<Light2D>().enabled = true;
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_6 = __this->___light2d_6;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_10;
		L_10 = Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9(L_9, Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002f:
	{
		// foreach (int i in arrow)
		int32_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0014;
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision_OnTriggerEnter2D_m7D6DD40AB4B27F35B44F0944965BA2B9F68ED973 (SwitchCollision_t30BB3AAC014A94231CC237C9FD9217DD930D01FB* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "Boy" || collider.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_0064;
		}
	}

IL_002e:
	{
		// GetComponent<Animator>().SetBool("ON", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044, (bool)1, NULL);
		// on.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___on_7;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		// switchNum++;
		int32_t L_10 = __this->___switchNum_4;
		__this->___switchNum_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_11;
		L_11 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision__ctor_m28595D485F8E2A4C08E4982F6663BAA60279DE02 (SwitchCollision_t30BB3AAC014A94231CC237C9FD9217DD930D01FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_2_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] arrow = { 0, 1, 2, 3 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___arrow_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrow_5), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwitchCollision1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision1_Start_m8B9D9FDB4A9C03FDE8D0DCB78B5A5D6F7040D36D (SwitchCollision1_t6A37EB2C204508A0B0188C3E53395176B5F5D9D4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SwitchCollision1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision1_Update_m32A3E902536B98985EF98AFB2738E0AD84E85741 (SwitchCollision1_t6A37EB2C204508A0B0188C3E53395176B5F5D9D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (switchNum == 1)
		int32_t L_0 = __this->___switchNum_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0035;
		}
	}
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___arrow_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_002f;
	}

IL_0014:
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// light2d[i].GetComponent<Light2D>().enabled = true;
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_6 = __this->___light2d_6;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_10;
		L_10 = Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9(L_9, Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002f:
	{
		// foreach (int i in arrow)
		int32_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0014;
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision1::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision1_OnTriggerEnter2D_mF6AB59A92837F09A31AB0EEC271C5761259378FE (SwitchCollision1_t6A37EB2C204508A0B0188C3E53395176B5F5D9D4* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "Boy" || collider.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_0064;
		}
	}

IL_002e:
	{
		// GetComponent<Animator>().SetBool("ON", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044, (bool)1, NULL);
		// on.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___on_7;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		// switchNum++;
		int32_t L_10 = __this->___switchNum_4;
		__this->___switchNum_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_11;
		L_11 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision1__ctor_mC9DA44FD09541D7230C42D768874299FA93D3F91 (SwitchCollision1_t6A37EB2C204508A0B0188C3E53395176B5F5D9D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] arrow = { 0};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___arrow_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrow_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwitchCollision2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision2_Start_m33F77F988B67803E29565894C6340E01E3BFF3AE (SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switchNum = 0;
		((SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_il2cpp_TypeInfo_var))->___switchNum_4 = 0;
		// }
		return;
	}
}
// System.Void SwitchCollision2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision2_Update_mEA4CC5CEB35F711C064916F960BC0879149B7B90 (SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (switchNum == 1)
		int32_t L_0 = ((SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___arrow_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_002e;
	}

IL_0013:
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// light2d[i].GetComponent<Light2D>().enabled = true;
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_6 = __this->___light2d_7;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_10;
		L_10 = Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9(L_9, Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// foreach (int i in arrow)
		int32_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0034:
	{
		// if (switchNum == 2)
		int32_t L_14 = ((SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___arrowBarrier_6;
		V_0 = L_15;
		V_1 = 0;
		goto IL_0075;
	}

IL_0047:
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		// barrier[i].GetComponent<SpriteRenderer>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___barrier_8;
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24;
		L_24 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_23, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_24, (bool)0, NULL);
		// barrier[i].GetComponent<BoxCollider2D>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___barrier_8;
		int32_t L_26 = V_3;
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_29;
		L_29 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_28, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0075:
	{
		// foreach (int i in arrowBarrier)
		int32_t L_31 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0047;
		}
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision2::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision2_OnTriggerEnter2D_mECE5BD70F75BC10066C3C2A70D15CBC957212CF7 (SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "Boy" || collider.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}

IL_002e:
	{
		// GetComponent<Animator>().SetBool("ON", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044, (bool)1, NULL);
		// this.GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_9;
		L_9 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// on.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___on_9;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_10, NULL);
		// switchNum++;
		int32_t L_11 = ((SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_il2cpp_TypeInfo_var))->___switchNum_4;
		((SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_il2cpp_TypeInfo_var))->___switchNum_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// if (switchNum >= 2)
		int32_t L_12 = ((SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0076;
		}
	}
	{
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_13;
		L_13 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision2__ctor_mEC538F3AE6705C35A68629BDDE8FD271239E7ECC (SwitchCollision2_t5AEBC0159B5EA1529BF4C9553DBDD29CC6BF70C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D_3_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] arrow = { 0, 1, 2, 3, 4, 5};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___arrow_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrow_5), (void*)L_1);
		// private int[] arrowBarrier = { 0, 1};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		__this->___arrowBarrier_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrowBarrier_6), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwitchCollision3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision3_Start_mDF9FF248CCA3DC71DC1D71AADC2FB68586C3480D (SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switchNum = 0;
		((SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_il2cpp_TypeInfo_var))->___switchNum_4 = 0;
		// }
		return;
	}
}
// System.Void SwitchCollision3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision3_Update_mD60D71C863F2329ADF71CB7B72E4562D4DA3361F (SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (switchNum == 1)
		int32_t L_0 = ((SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___arrow_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_002e;
	}

IL_0013:
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// light2d[i].GetComponent<Light2D>().enabled = true;
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_6 = __this->___light2d_7;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_10;
		L_10 = Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9(L_9, Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// foreach (int i in arrow)
		int32_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0034:
	{
		// if (switchNum == 2)
		int32_t L_14 = ((SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___arrowBarrier_6;
		V_0 = L_15;
		V_1 = 0;
		goto IL_0075;
	}

IL_0047:
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		// barrier[i].GetComponent<SpriteRenderer>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___barrier_8;
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24;
		L_24 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_23, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_24, (bool)0, NULL);
		// barrier[i].GetComponent<BoxCollider2D>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___barrier_8;
		int32_t L_26 = V_3;
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_29;
		L_29 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_28, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0075:
	{
		// foreach (int i in arrowBarrier)
		int32_t L_31 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0047;
		}
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision3::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision3_OnTriggerEnter2D_m4118CEAE82C35D760E1AEA630ACDB34797864E0D (SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "Boy" || collider.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}

IL_002e:
	{
		// GetComponent<Animator>().SetBool("ON", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044, (bool)1, NULL);
		// this.GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_9;
		L_9 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// switchNum++;
		int32_t L_10 = ((SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_il2cpp_TypeInfo_var))->___switchNum_4;
		((SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_il2cpp_TypeInfo_var))->___switchNum_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// on.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___on_9;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		// if (switchNum >= 2)
		int32_t L_12 = ((SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0076;
		}
	}
	{
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_13;
		L_13 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision3__ctor_mAE0AB68BF4823E90DC5D98A95037CFAF8DA05B5D (SwitchCollision3_t8C8E46AE78D5D45E1B8E309DBF8B8D63A9A428C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D_3_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] arrow = { 0};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___arrow_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrow_5), (void*)L_0);
		// private int[] arrowBarrier = { 0, 1, 2, 3, 4, 5};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_2, L_3, NULL);
		__this->___arrowBarrier_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrowBarrier_6), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwitchCollision4::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision4_Start_m1396DC1236ACFD1618564EE2B66120F52BCBC7F4 (SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switchNum = 0;
		((SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_il2cpp_TypeInfo_var))->___switchNum_4 = 0;
		// }
		return;
	}
}
// System.Void SwitchCollision4::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision4_Update_m70A5C8D36689CE7C7193FD2DA1C26B180EDF6B37 (SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (switchNum == 1)
		int32_t L_0 = ((SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___arrow_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_002e;
	}

IL_0013:
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// light2d[i].GetComponent<Light2D>().enabled = true;
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_6 = __this->___light2d_7;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_10;
		L_10 = Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9(L_9, Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// foreach (int i in arrow)
		int32_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0034:
	{
		// if (switchNum == 2)
		int32_t L_14 = ((SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___arrowBarrier_6;
		V_0 = L_15;
		V_1 = 0;
		goto IL_0075;
	}

IL_0047:
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		// barrier[i].GetComponent<SpriteRenderer>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___barrier_8;
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24;
		L_24 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_23, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_24, (bool)0, NULL);
		// barrier[i].GetComponent<BoxCollider2D>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___barrier_8;
		int32_t L_26 = V_3;
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_29;
		L_29 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_28, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0075:
	{
		// foreach (int i in arrowBarrier)
		int32_t L_31 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0047;
		}
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision4::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision4_OnTriggerEnter2D_m309C168F3ABB992C95204E45AF7861A244A4C4CE (SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "Boy" || collider.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}

IL_002e:
	{
		// GetComponent<Animator>().SetBool("ON", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044, (bool)1, NULL);
		// this.GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_9;
		L_9 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// switchNum++;
		int32_t L_10 = ((SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_il2cpp_TypeInfo_var))->___switchNum_4;
		((SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_il2cpp_TypeInfo_var))->___switchNum_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// on.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___on_9;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		// if (switchNum >= 2)
		int32_t L_12 = ((SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0076;
		}
	}
	{
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_13;
		L_13 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision4__ctor_m4CCBEC07B638352437C67949D1481A6B49566034 (SwitchCollision4_t3BEE67A2089AA2994F9952AA94734FAD165D2B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] arrow = { 0};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___arrow_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrow_5), (void*)L_0);
		// private int[] arrowBarrier = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_2, L_3, NULL);
		__this->___arrowBarrier_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrowBarrier_6), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwitchCollision5::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision5_Start_mFC0AE3143C279C7513796E034969C7C49B6D74E6 (SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switchNum = 0;
		((SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_il2cpp_TypeInfo_var))->___switchNum_4 = 0;
		// }
		return;
	}
}
// System.Void SwitchCollision5::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision5_Update_m817D79FA52D9AAB8BAC50E0A51303EC98594D88E (SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (switchNum == 1)
		int32_t L_0 = ((SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___arrow_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_002e;
	}

IL_0013:
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// light2d[i].GetComponent<Light2D>().enabled = true;
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_6 = __this->___light2d_7;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_10;
		L_10 = Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9(L_9, Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// foreach (int i in arrow)
		int32_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0034:
	{
		// if (switchNum == 2)
		int32_t L_14 = ((SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___arrowBarrier_6;
		V_0 = L_15;
		V_1 = 0;
		goto IL_0075;
	}

IL_0047:
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		// barrier[i].GetComponent<SpriteRenderer>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___barrier_8;
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24;
		L_24 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_23, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_24, (bool)0, NULL);
		// barrier[i].GetComponent<BoxCollider2D>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___barrier_8;
		int32_t L_26 = V_3;
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_29;
		L_29 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_28, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0075:
	{
		// foreach (int i in arrowBarrier)
		int32_t L_31 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0047;
		}
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision5::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision5_OnTriggerEnter2D_mE2477559DE344B4FF54FBD83C764DE8F38F36A7C (SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "Boy" || collider.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}

IL_002e:
	{
		// GetComponent<Animator>().SetBool("ON", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044, (bool)1, NULL);
		// this.GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_9;
		L_9 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// switchNum++;
		int32_t L_10 = ((SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_il2cpp_TypeInfo_var))->___switchNum_4;
		((SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_il2cpp_TypeInfo_var))->___switchNum_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// on.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___on_9;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		// if (switchNum >= 2)
		int32_t L_12 = ((SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0076;
		}
	}
	{
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_13;
		L_13 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision5__ctor_m26F3CEEA20E5F838FB74ABEB3C8D6B98276F42FF (SwitchCollision5_tBFE30B8B474F773A220C7F8938B11E7D5F36DFA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189_4_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] arrow = { 0};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___arrow_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrow_5), (void*)L_0);
		// private int[] arrowBarrier = { 0, 1, 2, 3, 4, 5, 6};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_2, L_3, NULL);
		__this->___arrowBarrier_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrowBarrier_6), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwitchCollision6::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision6_Start_m5166F912446DA326D363057FBA9BB37BB6B67440 (SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switchNum = 0;
		((SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_il2cpp_TypeInfo_var))->___switchNum_4 = 0;
		// }
		return;
	}
}
// System.Void SwitchCollision6::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision6_Update_mB28AA529DB56509797BDB02500AABADB8106D7D2 (SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (switchNum == 1)
		int32_t L_0 = ((SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___arrow_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_002e;
	}

IL_0013:
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// light2d[i].GetComponent<Light2D>().enabled = true;
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_6 = __this->___light2d_7;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_10;
		L_10 = Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9(L_9, Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// foreach (int i in arrow)
		int32_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0034:
	{
		// if (switchNum == 2)
		int32_t L_14 = ((SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___arrowBarrier_6;
		V_0 = L_15;
		V_1 = 0;
		goto IL_0075;
	}

IL_0047:
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		// barrier[i].GetComponent<SpriteRenderer>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___barrier_8;
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24;
		L_24 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_23, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_24, (bool)0, NULL);
		// barrier[i].GetComponent<BoxCollider2D>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___barrier_8;
		int32_t L_26 = V_3;
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_29;
		L_29 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_28, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0075:
	{
		// foreach (int i in arrowBarrier)
		int32_t L_31 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0047;
		}
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision6::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision6_OnTriggerEnter2D_mA42D5664D17ADA0ACBB0590BB2D1EA9DDBE7ED7B (SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "Boy" || collider.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}

IL_002e:
	{
		// GetComponent<Animator>().SetBool("ON", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044, (bool)1, NULL);
		// this.GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_9;
		L_9 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// switchNum++;
		int32_t L_10 = ((SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_il2cpp_TypeInfo_var))->___switchNum_4;
		((SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_il2cpp_TypeInfo_var))->___switchNum_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// on.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___on_9;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		// if (switchNum >= 2)
		int32_t L_12 = ((SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0076;
		}
	}
	{
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_13;
		L_13 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision6::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision6__ctor_mEAAE208E8D399E6B29DD1C30052821428F4A9FC5 (SwitchCollision6_tBDEAEC7F48BD427C14BCF176DA9926631B3F7AEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A_5_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] arrow = { 0};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___arrow_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrow_5), (void*)L_0);
		// private int[] arrowBarrier = { 0, 1, 2, 3, 4};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_2, L_3, NULL);
		__this->___arrowBarrier_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrowBarrier_6), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwitchCollision7::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision7_Start_m2A91E208538B7FC0C8DDA7471026923890920F2B (SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switchNum = 0;
		((SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_il2cpp_TypeInfo_var))->___switchNum_4 = 0;
		// }
		return;
	}
}
// System.Void SwitchCollision7::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision7_Update_m43505420F61A05B18F80C4D0330D3AC1A3C59CF6 (SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (switchNum == 1)
		int32_t L_0 = ((SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___arrow_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_002e;
	}

IL_0013:
	{
		// foreach (int i in arrow)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// light2d[i].GetComponent<Light2D>().enabled = true;
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_6 = __this->___light2d_7;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_10;
		L_10 = Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9(L_9, Component_GetComponent_TisLight2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD_mFC84EEBD9A5AB39A515CE633738F4C1203A03BF9_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// foreach (int i in arrow)
		int32_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0034:
	{
		// if (switchNum == 2)
		int32_t L_14 = ((SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___arrowBarrier_6;
		V_0 = L_15;
		V_1 = 0;
		goto IL_0075;
	}

IL_0047:
	{
		// foreach (int i in arrowBarrier)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		// barrier[i].GetComponent<SpriteRenderer>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___barrier_8;
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24;
		L_24 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_23, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_24, (bool)0, NULL);
		// barrier[i].GetComponent<BoxCollider2D>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___barrier_8;
		int32_t L_26 = V_3;
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_29;
		L_29 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_28, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0075:
	{
		// foreach (int i in arrowBarrier)
		int32_t L_31 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0047;
		}
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision7::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision7_OnTriggerEnter2D_m63525DD8CE102350ACB066E0CD5A91E01F8115FC (SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "Boy" || collider.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collider0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}

IL_002e:
	{
		// GetComponent<Animator>().SetBool("ON", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044, (bool)1, NULL);
		// this.GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_9;
		L_9 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// switchNum++;
		int32_t L_10 = ((SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_il2cpp_TypeInfo_var))->___switchNum_4;
		((SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_il2cpp_TypeInfo_var))->___switchNum_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// on.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___on_9;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		// if (switchNum >= 2)
		int32_t L_12 = ((SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_StaticFields*)il2cpp_codegen_static_fields_for(SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9_il2cpp_TypeInfo_var))->___switchNum_4;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0076;
		}
	}
	{
		// GetComponent<BoxCollider2D>().enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_13;
		L_13 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void SwitchCollision7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchCollision7__ctor_m8F4B9D24B685EC58FEFFA04B548BDF0899A75D03 (SwitchCollision7_t1443DE7F560B891FB7BEED75A4AB742F9B5A57A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____53BFB09A8803B408833184310D7A89203A1665BF87CC3BDF75E5CD512C94352D_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A_5_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] arrow = { 0, 1, 2, 3, 4};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___arrow_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrow_5), (void*)L_1);
		// private int[] arrowBarrier = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____53BFB09A8803B408833184310D7A89203A1665BF87CC3BDF75E5CD512C94352D_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		__this->___arrowBarrier_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrowBarrier_6), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LifeLimit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeLimit_Start_m621B8A81123D2E74DB2316B159E64E2940D1C8B9 (LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lifeLimit = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 0;
		// drink = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___drink_6 = 0;
		// }
		return;
	}
}
// System.Void LifeLimit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeLimit_Update_m005B032CB1A32B877483506BF3A0D195B61078B4 (LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// }
		return;
	}
}
// System.Void LifeLimit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeLimit__ctor_m1CB84A6626D16746618F2E1A56CC80AB9FD25E5E (LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Reload::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reload_Start_mDA8F111ABA5D46942C463AE5AE51CA3C6D5B3A9F (Reload_tB3539521ADE4D4498E158FF5016D54E012E06080* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Reload::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reload_Update_mC3C97C05790F1A07405BEAABE5F02FAE0A07F41F (Reload_tB3539521ADE4D4498E158FF5016D54E012E06080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)114), NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// Scene loadScene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_1;
		// SceneManager.LoadScene(loadScene.name); // Dont??BGM???d???????????
		String_t* L_2;
		L_2 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_2, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Reload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reload__ctor_mEF5ED1126A93EFDE0190ABB13CB1C540AB563F9E (Reload_tB3539521ADE4D4498E158FF5016D54E012E06080* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll_Start_mA68A47AACA4045ECB22417DBD79D460232134966 (SceneControll_tC3EECDA55DC14756D26FE8255E5CA4D27F76CFF3* __this, const RuntimeMethod* method) 
{
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_5;
		float L_3 = __this->___startPosY_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// }
		return;
	}
}
// System.Void SceneControll::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll_Update_mD68896DDE48CE65FB3F5D108FC48938D0206E313 (SceneControll_tC3EECDA55DC14756D26FE8255E5CA4D27F76CFF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25B8508EF42CF47665A2BAA4F7F52D971F54DF07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (boy.transform.position.x >= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = __this->___goalPosX_7;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		// SceneManager.LoadScene("Tutorial 1");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral25B8508EF42CF47665A2BAA4F7F52D971F54DF07, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void SceneControll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll__ctor_mB35AD0FBCFF13888EBF159D6ECE61869C7FEAEF6 (SceneControll_tC3EECDA55DC14756D26FE8255E5CA4D27F76CFF3* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float startPosX = -4.5f;
		__this->___startPosX_5 = (-4.5f);
		// [SerializeField] float startPosY = -2.95f;
		__this->___startPosY_6 = (-2.95000005f);
		// [SerializeField] float goalPosX = 9.3f;
		__this->___goalPosX_7 = (9.30000019f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll1_Start_m911651B5B8706E31CB7450708C01BEB4D5397D57 (SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_5;
		float L_3 = __this->___startPosY_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// LifeLimit.lifeLimit = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 0;
		// StoryManager.drink = 0;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = 0;
		// }
		return;
	}
}
// System.Void SceneControll1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll1_Update_m57DB2AE9792D65241DCFB4D1E876C8E49B6BB059 (SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA97C9D22E1E6996C2412AD51DB09E3201D1E3424);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// save = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE_il2cpp_TypeInfo_var))->___save_11 = L_0;
		// if (boy.transform.position.x >= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		float L_5 = __this->___goalPosX_7;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0031;
		}
	}
	{
		// SceneManager.LoadScene("Tutorial 2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralA97C9D22E1E6996C2412AD51DB09E3201D1E3424, NULL);
	}

IL_0031:
	{
		// if (LifeLimit.replay)
		bool L_6 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5;
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		// drinkPanel.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___drinkPanel_9;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		V_0 = 0;
		goto IL_005a;
	}

IL_0048:
	{
		// drinkNum[r].enabled = true;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_8 = __this->___drinkNum_8;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005a:
	{
		// for (int r = 0; r <= 3; r++)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)3)))
		{
			goto IL_0048;
		}
	}
	{
		// remain = 10 - StoryManager.drink;
		int32_t L_14 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		__this->___remain_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_14));
		// drinkNum[1].text = remain.ToString();
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_15 = __this->___drinkNum_8;
		int32_t L_16 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		int32_t* L_18 = (&__this->___remain_10);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_19);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void SceneControll1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll1__ctor_m9BD0808D2D65917655F45CEA57E1B58097C65C33 (SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float startPosX = -8.39f;
		__this->___startPosX_5 = (-8.39000034f);
		// [SerializeField] float startPosY = -2.95f;
		__this->___startPosY_6 = (-2.95000005f);
		// [SerializeField] float goalPosX = 9.3f;
		__this->___goalPosX_7 = (9.30000019f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll10::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll10_Start_mB2661987479B918EB78822CAD0CACC3BEE303806 (SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_5;
		float L_3 = __this->___startPosY_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// LifeLimit.lifeLimit = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 0;
		// StoryManager.drink = SceneControll3.save2;
		int32_t L_6 = ((SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133_il2cpp_TypeInfo_var))->___save2_11;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_6;
		// }
		return;
	}
}
// System.Void SceneControll10::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll10_Update_m72CDF4AA53111B34B3A30C5CDAAAF1E629291A0F (SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// save3 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0_il2cpp_TypeInfo_var))->___save3_10 = L_0;
		// if (LifeLimit.replay)
		bool L_1 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// drinkPanel.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___drinkPanel_8;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		V_0 = 0;
		goto IL_0033;
	}

IL_0021:
	{
		// drinkNum[r].enabled = true;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_3 = __this->___drinkNum_7;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0033:
	{
		// for (int r = 0; r <= 3; r++)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)3)))
		{
			goto IL_0021;
		}
	}
	{
		// remain3 = 10 - StoryManager.drink;
		int32_t L_9 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		__this->___remain3_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_9));
		// drinkNum[1].text = remain3.ToString();
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_10 = __this->___drinkNum_7;
		int32_t L_11 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		int32_t* L_13 = (&__this->___remain3_9);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_14);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void SceneControll10::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll10__ctor_mCF3B8200BACFF89E17C9B4E68EED5E6421C44F1E (SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll11::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll11_Start_m17F885C7C0512021F9D2B1B35A0B945E37A3B1E9 (SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_5;
		float L_3 = __this->___startPosY_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// LifeLimit.lifeLimit = 3;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 3;
		// StoryManager.drink = SceneControll9.save9;
		int32_t L_6 = ((SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55_il2cpp_TypeInfo_var))->___save9_16;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_6;
		// }
		return;
	}
}
// System.Void SceneControll11::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll11_Update_m114CB2386DB74697D12B428C5788B12BE71FC490 (SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4E00516AA1044641ECB441A0FFFCD06D99165DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// save10 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C_il2cpp_TypeInfo_var))->___save10_8 = L_0;
		// if (boy.transform.position.x <= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		float L_5 = __this->___goalPosX_7;
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_0031;
		}
	}
	{
		// SceneManager.LoadScene("Extra 1");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralA4E00516AA1044641ECB441A0FFFCD06D99165DE, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void SceneControll11::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll11__ctor_mBB8B316462D984EE0EB297236A8BBFBF42B6DA38 (SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll12::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll12_Start_mB0BD2106A6110D5D066A3DF21C336AE64022A7D4 (SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_5;
		float L_3 = __this->___startPosY_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// LifeLimit.lifeLimit = 3;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 3;
		// StoryManager.drink = SceneControll11.save10;
		int32_t L_6 = ((SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll11_t0A751567882C97332204F2B2D4DA52102E30783C_il2cpp_TypeInfo_var))->___save10_8;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_6;
		// }
		return;
	}
}
// System.Void SceneControll12::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll12_Update_mAD8F53BE73E99DAC2F5AE06315430A01C23842B6 (SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EC7BF17EC763D06EE3BEF95BC743C8201BB0DC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// save11 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981_il2cpp_TypeInfo_var))->___save11_8 = L_0;
		// if (boy.transform.position.y <= goalPosY)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___y_3;
		float L_5 = __this->___goalPosY_7;
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_0031;
		}
	}
	{
		// SceneManager.LoadScene("Extra 2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral9EC7BF17EC763D06EE3BEF95BC743C8201BB0DC3, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void SceneControll12::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll12__ctor_mAF417C74880DA6D0EE06DA112375E012B27CC25D (SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll13::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll13_Start_mE064B1A0081B50AADBCC5C68251A0E5A2D64BD67 (SceneControll13_tE0EC13912247294E452DD45AE63B71EF544EDFEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_5;
		float L_3 = __this->___startPosY_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// LifeLimit.lifeLimit = 3;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 3;
		// StoryManager.drink = SceneControll12.save11;
		int32_t L_6 = ((SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll12_t09E4074AD74AB43AEBC0881C9CF22D2307F41981_il2cpp_TypeInfo_var))->___save11_8;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_6;
		// }
		return;
	}
}
// System.Void SceneControll13::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll13_Update_m8082FE32D7F8FD4845B225EDC5835CD9BA239FB4 (SceneControll13_tE0EC13912247294E452DD45AE63B71EF544EDFEB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneControll13::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll13__ctor_m22E72C5777826B73F5E061C26D99C5C98203DDFC (SceneControll13_tE0EC13912247294E452DD45AE63B71EF544EDFEB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll2_Start_mEE62CB1C0FCA7C35EF17CA8263A7A1C141E3A789 (SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_5;
		float L_3 = __this->___startPosY_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// LifeLimit.lifeLimit = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 0;
		// StoryManager.drink = SceneControll1.save;
		int32_t L_6 = ((SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll1_t37DE35A03117D10A6BC4B860D0716E65F38FDDFE_il2cpp_TypeInfo_var))->___save_11;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_6;
		// }
		return;
	}
}
// System.Void SceneControll2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll2_Update_mBD5469B6ECFB586029077AE5B0FC142F92B92BC8 (SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EEFAE8A1BCC3918CF49D6654B62075D198F9F10);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// save1 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362_il2cpp_TypeInfo_var))->___save1_11 = L_0;
		// if (boy.transform.position.x >= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		float L_5 = __this->___goalPosX_7;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0031;
		}
	}
	{
		// SceneManager.LoadScene("Tutorial 3");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral4EEFAE8A1BCC3918CF49D6654B62075D198F9F10, NULL);
	}

IL_0031:
	{
		// if (LifeLimit.replay)
		bool L_6 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5;
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		// drinkPanel.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___drinkPanel_9;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		V_0 = 0;
		goto IL_005a;
	}

IL_0048:
	{
		// drinkNum[r].enabled = true;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_8 = __this->___drinkNum_8;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005a:
	{
		// for (int r = 0; r <= 3; r++)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)3)))
		{
			goto IL_0048;
		}
	}
	{
		// remain1 = 10 - StoryManager.drink;
		int32_t L_14 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		__this->___remain1_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_14));
		// drinkNum[1].text = remain1.ToString();
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_15 = __this->___drinkNum_8;
		int32_t L_16 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		int32_t* L_18 = (&__this->___remain1_10);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_19);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void SceneControll2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll2__ctor_m774B8F3A13EA8DBE7C42A3872EBFF2DDDDFE223F (SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float startPosX = -8.39f;
		__this->___startPosX_5 = (-8.39000034f);
		// [SerializeField] float startPosY = -3.968f;
		__this->___startPosY_6 = (-3.96799994f);
		// [SerializeField] float goalPosX = 9.3f;
		__this->___goalPosX_7 = (9.30000019f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll3_Start_mEC27DFC7AD713DEAE115EA3548E106D23F9CF937 (SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_5;
		float L_3 = __this->___startPosY_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// LifeLimit.lifeLimit = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 0;
		// StoryManager.drink = SceneControll2.save1;
		int32_t L_6 = ((SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll2_t352281C3833C3F7171933C168CD21812F5BD2362_il2cpp_TypeInfo_var))->___save1_11;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_6;
		// }
		return;
	}
}
// System.Void SceneControll3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll3_Update_m4C408E1A4F50207D47742DBBDB3F5935AFEAEA0F (SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AF13E20ACDD98EE460594C3DFF58E32B2B8FEF1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// save2 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133_il2cpp_TypeInfo_var))->___save2_11 = L_0;
		// if (boy.transform.position.x >= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		float L_5 = __this->___goalPosX_7;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0031;
		}
	}
	{
		// SceneManager.LoadScene("Tutorial 4");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral9AF13E20ACDD98EE460594C3DFF58E32B2B8FEF1, NULL);
	}

IL_0031:
	{
		// if (LifeLimit.replay)
		bool L_6 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5;
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		// drinkPanel.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___drinkPanel_9;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		V_0 = 0;
		goto IL_005a;
	}

IL_0048:
	{
		// drinkNum[r].enabled = true;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_8 = __this->___drinkNum_8;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005a:
	{
		// for (int r = 0; r <= 3; r++)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)3)))
		{
			goto IL_0048;
		}
	}
	{
		// remain2 = 10 - StoryManager.drink;
		int32_t L_14 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		__this->___remain2_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_14));
		// drinkNum[1].text = remain2.ToString();
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_15 = __this->___drinkNum_8;
		int32_t L_16 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		int32_t* L_18 = (&__this->___remain2_10);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_19);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void SceneControll3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll3__ctor_mB19244FE62D6E23A670D0A9983E476B7D07BFDD2 (SceneControll3_t6242CF362B07F06EDC118BA6A5E0B7A45CAEA133* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float startPosX = -8.39f;
		__this->___startPosX_5 = (-8.39000034f);
		// [SerializeField] float startPosY = 1.05f;
		__this->___startPosY_6 = (1.04999995f);
		// [SerializeField] float goalPosX = 9.3f;
		__this->___goalPosX_7 = (9.30000019f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll4::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll4_Start_m5CE0C4DFB00AED1261E59328683BD4B578D5EECE (SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_6;
		float L_3 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// girl.transform.position = new Vector2(startPosX - 1.5f, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		float L_8 = __this->___startPosX_6;
		float L_9 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)il2cpp_codegen_subtract(L_8, (1.5f))), L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_10, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
		// LifeLimit.lifeLimit = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 0;
		// StoryManager.drink = SceneControll10.save3;
		int32_t L_12 = ((SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll10_t54E83C663CE490E98DBFA77F944D56B22CBF05E0_il2cpp_TypeInfo_var))->___save3_10;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_12;
		// }
		return;
	}
}
// System.Void SceneControll4::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll4_Update_m8BD49928D170EA102381D88E1601E7F7E0F03CFA (SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D79D3B1966EB7D44D51C865D91D54BC4E599F70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// save4 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF_il2cpp_TypeInfo_var))->___save4_18 = L_0;
		// if (alfa <= 1.0f)
		float L_1 = __this->___alfa_14;
		if ((!(((float)L_1) <= ((float)(1.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// alfa += Time.deltaTime;
		float L_2 = __this->___alfa_14;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_14 = ((float)il2cpp_codegen_add(L_2, L_3));
	}

IL_0029:
	{
		// for (int i = 0; i <= 3; i++)
		V_0 = 0;
		goto IL_0058;
	}

IL_002d:
	{
		// begin[i].color = new Color(1f, 1f, 1f, alfa);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_4 = __this->___begin_13;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		float L_8 = __this->___alfa_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (1.0f), (1.0f), (1.0f), L_8, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_7, L_9, NULL);
		// for (int i = 0; i <= 3; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0058:
	{
		// for (int i = 0; i <= 3; i++)
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)3)))
		{
			goto IL_002d;
		}
	}
	{
		// if ((boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX) && keep)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		float L_16 = __this->___goalPosX_8;
		if ((((float)L_15) >= ((float)L_16)))
		{
			goto IL_0096;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		float L_21 = __this->___goalPosX_8;
		if ((!(((float)L_20) >= ((float)L_21))))
		{
			goto IL_00ad;
		}
	}

IL_0096:
	{
		bool L_22 = __this->___keep_9;
		if (!L_22)
		{
			goto IL_00ad;
		}
	}
	{
		// SceneManager.LoadScene("Stage 1");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral0D79D3B1966EB7D44D51C865D91D54BC4E599F70, NULL);
		goto IL_016f;
	}

IL_00ad:
	{
		// else if (boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___x_2;
		float L_27 = __this->___goalPosX_8;
		if ((((float)L_26) >= ((float)L_27)))
		{
			goto IL_00ea;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		float L_31 = L_30.___x_2;
		float L_32 = __this->___goalPosX_8;
		if ((!(((float)L_31) >= ((float)L_32))))
		{
			goto IL_016f;
		}
	}

IL_00ea:
	{
		// var sequence = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_33;
		L_33 = DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754(NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -247.9449f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_34 = L_33;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), (0.0f), (-247.944901f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_38;
		L_38 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_36, L_37, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_39;
		L_39 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_38, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_40;
		L_40 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_34, L_39, NULL);
		// sequence.AppendInterval(5f);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_41 = L_34;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_42;
		L_42 = TweenSettingsExtensions_AppendInterval_m5254F71A9B119195C76E65B4DD15BE25D48CB891(L_41, (5.0f), NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -336.9f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_43 = L_41;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_44 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), (0.0f), (-336.899994f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_47;
		L_47 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_45, L_46, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_48;
		L_48 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_47, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_49;
		L_49 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_43, L_48, NULL);
		// sequence.Play();
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_50;
		L_50 = TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7(L_43, TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
	}

IL_016f:
	{
		// if (boyKeep && girlKeep)
		bool L_51 = __this->___boyKeep_10;
		if (!L_51)
		{
			goto IL_0199;
		}
	}
	{
		bool L_52 = __this->___girlKeep_11;
		if (!L_52)
		{
			goto IL_0199;
		}
	}
	{
		// GetComponent<Animator>().SetBool("keep", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_53;
		L_53 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_53, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)1, NULL);
		// keep = true;
		__this->___keep_9 = (bool)1;
		goto IL_01b1;
	}

IL_0199:
	{
		// GetComponent<Animator>().SetBool("keep", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_54;
		L_54 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_54, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)0, NULL);
		// keep = false;
		__this->___keep_9 = (bool)0;
	}

IL_01b1:
	{
		// if (LifeLimit.replay)
		bool L_55 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5;
		if (!L_55)
		{
			goto IL_0204;
		}
	}
	{
		// drinkPanel.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_56 = __this->___drinkPanel_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_56, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		V_1 = 0;
		goto IL_01da;
	}

IL_01c8:
	{
		// drinkNum[r].enabled = true;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_57 = __this->___drinkNum_15;
		int32_t L_58 = V_1;
		int32_t L_59 = L_58;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_60, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		int32_t L_61 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_01da:
	{
		// for (int r = 0; r <= 3; r++)
		int32_t L_62 = V_1;
		if ((((int32_t)L_62) <= ((int32_t)3)))
		{
			goto IL_01c8;
		}
	}
	{
		// remain4 = 10 - StoryManager.drink;
		int32_t L_63 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		__this->___remain4_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_63));
		// drinkNum[1].text = remain4.ToString();
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_64 = __this->___drinkNum_15;
		int32_t L_65 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_66 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		int32_t* L_67 = (&__this->___remain4_17);
		String_t* L_68;
		L_68 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_67, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_66, L_68);
	}

IL_0204:
	{
		// }
		return;
	}
}
// System.Void SceneControll4::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll4_OnTriggerEnter2D_mCC913C59820BD7804EEEF1C24FD432C9EA42D34D (SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = true;
		__this->___boyKeep_10 = (bool)1;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = true;
		__this->___girlKeep_11 = (bool)1;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll4::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll4_OnTriggerExit2D_m128AEC8828BB1DE76370337E7C543BD3F19EB95B (SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = false;
		__this->___boyKeep_10 = (bool)0;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = false;
		__this->___girlKeep_11 = (bool)0;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll4__ctor_mBB8BE707DD732FCF2251AE4C2732BF02868397DA (SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll5::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll5_Start_m7E21762F42DFFF4014031A78222EB8AA94E1FD2B (SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_6;
		float L_3 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// girl.transform.position = new Vector2(startPosX - 1.5f, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		float L_8 = __this->___startPosX_6;
		float L_9 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)il2cpp_codegen_subtract(L_8, (1.5f))), L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_10, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
		// LifeLimit.lifeLimit = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 0;
		// StoryManager.drink = SceneControll4.save4;
		int32_t L_12 = ((SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll4_t82040FDD15C1D3EC1A3640D905F8E52671CC5ABF_il2cpp_TypeInfo_var))->___save4_18;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_12;
		// }
		return;
	}
}
// System.Void SceneControll5::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll5_Update_m0D4362C30A9F0ADFB0D20216D2C76F5FB8CF2A90 (SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA22BE135F7C234291DFB3E3F989BE78E47AFEC6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// save5 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B_il2cpp_TypeInfo_var))->___save5_16 = L_0;
		// if ((boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX) && keep)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		float L_5 = __this->___goalPosX_8;
		if ((((float)L_4) >= ((float)L_5)))
		{
			goto IL_0044;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		float L_10 = __this->___goalPosX_8;
		if ((!(((float)L_9) >= ((float)L_10))))
		{
			goto IL_005b;
		}
	}

IL_0044:
	{
		bool L_11 = __this->___keep_9;
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		// SceneManager.LoadScene("Stage 2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralFA22BE135F7C234291DFB3E3F989BE78E47AFEC6, NULL);
		goto IL_011d;
	}

IL_005b:
	{
		// else if (boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		float L_16 = __this->___goalPosX_8;
		if ((((float)L_15) >= ((float)L_16)))
		{
			goto IL_0098;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		float L_21 = __this->___goalPosX_8;
		if ((!(((float)L_20) >= ((float)L_21))))
		{
			goto IL_011d;
		}
	}

IL_0098:
	{
		// var sequence = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_22;
		L_22 = DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754(NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -247.9449f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_23 = L_22;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (-247.944901f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_27;
		L_27 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_25, L_26, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_28;
		L_28 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_27, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_29;
		L_29 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_23, L_28, NULL);
		// sequence.AppendInterval(5f);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_30 = L_23;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_31;
		L_31 = TweenSettingsExtensions_AppendInterval_m5254F71A9B119195C76E65B4DD15BE25D48CB891(L_30, (5.0f), NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -336.9f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_32 = L_30;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), (0.0f), (-336.899994f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_36;
		L_36 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_34, L_35, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_37;
		L_37 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_36, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_38;
		L_38 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_32, L_37, NULL);
		// sequence.Play();
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_39;
		L_39 = TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7(L_32, TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
	}

IL_011d:
	{
		// if (boyKeep && girlKeep)
		bool L_40 = __this->___boyKeep_10;
		if (!L_40)
		{
			goto IL_0147;
		}
	}
	{
		bool L_41 = __this->___girlKeep_11;
		if (!L_41)
		{
			goto IL_0147;
		}
	}
	{
		// GetComponent<Animator>().SetBool("keep", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42;
		L_42 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_42, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)1, NULL);
		// keep = true;
		__this->___keep_9 = (bool)1;
		goto IL_015f;
	}

IL_0147:
	{
		// GetComponent<Animator>().SetBool("keep", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_43;
		L_43 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_43, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)0, NULL);
		// keep = false;
		__this->___keep_9 = (bool)0;
	}

IL_015f:
	{
		// if (LifeLimit.replay)
		bool L_44 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5;
		if (!L_44)
		{
			goto IL_01b2;
		}
	}
	{
		// drinkPanel.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45 = __this->___drinkPanel_14;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_45, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		V_0 = 0;
		goto IL_0188;
	}

IL_0176:
	{
		// drinkNum[r].enabled = true;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_46 = __this->___drinkNum_13;
		int32_t L_47 = V_0;
		int32_t L_48 = L_47;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_49, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0188:
	{
		// for (int r = 0; r <= 3; r++)
		int32_t L_51 = V_0;
		if ((((int32_t)L_51) <= ((int32_t)3)))
		{
			goto IL_0176;
		}
	}
	{
		// remain5 = 10 - StoryManager.drink;
		int32_t L_52 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		__this->___remain5_15 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_52));
		// drinkNum[1].text = remain5.ToString();
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_53 = __this->___drinkNum_13;
		int32_t L_54 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_55 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		int32_t* L_56 = (&__this->___remain5_15);
		String_t* L_57;
		L_57 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_56, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_55, L_57);
	}

IL_01b2:
	{
		// }
		return;
	}
}
// System.Void SceneControll5::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll5_OnTriggerEnter2D_mC8BFDA72E9B6F7B855B9BE3E1906B3E0B297CDE8 (SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = true;
		__this->___boyKeep_10 = (bool)1;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = true;
		__this->___girlKeep_11 = (bool)1;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll5::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll5_OnTriggerExit2D_mF1D4F45D2855B0D64E027EC34C287006169F871E (SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = false;
		__this->___boyKeep_10 = (bool)0;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = false;
		__this->___girlKeep_11 = (bool)0;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll5__ctor_mACB2B4AFAD7FF3B30D32059C0A4CA7408CF5035D (SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll6::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll6_Start_mDA99E5FAD8206018809454F7AAEEA531BB1CBEEA (SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_6;
		float L_3 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// girl.transform.position = new Vector2(startPosX - 1.5f, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		float L_8 = __this->___startPosX_6;
		float L_9 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)il2cpp_codegen_subtract(L_8, (1.5f))), L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_10, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
		// LifeLimit.lifeLimit = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 0;
		// StoryManager.drink = SceneControll5.save5;
		int32_t L_12 = ((SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll5_t960D392A7364A1FFAB20E79AD4776CBF3047467B_il2cpp_TypeInfo_var))->___save5_16;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_12;
		// }
		return;
	}
}
// System.Void SceneControll6::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll6_Update_mC52361EA624D87C05C5F593C5D5E6A6FAEDBC211 (SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6883F9BDB242711488E76B16F706EED813419FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// save6 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222_il2cpp_TypeInfo_var))->___save6_18 = L_0;
		// if ((boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX) && keep)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		float L_5 = __this->___goalPosX_8;
		if ((((float)L_4) >= ((float)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		float L_10 = __this->___goalPosX_8;
		if ((!(((float)L_9) >= ((float)L_10))))
		{
			goto IL_00e7;
		}
	}

IL_0047:
	{
		bool L_11 = __this->___keep_9;
		if (!L_11)
		{
			goto IL_00e7;
		}
	}
	{
		// if (alfa > 0f)
		float L_12 = __this->___alfa_14;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_00c9;
		}
	}
	{
		// alfa -= Time.deltaTime;
		float L_13 = __this->___alfa_14;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_14 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// for (int i = 0; i <= 3; i++)
		V_0 = 0;
		goto IL_00a0;
	}

IL_0075:
	{
		// end[i].color = new Color(1f, 1f, 1f, alfa);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_15 = __this->___end_13;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		float L_19 = __this->___alfa_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_20), (1.0f), (1.0f), (1.0f), L_19, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_18, L_20, NULL);
		// for (int i = 0; i <= 3; i++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00a0:
	{
		// for (int i = 0; i <= 3; i++)
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)3)))
		{
			goto IL_0075;
		}
	}
	{
		// GameObject.Find("LoopBGM").GetComponent<AudioSource>().volume -= Time.deltaTime;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24;
		L_24 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_23, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_25 = L_24;
		float L_26;
		L_26 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_25, NULL);
		float L_27;
		L_27 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_25, ((float)il2cpp_codegen_subtract(L_26, L_27)), NULL);
		goto IL_01a9;
	}

IL_00c9:
	{
		// SceneManager.LoadScene("Story 1");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralA6883F9BDB242711488E76B16F706EED813419FD, NULL);
		// Destroy(GameObject.Find("LoopBGM"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_28, NULL);
		goto IL_01a9;
	}

IL_00e7:
	{
		// else if (boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___x_2;
		float L_33 = __this->___goalPosX_8;
		if ((((float)L_32) >= ((float)L_33)))
		{
			goto IL_0124;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		float L_37 = L_36.___x_2;
		float L_38 = __this->___goalPosX_8;
		if ((!(((float)L_37) >= ((float)L_38))))
		{
			goto IL_01a9;
		}
	}

IL_0124:
	{
		// var sequence = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_39;
		L_39 = DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754(NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -247.9449f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_40 = L_39;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_41 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), (0.0f), (-247.944901f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_44;
		L_44 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_42, L_43, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_45;
		L_45 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_44, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_46;
		L_46 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_40, L_45, NULL);
		// sequence.AppendInterval(5f);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_47 = L_40;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_48;
		L_48 = TweenSettingsExtensions_AppendInterval_m5254F71A9B119195C76E65B4DD15BE25D48CB891(L_47, (5.0f), NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -336.9f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_49 = L_47;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_50 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), (0.0f), (-336.899994f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_53;
		L_53 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_51, L_52, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_54;
		L_54 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_53, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_55;
		L_55 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_49, L_54, NULL);
		// sequence.Play();
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_56;
		L_56 = TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7(L_49, TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
	}

IL_01a9:
	{
		// if (boyKeep && girlKeep)
		bool L_57 = __this->___boyKeep_10;
		if (!L_57)
		{
			goto IL_01d3;
		}
	}
	{
		bool L_58 = __this->___girlKeep_11;
		if (!L_58)
		{
			goto IL_01d3;
		}
	}
	{
		// GetComponent<Animator>().SetBool("keep", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_59;
		L_59 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_59, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)1, NULL);
		// keep = true;
		__this->___keep_9 = (bool)1;
		goto IL_01eb;
	}

IL_01d3:
	{
		// GetComponent<Animator>().SetBool("keep", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_60;
		L_60 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_60, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)0, NULL);
		// keep = false;
		__this->___keep_9 = (bool)0;
	}

IL_01eb:
	{
		// if (LifeLimit.replay)
		bool L_61 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5;
		if (!L_61)
		{
			goto IL_023e;
		}
	}
	{
		// drinkPanel.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62 = __this->___drinkPanel_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_62, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		V_1 = 0;
		goto IL_0214;
	}

IL_0202:
	{
		// drinkNum[r].enabled = true;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_63 = __this->___drinkNum_15;
		int32_t L_64 = V_1;
		int32_t L_65 = L_64;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_66 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_66, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		int32_t L_67 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0214:
	{
		// for (int r = 0; r <= 3; r++)
		int32_t L_68 = V_1;
		if ((((int32_t)L_68) <= ((int32_t)3)))
		{
			goto IL_0202;
		}
	}
	{
		// remain6 = 10 - StoryManager.drink;
		int32_t L_69 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		__this->___remain6_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_69));
		// drinkNum[1].text = remain6.ToString();
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_70 = __this->___drinkNum_15;
		int32_t L_71 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_72 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		int32_t* L_73 = (&__this->___remain6_17);
		String_t* L_74;
		L_74 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_73, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_72, L_74);
	}

IL_023e:
	{
		// }
		return;
	}
}
// System.Void SceneControll6::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll6_OnTriggerEnter2D_m3EED1C4A6BA4C16F452591E5AD0F0021C8AF89DB (SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = true;
		__this->___boyKeep_10 = (bool)1;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = true;
		__this->___girlKeep_11 = (bool)1;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll6::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll6_OnTriggerExit2D_m06A6BB23CE204C222968CBF2103F2B4CC6693955 (SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = false;
		__this->___boyKeep_10 = (bool)0;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = false;
		__this->___girlKeep_11 = (bool)0;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll6::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll6__ctor_m5C71A07D1C1914CF19678ECD418EBC1F3BF7DA33 (SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222* __this, const RuntimeMethod* method) 
{
	{
		// private float alfa = 1f;
		__this->___alfa_14 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll7::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll7_Start_m6A1EF8CC8E854256A8F7F0BB3DB1EA9FAE3A3DA2 (SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_6;
		float L_3 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// girl.transform.position = new Vector2(startPosX - 1.5f, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		float L_8 = __this->___startPosX_6;
		float L_9 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)il2cpp_codegen_subtract(L_8, (1.5f))), L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_10, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
		// if (Stage2Anim.good)
		bool L_12 = ((Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_StaticFields*)il2cpp_codegen_static_fields_for(Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_il2cpp_TypeInfo_var))->___good_16;
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		// LifeLimit.lifeLimit = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 0;
		goto IL_0067;
	}

IL_0061:
	{
		// LifeLimit.lifeLimit = 1;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 1;
	}

IL_0067:
	{
		// StoryManager.drink = SceneControll6.save6;
		int32_t L_13 = ((SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll6_tC1152E3581E0D5988027B2F38EBCFEFE4DE1E222_il2cpp_TypeInfo_var))->___save6_18;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_13;
		// }
		return;
	}
}
// System.Void SceneControll7::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll7_Update_m293F3007952F7B0A6DA19BDD47E7E8132C2421CE (SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD3C385B9782E97550460E3BE80B85784E172824);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// save7 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383_il2cpp_TypeInfo_var))->___save7_16 = L_0;
		// if (alfa <= 1.0f)
		float L_1 = __this->___alfa_18;
		if ((!(((float)L_1) <= ((float)(1.0f)))))
		{
			goto IL_0062;
		}
	}
	{
		// alfa += Time.deltaTime / 1.5f;
		float L_2 = __this->___alfa_18;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_18 = ((float)il2cpp_codegen_add(L_2, ((float)(L_3/(1.5f)))));
		// for (int i = 0; i <= 5; i++)
		V_0 = 0;
		goto IL_005e;
	}

IL_0033:
	{
		// begin[i].color = new Color(1f, 1f, 1f, alfa);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_4 = __this->___begin_17;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		float L_8 = __this->___alfa_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (1.0f), (1.0f), (1.0f), L_8, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_7, L_9, NULL);
		// for (int i = 0; i <= 5; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_005e:
	{
		// for (int i = 0; i <= 5; i++)
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)5)))
		{
			goto IL_0033;
		}
	}

IL_0062:
	{
		// if ((boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX) && keep)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		float L_16 = __this->___goalPosX_8;
		if ((((float)L_15) >= ((float)L_16)))
		{
			goto IL_009c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		float L_21 = __this->___goalPosX_8;
		if ((!(((float)L_20) >= ((float)L_21))))
		{
			goto IL_00b3;
		}
	}

IL_009c:
	{
		bool L_22 = __this->___keep_9;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		// SceneManager.LoadScene("Stage 4");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralDD3C385B9782E97550460E3BE80B85784E172824, NULL);
		goto IL_0175;
	}

IL_00b3:
	{
		// else if (boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___x_2;
		float L_27 = __this->___goalPosX_8;
		if ((((float)L_26) >= ((float)L_27)))
		{
			goto IL_00f0;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		float L_31 = L_30.___x_2;
		float L_32 = __this->___goalPosX_8;
		if ((!(((float)L_31) >= ((float)L_32))))
		{
			goto IL_0175;
		}
	}

IL_00f0:
	{
		// var sequence = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_33;
		L_33 = DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754(NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -247.9449f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_34 = L_33;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), (0.0f), (-247.944901f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_38;
		L_38 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_36, L_37, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_39;
		L_39 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_38, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_40;
		L_40 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_34, L_39, NULL);
		// sequence.AppendInterval(5f);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_41 = L_34;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_42;
		L_42 = TweenSettingsExtensions_AppendInterval_m5254F71A9B119195C76E65B4DD15BE25D48CB891(L_41, (5.0f), NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -336.9f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_43 = L_41;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_44 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), (0.0f), (-336.899994f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_47;
		L_47 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_45, L_46, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_48;
		L_48 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_47, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_49;
		L_49 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_43, L_48, NULL);
		// sequence.Play();
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_50;
		L_50 = TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7(L_43, TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
	}

IL_0175:
	{
		// if (boyKeep && girlKeep)
		bool L_51 = __this->___boyKeep_10;
		if (!L_51)
		{
			goto IL_019f;
		}
	}
	{
		bool L_52 = __this->___girlKeep_11;
		if (!L_52)
		{
			goto IL_019f;
		}
	}
	{
		// GetComponent<Animator>().SetBool("keep", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_53;
		L_53 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_53, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)1, NULL);
		// keep = true;
		__this->___keep_9 = (bool)1;
		goto IL_01b7;
	}

IL_019f:
	{
		// GetComponent<Animator>().SetBool("keep", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_54;
		L_54 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_54, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)0, NULL);
		// keep = false;
		__this->___keep_9 = (bool)0;
	}

IL_01b7:
	{
		// if (LifeLimit.replay)
		bool L_55 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5;
		if (!L_55)
		{
			goto IL_020a;
		}
	}
	{
		// drinkPanel.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_56 = __this->___drinkPanel_14;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_56, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		V_1 = 0;
		goto IL_01e0;
	}

IL_01ce:
	{
		// drinkNum[r].enabled = true;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_57 = __this->___drinkNum_13;
		int32_t L_58 = V_1;
		int32_t L_59 = L_58;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_60, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		int32_t L_61 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_01e0:
	{
		// for (int r = 0; r <= 3; r++)
		int32_t L_62 = V_1;
		if ((((int32_t)L_62) <= ((int32_t)3)))
		{
			goto IL_01ce;
		}
	}
	{
		// remain7 = 10 - StoryManager.drink;
		int32_t L_63 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		__this->___remain7_15 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_63));
		// drinkNum[1].text = remain7.ToString();
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_64 = __this->___drinkNum_13;
		int32_t L_65 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_66 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		int32_t* L_67 = (&__this->___remain7_15);
		String_t* L_68;
		L_68 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_67, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_66, L_68);
	}

IL_020a:
	{
		// }
		return;
	}
}
// System.Void SceneControll7::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll7_OnTriggerEnter2D_mA0F8D2C67195C60C0B8C60A6725664C66B597902 (SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = true;
		__this->___boyKeep_10 = (bool)1;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = true;
		__this->___girlKeep_11 = (bool)1;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll7::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll7_OnTriggerExit2D_m70E94B2E9F5097A282397A315A4CCB4C7E87C163 (SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = false;
		__this->___boyKeep_10 = (bool)0;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = false;
		__this->___girlKeep_11 = (bool)0;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll7__ctor_mE54A83E28AAF35BBD0BFBD6F71A85C18FA28BE2F (SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll8::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll8_Start_m83D6D918FDBC15571E93DF65585815401A99C5DA (SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_6;
		float L_3 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// girl.transform.position = new Vector2(startPosX - 1.5f, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		float L_8 = __this->___startPosX_6;
		float L_9 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)il2cpp_codegen_subtract(L_8, (1.5f))), L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_10, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
		// if (Stage2Anim.good)
		bool L_12 = ((Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_StaticFields*)il2cpp_codegen_static_fields_for(Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_il2cpp_TypeInfo_var))->___good_16;
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		// LifeLimit.lifeLimit = 0;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 0;
		goto IL_0067;
	}

IL_0061:
	{
		// LifeLimit.lifeLimit = 1;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 1;
	}

IL_0067:
	{
		// StoryManager.drink = SceneControll7.save7;
		int32_t L_13 = ((SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll7_t5A6D451E9DC8F2967654F19196FBE110A756A383_il2cpp_TypeInfo_var))->___save7_16;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_13;
		// }
		return;
	}
}
// System.Void SceneControll8::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll8_Update_mDC4F1473E3D381B5288C266287F15EFD9DB2A779 (SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04CDB86ABCF7DC9E25C64537A1AD074C4DEDE52A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// save8 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E_il2cpp_TypeInfo_var))->___save8_16 = L_0;
		// if ((boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX) && keep)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		float L_5 = __this->___goalPosX_8;
		if ((((float)L_4) >= ((float)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		float L_10 = __this->___goalPosX_8;
		if ((!(((float)L_9) >= ((float)L_10))))
		{
			goto IL_00ed;
		}
	}

IL_0047:
	{
		bool L_11 = __this->___keep_9;
		if (!L_11)
		{
			goto IL_00ed;
		}
	}
	{
		// if (alfa > 0f)
		float L_12 = __this->___alfa_18;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_00cf;
		}
	}
	{
		// alfa -= Time.deltaTime / 1.5f;
		float L_13 = __this->___alfa_18;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_18 = ((float)il2cpp_codegen_subtract(L_13, ((float)(L_14/(1.5f)))));
		// for (int i = 0; i <= 5; i++)
		V_0 = 0;
		goto IL_00a6;
	}

IL_007b:
	{
		// end[i].color = new Color(1f, 1f, 1f, alfa);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_15 = __this->___end_17;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		float L_19 = __this->___alfa_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_20), (1.0f), (1.0f), (1.0f), L_19, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_18, L_20, NULL);
		// for (int i = 0; i <= 5; i++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00a6:
	{
		// for (int i = 0; i <= 5; i++)
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)5)))
		{
			goto IL_007b;
		}
	}
	{
		// GameObject.Find("LoopBGM").GetComponent<AudioSource>().volume -= Time.deltaTime;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24;
		L_24 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_23, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_25 = L_24;
		float L_26;
		L_26 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_25, NULL);
		float L_27;
		L_27 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_25, ((float)il2cpp_codegen_subtract(L_26, L_27)), NULL);
		goto IL_01af;
	}

IL_00cf:
	{
		// SceneManager.LoadScene("Story 2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral04CDB86ABCF7DC9E25C64537A1AD074C4DEDE52A, NULL);
		// Destroy(GameObject.Find("LoopBGM"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_28, NULL);
		goto IL_01af;
	}

IL_00ed:
	{
		// else if (boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___x_2;
		float L_33 = __this->___goalPosX_8;
		if ((((float)L_32) >= ((float)L_33)))
		{
			goto IL_012a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		float L_37 = L_36.___x_2;
		float L_38 = __this->___goalPosX_8;
		if ((!(((float)L_37) >= ((float)L_38))))
		{
			goto IL_01af;
		}
	}

IL_012a:
	{
		// var sequence = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_39;
		L_39 = DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754(NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -247.9449f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_40 = L_39;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_41 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), (0.0f), (-247.944901f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_44;
		L_44 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_42, L_43, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_45;
		L_45 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_44, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_46;
		L_46 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_40, L_45, NULL);
		// sequence.AppendInterval(5f);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_47 = L_40;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_48;
		L_48 = TweenSettingsExtensions_AppendInterval_m5254F71A9B119195C76E65B4DD15BE25D48CB891(L_47, (5.0f), NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -336.9f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_49 = L_47;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_50 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), (0.0f), (-336.899994f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_53;
		L_53 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_51, L_52, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_54;
		L_54 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_53, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_55;
		L_55 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_49, L_54, NULL);
		// sequence.Play();
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_56;
		L_56 = TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7(L_49, TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
	}

IL_01af:
	{
		// if (boyKeep && girlKeep)
		bool L_57 = __this->___boyKeep_10;
		if (!L_57)
		{
			goto IL_01d9;
		}
	}
	{
		bool L_58 = __this->___girlKeep_11;
		if (!L_58)
		{
			goto IL_01d9;
		}
	}
	{
		// GetComponent<Animator>().SetBool("keep", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_59;
		L_59 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_59, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)1, NULL);
		// keep = true;
		__this->___keep_9 = (bool)1;
		goto IL_01f1;
	}

IL_01d9:
	{
		// GetComponent<Animator>().SetBool("keep", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_60;
		L_60 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_60, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)0, NULL);
		// keep = false;
		__this->___keep_9 = (bool)0;
	}

IL_01f1:
	{
		// if (LifeLimit.replay)
		bool L_61 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5;
		if (!L_61)
		{
			goto IL_0244;
		}
	}
	{
		// drinkPanel.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62 = __this->___drinkPanel_14;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_62, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		V_1 = 0;
		goto IL_021a;
	}

IL_0208:
	{
		// drinkNum[r].enabled = true;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_63 = __this->___drinkNum_13;
		int32_t L_64 = V_1;
		int32_t L_65 = L_64;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_66 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_66, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		int32_t L_67 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_021a:
	{
		// for (int r = 0; r <= 3; r++)
		int32_t L_68 = V_1;
		if ((((int32_t)L_68) <= ((int32_t)3)))
		{
			goto IL_0208;
		}
	}
	{
		// remain8 = 10 - StoryManager.drink;
		int32_t L_69 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		__this->___remain8_15 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_69));
		// drinkNum[1].text = remain8.ToString();
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_70 = __this->___drinkNum_13;
		int32_t L_71 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_72 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		int32_t* L_73 = (&__this->___remain8_15);
		String_t* L_74;
		L_74 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_73, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_72, L_74);
	}

IL_0244:
	{
		// }
		return;
	}
}
// System.Void SceneControll8::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll8_OnTriggerEnter2D_m3A1843B6ACBBDA32FF5D8DFCEF0D493D627584B8 (SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = true;
		__this->___boyKeep_10 = (bool)1;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = true;
		__this->___girlKeep_11 = (bool)1;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll8::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll8_OnTriggerExit2D_m6F142BABBE793B5C99C696BBBC04B70D09207E7D (SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = false;
		__this->___boyKeep_10 = (bool)0;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = false;
		__this->___girlKeep_11 = (bool)0;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll8__ctor_mA2B4EB02D5A10D9D5BFB72D49FBC39989F740CD3 (SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E* __this, const RuntimeMethod* method) 
{
	{
		// private float alfa = 1f;
		__this->___alfa_18 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneControll9::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll9_Start_m24B2D2BC7A602F9F94D2B239D44A6B41E1930845 (SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.transform.position = new Vector2(startPosX, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = __this->___startPosX_6;
		float L_3 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// girl.transform.position = new Vector2(startPosX - 1.5f, startPosY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		float L_8 = __this->___startPosX_6;
		float L_9 = __this->___startPosY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)il2cpp_codegen_subtract(L_8, (1.5f))), L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_10, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
		// if (Stage3Anim.good)
		bool L_12 = ((Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_StaticFields*)il2cpp_codegen_static_fields_for(Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_il2cpp_TypeInfo_var))->___good_25;
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		// LifeLimit.lifeLimit = 1;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 1;
		goto IL_0067;
	}

IL_0061:
	{
		// LifeLimit.lifeLimit = 2;
		((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___lifeLimit_4 = 2;
	}

IL_0067:
	{
		// StoryManager.drink = SceneControll8.save8;
		int32_t L_13 = ((SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll8_tC80CC4F4C38621D62B15D6A400E88F668E8CD88E_il2cpp_TypeInfo_var))->___save8_16;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = L_13;
		// }
		return;
	}
}
// System.Void SceneControll9::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll9_Update_m394016149AE9A45C4BD6BB8DE448DB5C66897DB1 (SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88C8EA98172AF7B096F2F5385A81BAD0729D4898);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// save9 = StoryManager.drink;
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		((SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55_StaticFields*)il2cpp_codegen_static_fields_for(SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55_il2cpp_TypeInfo_var))->___save9_16 = L_0;
		// if (alfa <= 1.0f && !keep)
		float L_1 = __this->___alfa_19;
		if ((!(((float)L_1) <= ((float)(1.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		bool L_2 = __this->___keep_9;
		if (L_2)
		{
			goto IL_006a;
		}
	}
	{
		// alfa += Time.deltaTime / 1.5f;
		float L_3 = __this->___alfa_19;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_19 = ((float)il2cpp_codegen_add(L_3, ((float)(L_4/(1.5f)))));
		// for (int i = 0; i <= 2; i++)
		V_0 = 0;
		goto IL_0066;
	}

IL_003b:
	{
		// begin[i].color = new Color(1f, 1f, 1f, alfa);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_5 = __this->___begin_17;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		float L_9 = __this->___alfa_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_10), (1.0f), (1.0f), (1.0f), L_9, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_8, L_10, NULL);
		// for (int i = 0; i <= 2; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0066:
	{
		// for (int i = 0; i <= 2; i++)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)2)))
		{
			goto IL_003b;
		}
	}

IL_006a:
	{
		// if ((boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX) && keep)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___x_2;
		float L_17 = __this->___goalPosX_8;
		if ((((float)L_16) >= ((float)L_17)))
		{
			goto IL_00a7;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___x_2;
		float L_22 = __this->___goalPosX_8;
		if ((!(((float)L_21) >= ((float)L_22))))
		{
			goto IL_014d;
		}
	}

IL_00a7:
	{
		bool L_23 = __this->___keep_9;
		if (!L_23)
		{
			goto IL_014d;
		}
	}
	{
		// if (alfa > 0f)
		float L_24 = __this->___alfa_19;
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_012f;
		}
	}
	{
		// alfa -= Time.deltaTime / 1.5f;
		float L_25 = __this->___alfa_19;
		float L_26;
		L_26 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_19 = ((float)il2cpp_codegen_subtract(L_25, ((float)(L_26/(1.5f)))));
		// for (int i = 0; i <= 8; i++)
		V_1 = 0;
		goto IL_0106;
	}

IL_00db:
	{
		// end[i].color = new Color(1f, 1f, 1f, alfa);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_27 = __this->___end_18;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = __this->___alfa_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		memset((&L_32), 0, sizeof(L_32));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_32), (1.0f), (1.0f), (1.0f), L_31, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_30, L_32, NULL);
		// for (int i = 0; i <= 8; i++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0106:
	{
		// for (int i = 0; i <= 8; i++)
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) <= ((int32_t)8)))
		{
			goto IL_00db;
		}
	}
	{
		// GameObject.Find("LoopBGM").GetComponent<AudioSource>().volume -= Time.deltaTime;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_36;
		L_36 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_35, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_37 = L_36;
		float L_38;
		L_38 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_37, NULL);
		float L_39;
		L_39 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_37, ((float)il2cpp_codegen_subtract(L_38, L_39)), NULL);
		goto IL_020f;
	}

IL_012f:
	{
		// SceneManager.LoadScene("Story 3");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral88C8EA98172AF7B096F2F5385A81BAD0729D4898, NULL);
		// Destroy(GameObject.Find("LoopBGM"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_40, NULL);
		goto IL_020f;
	}

IL_014d:
	{
		// else if (boy.transform.position.x >= goalPosX || girl.transform.position.x >= goalPosX)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___boy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		float L_44 = L_43.___x_2;
		float L_45 = __this->___goalPosX_8;
		if ((((float)L_44) >= ((float)L_45)))
		{
			goto IL_018a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___girl_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_47, NULL);
		float L_49 = L_48.___x_2;
		float L_50 = __this->___goalPosX_8;
		if ((!(((float)L_49) >= ((float)L_50))))
		{
			goto IL_020f;
		}
	}

IL_018a:
	{
		// var sequence = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_51;
		L_51 = DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754(NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -247.9449f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_52 = L_51;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_53 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_55), (0.0f), (-247.944901f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_56;
		L_56 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_54, L_55, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_57;
		L_57 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_56, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_58;
		L_58 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_52, L_57, NULL);
		// sequence.AppendInterval(5f);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_59 = L_52;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_60;
		L_60 = TweenSettingsExtensions_AppendInterval_m5254F71A9B119195C76E65B4DD15BE25D48CB891(L_59, (5.0f), NULL);
		// sequence.Append(textBar.transform.DOLocalMove(new Vector3(0f, -336.9f, 0f), 0.5f).SetEase(Ease.OutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_61 = L_59;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62 = __this->___textBar_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_64), (0.0f), (-336.899994f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_65;
		L_65 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_63, L_64, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_66;
		L_66 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E(L_65, 3, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m40D9FF91AB43F79C85D92D5874428DD19350804E_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_67;
		L_67 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_61, L_66, NULL);
		// sequence.Play();
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_68;
		L_68 = TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7(L_61, TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
	}

IL_020f:
	{
		// if (boyKeep && girlKeep)
		bool L_69 = __this->___boyKeep_10;
		if (!L_69)
		{
			goto IL_0239;
		}
	}
	{
		bool L_70 = __this->___girlKeep_11;
		if (!L_70)
		{
			goto IL_0239;
		}
	}
	{
		// GetComponent<Animator>().SetBool("keep", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_71;
		L_71 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_71, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)1, NULL);
		// keep = true;
		__this->___keep_9 = (bool)1;
		goto IL_0251;
	}

IL_0239:
	{
		// GetComponent<Animator>().SetBool("keep", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_72;
		L_72 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_72, _stringLiteralE0FEA9F3B794D3364DB15204635CC37165B99A94, (bool)0, NULL);
		// keep = false;
		__this->___keep_9 = (bool)0;
	}

IL_0251:
	{
		// if (LifeLimit.replay)
		bool L_73 = ((LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_StaticFields*)il2cpp_codegen_static_fields_for(LifeLimit_tB1594D27E8399F25D3B4ECF1248404819C02977A_il2cpp_TypeInfo_var))->___replay_5;
		if (!L_73)
		{
			goto IL_02a4;
		}
	}
	{
		// drinkPanel.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_74 = __this->___drinkPanel_14;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_74, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		V_2 = 0;
		goto IL_027a;
	}

IL_0268:
	{
		// drinkNum[r].enabled = true;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_75 = __this->___drinkNum_13;
		int32_t L_76 = V_2;
		int32_t L_77 = L_76;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_78 = (L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_78, (bool)1, NULL);
		// for (int r = 0; r <= 3; r++)
		int32_t L_79 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_027a:
	{
		// for (int r = 0; r <= 3; r++)
		int32_t L_80 = V_2;
		if ((((int32_t)L_80) <= ((int32_t)3)))
		{
			goto IL_0268;
		}
	}
	{
		// remain9 = 10 - StoryManager.drink;
		int32_t L_81 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		__this->___remain9_15 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_81));
		// drinkNum[1].text = remain9.ToString();
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_82 = __this->___drinkNum_13;
		int32_t L_83 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_84 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		int32_t* L_85 = (&__this->___remain9_15);
		String_t* L_86;
		L_86 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_85, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_84, L_86);
	}

IL_02a4:
	{
		// }
		return;
	}
}
// System.Void SceneControll9::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll9_OnTriggerEnter2D_m549FDD4734BD1EC758112E936DA926A8C4834773 (SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = true;
		__this->___boyKeep_10 = (bool)1;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = true;
		__this->___girlKeep_11 = (bool)1;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll9::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll9_OnTriggerExit2D_mCC406B78CD136359B4C86F7CED2B2A0E872BE0B1 (SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Boy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral22EFCE732D45BCC59CB5B326A2F258636984938F, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// boyKeep = false;
		__this->___boyKeep_10 = (bool)0;
	}

IL_001e:
	{
		// if (collision.gameObject.name == "Girl")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralCEA16FC0CD8596217BF99EF6746DFD78BC1C5A39, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// girlKeep = false;
		__this->___girlKeep_11 = (bool)0;
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneControll9::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControll9__ctor_mDED919392C9A04BF912D856215238337EFB32D8F (SceneControll9_t06DAB94469B9BB278D3DCAD8773620EE0E1AFA55* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_Start_m0186CEC1A412944CA2468485E8FEB0AAE2587531 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	{
		// BlackOut.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___BlackOut_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void StartButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_Update_mE2ADF40812F63A61BFDBC232B9AD2D7936F57654 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BlackOut.enabled)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___BlackOut_4;
		bool L_1;
		L_1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_0, NULL);
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		// alfa += Time.deltaTime / 2;
		float L_2 = __this->___alfa_5;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_5 = ((float)il2cpp_codegen_add(L_2, ((float)(L_3/(2.0f)))));
		// BlackOut.color = new Color(0f, 0f, 0f, alfa);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___BlackOut_4;
		float L_5 = __this->___alfa_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (0.0f), (0.0f), (0.0f), L_5, /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_6);
		// noise.volume -= Time.deltaTime / 2;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___noise_6;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = L_7;
		float L_9;
		L_9 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_8, NULL);
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_8, ((float)il2cpp_codegen_subtract(L_9, ((float)(L_10/(2.0f))))), NULL);
		// if (alfa >= 1.0f)
		float L_11 = __this->___alfa_5;
		if ((!(((float)L_11) >= ((float)(1.0f)))))
		{
			goto IL_007e;
		}
	}
	{
		// SceneManager.LoadScene("Tutorial");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274, NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void StartButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_OnClick_m1DFDDC6DB75D47F30BF1A9A344BFDB45CCF75E87 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	{
		// BlackOut.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___BlackOut_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void StartButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton__ctor_m8454B8AF76546ABE9126D56D36A2AC0DDCA673B3 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AtmosDontDestroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtmosDontDestroy_Start_m7A270E8DA578CE2A9695EBC088AA78CEDC5F1A1C (AtmosDontDestroy_tFF61E01175ED860DFE59D817FEAD40FEA2452DE7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AtmosDontDestroy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtmosDontDestroy_Update_mDBF449D14C7CB2DC0067429B7ECFBA4D2533E5F3 (AtmosDontDestroy_tFF61E01175ED860DFE59D817FEAD40FEA2452DE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04ECFE128DA26013CA327EEF70FA7DBC82E5F7B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// BGM.transform.name = "LoopBGM";
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___BGM_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, _stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		// if (BGM.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___BGM_4;
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// GameObject bgmEmpty_1 = GameObject.Find("atmos01");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral04ECFE128DA26013CA327EEF70FA7DBC82E5F7B7, NULL);
		// Destroy(bgmEmpty_1);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void AtmosDontDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtmosDontDestroy__ctor_mB4E4DB541BEA0E5D7964C67112476166C353A612 (AtmosDontDestroy_tFF61E01175ED860DFE59D817FEAD40FEA2452DE7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BunkazaiDontDestroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BunkazaiDontDestroy_Start_mC56336AE21B90819990E4BC14E55A4D612FE8167 (BunkazaiDontDestroy_tC05FFC7F882799CB154A6AEF67B611CFA8AEE507* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BunkazaiDontDestroy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BunkazaiDontDestroy_Update_m94FF7D3981C975E93ECE8F6D5BCEEFB42B2FC644 (BunkazaiDontDestroy_tC05FFC7F882799CB154A6AEF67B611CFA8AEE507* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5E930960FCA583F1461F0C39DC95CD5AC80DC60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// BGM.transform.name = "LoopBGM";
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___BGM_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, _stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		// if (BGM.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___BGM_4;
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// GameObject bgmEmpty_1 = GameObject.Find("bunkazai");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralF5E930960FCA583F1461F0C39DC95CD5AC80DC60, NULL);
		// Destroy(bgmEmpty_1);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void BunkazaiDontDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BunkazaiDontDestroy__ctor_m588EAB03CF013A28174C8ACF25298EA2FFF6A99D (BunkazaiDontDestroy_tC05FFC7F882799CB154A6AEF67B611CFA8AEE507* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ForeverDont::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForeverDont_Start_mF52E31EB98E1218AAB37EBE5EFEB1F81991168B4 (ForeverDont_t4E3AB6437703D484478668562637A5719AEB1381* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ForeverDont::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForeverDont_Update_mDED85AD81F8288A15CB54345341DE3101CAA242A (ForeverDont_t4E3AB6437703D484478668562637A5719AEB1381* __this, const RuntimeMethod* method) 
{
	{
		// if (ForeverBGM.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___ForeverBGM_4;
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// playing = true;
		__this->___playing_5 = (bool)1;
	}

IL_0014:
	{
		// if (!ForeverBGM.isPlaying && playing)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___ForeverBGM_4;
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		bool L_4 = __this->___playing_5;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// ForeverBGM.time = 79.23f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___ForeverBGM_4;
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_5, (79.2300034f), NULL);
		// ForeverBGM.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___ForeverBGM_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void ForeverDont::Forever()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForeverDont_Forever_mE49EA095C94D5D77D231F318A007F321D84B5699 (ForeverDont_t4E3AB6437703D484478668562637A5719AEB1381* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ForeverBGM.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___ForeverBGM_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// }
		return;
	}
}
// System.Void ForeverDont::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForeverDont__ctor_m225ECE448D7422B8A247F1BFC83D09A55E5E5726 (ForeverDont_t4E3AB6437703D484478668562637A5719AEB1381* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LonelyDontDestroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LonelyDontDestroy_Start_mBA790EC9D8E0F540EE6B57DBF1D5FEE09FEA5849 (LonelyDontDestroy_t49C1C64058151804BD2E589367F14B686165A66A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LonelyDontDestroy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LonelyDontDestroy_Update_m70D3ECF4D946E47A2C546DBA4685498524C16640 (LonelyDontDestroy_t49C1C64058151804BD2E589367F14B686165A66A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB37B7A484ECC82B71012534656294AB04A1BE628);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// BGM.transform.name = "LoopBGM";
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___BGM_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, _stringLiteral32409C8A8FA5216A840EE770C65ED5819F3CD0CE, NULL);
		// if (BGM.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___BGM_4;
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// GameObject bgmEmpty_1 = GameObject.Find("Lonely_Dream");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralB37B7A484ECC82B71012534656294AB04A1BE628, NULL);
		// Destroy(bgmEmpty_1);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void LonelyDontDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LonelyDontDestroy__ctor_m6294584861AA3837584B15C5CF0D7E0443F5D8F3 (LonelyDontDestroy_t49C1C64058151804BD2E589367F14B686165A66A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundOption::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundOption_Start_m08E7231FB2EC393D246A7068C9EE840E2C67EE70 (SoundOption_tBB7CE8E47CF3CBCD485DF4FC193F72CBF80754BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA83DB5A980FBE2B5ED8E19D69F81E0DD3C2BF85);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioMixer.GetFloat("Master", out volume);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0 = __this->____audioMixer_4;
		float* L_1 = (&__this->___volume_6);
		bool L_2;
		L_2 = AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9(L_0, _stringLiteralBA83DB5A980FBE2B5ED8E19D69F81E0DD3C2BF85, L_1, NULL);
		// slider.value = volume;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___slider_5;
		float L_4 = __this->___volume_6;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void SoundOption::SetBGM(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundOption_SetBGM_mEF196E7306B827246764E7FCB5CA56EAA576609E (SoundOption_tBB7CE8E47CF3CBCD485DF4FC193F72CBF80754BD* __this, float ___volume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA83DB5A980FBE2B5ED8E19D69F81E0DD3C2BF85);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioMixer.SetFloat("Master", volume);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0 = __this->____audioMixer_4;
		float L_1 = ___volume0;
		bool L_2;
		L_2 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_0, _stringLiteralBA83DB5A980FBE2B5ED8E19D69F81E0DD3C2BF85, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundOption::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundOption__ctor_m53F40CAD95B8E1ACDF11D4E09FA4E43AF1BCA9E7 (SoundOption_tBB7CE8E47CF3CBCD485DF4FC193F72CBF80754BD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EndingAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndingAnim_Start_m03956768F1269705BB0CE12FEAC4C09E5960F650 (EndingAnim_t716A4CB5C06118BD0AA9ADA04376AF6184926649* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C925CD53E8A38948E52F9363B7FEDBDEF63B4BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEFCBFCAA035B5142AA873EBFDA623978C99850C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (StoryManager.drink <= 10)
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)10))))
		{
			goto IL_0014;
		}
	}
	{
		// Fungus.Flowchart.BroadcastFungusMessage("GoodEnd");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteral1C925CD53E8A38948E52F9363B7FEDBDEF63B4BF, NULL);
		return;
	}

IL_0014:
	{
		// Fungus.Flowchart.BroadcastFungusMessage("NormalEnd");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteralAEFCBFCAA035B5142AA873EBFDA623978C99850C, NULL);
		// }
		return;
	}
}
// System.Void EndingAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndingAnim_Update_m78AC0F30A0C496E7D955765045F65D3BE41AB6E9 (EndingAnim_t716A4CB5C06118BD0AA9ADA04376AF6184926649* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09DA551022AE508A5C260B7D63E34DFE4DC34858);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = StoryManager.drink.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// if (fade)
		bool L_2 = __this->___fade_5;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// GameObject.Find("Forever And Ever").GetComponent<AudioSource>().volume -= Time.deltaTime;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral09DA551022AE508A5C260B7D63E34DFE4DC34858, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_3, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4;
		float L_6;
		L_6 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_5, NULL);
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_5, ((float)il2cpp_codegen_subtract(L_6, L_7)), NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void EndingAnim::AudioFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndingAnim_AudioFade_mE36E6BE61A38E4D8AD184315FF6B211839437D5E (EndingAnim_t716A4CB5C06118BD0AA9ADA04376AF6184926649* __this, const RuntimeMethod* method) 
{
	{
		// fade = true;
		__this->___fade_5 = (bool)1;
		// }
		return;
	}
}
// System.Void EndingAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndingAnim__ctor_mA2B31B33E586CD8FDC63D7C60783AB4C5550C187 (EndingAnim_t716A4CB5C06118BD0AA9ADA04376AF6184926649* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtraAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraAnim_Start_m8A31C73B1303489A10C2B47E70E583CE3A92CFDA (ExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExtraAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraAnim_Update_m88FB3BC5368967A50BA172C42780F4C9538A51DB (ExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E5DED8640E24BD1CFFB1EC4C55B09CCA060BD87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elapsed += Time.deltaTime;
		float L_0 = __this->___elapsed_4;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsed_4 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (elapsed >= 2.0f)
		float L_2 = __this->___elapsed_4;
		if ((!(((float)L_2) >= ((float)(2.0f)))))
		{
			goto IL_009c;
		}
	}
	{
		// if (wh)
		bool L_3 = __this->___wh_10;
		if (!L_3)
		{
			goto IL_0069;
		}
	}
	{
		// alfa += Time.deltaTime * 2;
		float L_4 = __this->___alfa_5;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_5 = ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_5, (2.0f)))));
		// white.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, alfa);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___white_6;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7;
		L_7 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_6, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		float L_8 = __this->___alfa_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (1.0f), (1.0f), (1.0f), L_8, /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_7, L_9, NULL);
	}

IL_0069:
	{
		// drink.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___drink_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)0, NULL);
		// if (!on.isPlaying && bgm)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___on_8;
		bool L_12;
		L_12 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_11, NULL);
		if (L_12)
		{
			goto IL_009c;
		}
	}
	{
		bool L_13 = __this->___bgm_9;
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		// bgm = false;
		__this->___bgm_9 = (bool)0;
		// on.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___on_8;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
	}

IL_009c:
	{
		// if (elapsed >= 5.0f)
		float L_15 = __this->___elapsed_4;
		if ((!(((float)L_15) >= ((float)(5.0f)))))
		{
			goto IL_00b3;
		}
	}
	{
		// Fungus.Flowchart.BroadcastFungusMessage("DialogOn2");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteral9E5DED8640E24BD1CFFB1EC4C55B09CCA060BD87, NULL);
	}

IL_00b3:
	{
		// if (elapsed >= 7.0f)
		float L_16 = __this->___elapsed_4;
		if ((!(((float)L_16) >= ((float)(7.0f)))))
		{
			goto IL_00c7;
		}
	}
	{
		// wh = false;
		__this->___wh_10 = (bool)0;
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void ExtraAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraAnim__ctor_m76C35E63FB1D981FAD949B98D6A3CB5EF1AF1264 (ExtraAnim_tCD85E2F2A72ACCAC1D5EDFCD9CFBE5B433D50F34* __this, const RuntimeMethod* method) 
{
	{
		// private bool bgm = true;
		__this->___bgm_9 = (bool)1;
		// private bool wh = true;
		__this->___wh_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FactoryReset::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryReset_Start_m914F9F2C933FB492A4BAE9C736B382C2E1ED4A13 (FactoryReset_t088CCB3214CA63ECCC1B82F2CFC13F0833CF0C7F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FactoryReset::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryReset_Update_mB3F51AA0792B186A1F80140D59F44B556A100193 (FactoryReset_t088CCB3214CA63ECCC1B82F2CFC13F0833CF0C7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StoryManager.drink = 0;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = 0;
		// }
		return;
	}
}
// System.Void FactoryReset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryReset__ctor_mA295DBF9B496A9758EDA40A2962F11B98757DA4F (FactoryReset_t088CCB3214CA63ECCC1B82F2CFC13F0833CF0C7F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TMPro.TMP_Text NarrationBehaviour::get_mTextUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* NarrationBehaviour_get_mTextUI_mC03B6F80E09BA670F97DA7F156F0656469A6CB43 (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* __this, const RuntimeMethod* method) 
{
	{
		// public TMP_Text mTextUI { get; set; }
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___U3CmTextUIU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void NarrationBehaviour::set_mTextUI(TMPro.TMP_Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrationBehaviour_set_mTextUI_m41320953CF6A5BF0DBC04EACA2C5F42F06D964FF (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___value0, const RuntimeMethod* method) 
{
	{
		// public TMP_Text mTextUI { get; set; }
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = ___value0;
		__this->___U3CmTextUIU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmTextUIU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void NarrationBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrationBehaviour_OnBehaviourPlay_mE4E012CD8C99B5B3B1CC896F856C78A5DFFF6D85 (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mTextUI != null)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = NarrationBehaviour_get_mTextUI_mC03B6F80E09BA670F97DA7F156F0656469A6CB43_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// mTextUI.ForceMeshUpdate();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2;
		L_2 = NarrationBehaviour_get_mTextUI_mC03B6F80E09BA670F97DA7F156F0656469A6CB43_inline(__this, NULL);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_2, (bool)0, (bool)0);
		// mParsedText = mTextUI.GetParsedText();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3;
		L_3 = NarrationBehaviour_get_mTextUI_mC03B6F80E09BA670F97DA7F156F0656469A6CB43_inline(__this, NULL);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(131 /* System.String TMPro.TMP_Text::GetParsedText() */, L_3);
		__this->___mParsedText_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mParsedText_1), (void*)L_4);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void NarrationBehaviour::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrationBehaviour_PrepareFrame_m28882A587BAA625E6A20E44D294A670D9DDCA167 (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// if (mTextUI != null)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = NarrationBehaviour_get_mTextUI_mC03B6F80E09BA670F97DA7F156F0656469A6CB43_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// var progress = (float)(playable.GetTime() / playable.GetDuration());
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = ___playable0;
		double L_3;
		L_3 = PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7(L_2, PlayableExtensions_GetTime_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m03F88077134A2EAD85051A2C5562442FDF8FE5A7_RuntimeMethod_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_4 = ___playable0;
		double L_5;
		L_5 = PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B(L_4, PlayableExtensions_GetDuration_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mFBA69AC259277795E0FF04957D43810479AD8F5B_RuntimeMethod_var);
		V_0 = ((float)((double)(L_3/L_5)));
		// var current = Mathf.Lerp(0, mParsedText.Length, progress);
		String_t* L_6 = __this->___mParsedText_1;
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), ((float)L_7), L_8, NULL);
		// var count = Mathf.CeilToInt(current);
		int32_t L_10;
		L_10 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(L_9, NULL);
		V_1 = L_10;
		// mTextUI.maxVisibleCharacters = count;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11;
		L_11 = NarrationBehaviour_get_mTextUI_mC03B6F80E09BA670F97DA7F156F0656469A6CB43_inline(__this, NULL);
		int32_t L_12 = V_1;
		TMP_Text_set_maxVisibleCharacters_mEDD8DCB11D204F3FC10BFAC49BF6E8E09548358A(L_11, L_12, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void NarrationBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrationBehaviour__ctor_m4D54CA8411FEBA23A61282095087111A99CEA505 (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mParsedText = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___mParsedText_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mParsedText_1), (void*)L_0);
		PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.Playable NarrationPlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F NarrationPlayableAsset_CreatePlayable_m491B220EF40682D0DBC690169557F5BB143507D7 (NarrationPlayableAsset_t306C1A782B39A252D9292985B31DDD20ABB8A78C* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedReference_1_Resolve_mACB8FF709590BA7B11393BF2BCFE673084259D3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_Create_m02AF32FC43AC53D3C5CCA45EA08B26CE4DE32C5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_GetBehaviour_m7852F280169A01ABB2616F29C252E51041BAFB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Implicit_mF0D4FCCFF204C69A8A7E8F3CF301030ADAA9007D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var playable = ScriptPlayable<NarrationBehaviour>.Create(graph, narration);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* L_1 = __this->___narration_5;
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2_il2cpp_TypeInfo_var);
		ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2 L_2;
		L_2 = ScriptPlayable_1_Create_m02AF32FC43AC53D3C5CCA45EA08B26CE4DE32C5D(L_0, L_1, 0, ScriptPlayable_1_Create_m02AF32FC43AC53D3C5CCA45EA08B26CE4DE32C5D_RuntimeMethod_var);
		V_0 = L_2;
		// var behaviour = playable.GetBehaviour();
		NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* L_3;
		L_3 = ScriptPlayable_1_GetBehaviour_m7852F280169A01ABB2616F29C252E51041BAFB65((&V_0), ScriptPlayable_1_GetBehaviour_m7852F280169A01ABB2616F29C252E51041BAFB65_RuntimeMethod_var);
		// behaviour.mTextUI = text.Resolve(graph.GetResolver());
		ExposedReference_1_t4A7CCE48B335478E78C72DA7F792491FB788BE8A* L_4 = (&__this->___text_4);
		RuntimeObject* L_5;
		L_5 = PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47((&___graph0), NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6;
		L_6 = ExposedReference_1_Resolve_mACB8FF709590BA7B11393BF2BCFE673084259D3B(L_4, L_5, ExposedReference_1_Resolve_mACB8FF709590BA7B11393BF2BCFE673084259D3B_RuntimeMethod_var);
		NarrationBehaviour_set_mTextUI_m41320953CF6A5BF0DBC04EACA2C5F42F06D964FF_inline(L_3, L_6, NULL);
		// return playable;
		ScriptPlayable_1_tC4B79DF035EA6C332DA2CCEC94F86E9EA696DAA2 L_7 = V_0;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_8;
		L_8 = ScriptPlayable_1_op_Implicit_mF0D4FCCFF204C69A8A7E8F3CF301030ADAA9007D(L_7, ScriptPlayable_1_op_Implicit_mF0D4FCCFF204C69A8A7E8F3CF301030ADAA9007D_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void NarrationPlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrationPlayableAsset__ctor_m1827B126584A572B1FEB6B6A34C8C41D503647E2 (NarrationPlayableAsset_t306C1A782B39A252D9292985B31DDD20ABB8A78C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly NarrationBehaviour narration = new NarrationBehaviour();
		NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* L_0 = (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03*)il2cpp_codegen_object_new(NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03_il2cpp_TypeInfo_var);
		NarrationBehaviour__ctor_m4D54CA8411FEBA23A61282095087111A99CEA505(L_0, NULL);
		__this->___narration_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___narration_5), (void*)L_0);
		PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Stage1Anim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage1Anim_Start_mDEF8AF603D9D2B8223E8060B9B88A780FEAC6A10 (Stage1Anim_t6E5CDBB177EFD025F7DCD513FA6B8C7A77150A6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral041B6BA07DD147B97E55DD133A3FCBD97A972A45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F70541EF4CFB19FFFB0BFF8B082633FBE985D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (StoryManager.drink <= 6)
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		if ((((int32_t)L_0) > ((int32_t)6)))
		{
			goto IL_0013;
		}
	}
	{
		// Fungus.Flowchart.BroadcastFungusMessage("GoodOn");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteral15F70541EF4CFB19FFFB0BFF8B082633FBE985D8, NULL);
		return;
	}

IL_0013:
	{
		// Fungus.Flowchart.BroadcastFungusMessage("NormalOn");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteral041B6BA07DD147B97E55DD133A3FCBD97A972A45, NULL);
		// }
		return;
	}
}
// System.Void Stage1Anim::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage1Anim_FixedUpdate_m6FDCCABF8F16B5E2C9072FFE50169CA4A0DA6855 (Stage1Anim_t6E5CDBB177EFD025F7DCD513FA6B8C7A77150A6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elapsedTime += Time.deltaTime;
		float L_0 = __this->___elapsedTime_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsedTime_5 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (elapsedTime >= 3.0f)
		float L_2 = __this->___elapsedTime_5;
		if ((!(((float)L_2) >= ((float)(3.0f)))))
		{
			goto IL_00e4;
		}
	}
	{
		// boy.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___boy_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_3, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// girl.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___girl_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_5, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// boy.transform.Translate(Vector2.right * speed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___boy_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_10 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_11, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_8, L_12, NULL);
		// girl.transform.Translate(Vector2.right * speed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___girl_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_16 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_17, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_14, L_18, NULL);
		// if (alfa <= 0.1f)
		float L_19 = __this->___alfa_11;
		if ((!(((float)L_19) <= ((float)(0.100000001f)))))
		{
			goto IL_00e4;
		}
	}
	{
		// alfa += Time.deltaTime / 1.5f;
		float L_20 = __this->___alfa_11;
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_11 = ((float)il2cpp_codegen_add(L_20, ((float)(L_21/(1.5f)))));
		// begin.color = new Color(alfa, alfa, alfa, 1f);
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_22 = __this->___begin_10;
		float L_23 = __this->___alfa_11;
		float L_24 = __this->___alfa_11;
		float L_25 = __this->___alfa_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_26), L_23, L_24, L_25, (1.0f), /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_22, L_26, NULL);
	}

IL_00e4:
	{
		// if (girl.transform.position.x >= -6.5)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___girl_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = L_29.___x_2;
		if ((!(((double)((double)L_30)) >= ((double)(-6.5)))))
		{
			goto IL_012a;
		}
	}
	{
		// camera.transform.Translate(Vector2.right * speed);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = __this->___camera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_34 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_33, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_35, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_32, L_36, NULL);
	}

IL_012a:
	{
		// if (audioOn)
		bool L_37 = __this->___audioOn_13;
		if (!L_37)
		{
			goto IL_0149;
		}
	}
	{
		// bgm.volume -= Time.deltaTime;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_38 = __this->___bgm_12;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_39 = L_38;
		float L_40;
		L_40 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_39, NULL);
		float L_41;
		L_41 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_39, ((float)il2cpp_codegen_subtract(L_40, L_41)), NULL);
	}

IL_0149:
	{
		// }
		return;
	}
}
// System.Void Stage1Anim::Audio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage1Anim_Audio_m63A9C0011E5CBC5E66CB778F91512E05A5203058 (Stage1Anim_t6E5CDBB177EFD025F7DCD513FA6B8C7A77150A6A* __this, const RuntimeMethod* method) 
{
	{
		// audioOn = true;
		__this->___audioOn_13 = (bool)1;
		// }
		return;
	}
}
// System.Void Stage1Anim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage1Anim__ctor_m0418054212EF558A56C706EC223B526F4BD79BC5 (Stage1Anim_t6E5CDBB177EFD025F7DCD513FA6B8C7A77150A6A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Stage2Anim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage2Anim_Start_m66BFC53D5B69949D0D7B63AD35582C281896CBBA (Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1405C6F91C203137CD0097006AC7562D2963E4AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7D4A6C812081088DFB2E64BF9DFF5806227CED4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (StoryManager.drink <= 8)
		int32_t L_0 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		if ((((int32_t)L_0) > ((int32_t)8)))
		{
			goto IL_0019;
		}
	}
	{
		// Fungus.Flowchart.BroadcastFungusMessage("GoodOn1");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteral1405C6F91C203137CD0097006AC7562D2963E4AF, NULL);
		// good = true;
		((Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_StaticFields*)il2cpp_codegen_static_fields_for(Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_il2cpp_TypeInfo_var))->___good_16 = (bool)1;
		return;
	}

IL_0019:
	{
		// Fungus.Flowchart.BroadcastFungusMessage("NormalOn1");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteralB7D4A6C812081088DFB2E64BF9DFF5806227CED4, NULL);
		// }
		return;
	}
}
// System.Void Stage2Anim::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage2Anim_FixedUpdate_m28FC9C45E59CC5292644D2573C831D74D98F2B3A (Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// elapsedTime += Time.deltaTime;
		float L_0 = __this->___elapsedTime_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsedTime_5 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (elapsedTime >= 1.0f)
		float L_2 = __this->___elapsedTime_5;
		if ((!(((float)L_2) >= ((float)(1.0f)))))
		{
			goto IL_013c;
		}
	}
	{
		// boy.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___boy_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_3, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// girl.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___girl_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_5, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// boy.transform.Translate(Vector2.right * speed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___boy_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_10 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_11, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_8, L_12, NULL);
		// girl.transform.Translate(Vector2.right * speed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___girl_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_16 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_17, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_14, L_18, NULL);
		// if (alfa <= 0.1f)
		float L_19 = __this->___alfa_6;
		if ((!(((float)L_19) <= ((float)(0.100000001f)))))
		{
			goto IL_00e4;
		}
	}
	{
		// alfa += Time.deltaTime / 1.5f;
		float L_20 = __this->___alfa_6;
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_6 = ((float)il2cpp_codegen_add(L_20, ((float)(L_21/(1.5f)))));
		// begin.color = new Color(alfa, alfa, alfa, 1f);
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_22 = __this->___begin_12;
		float L_23 = __this->___alfa_6;
		float L_24 = __this->___alfa_6;
		float L_25 = __this->___alfa_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_26), L_23, L_24, L_25, (1.0f), /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_22, L_26, NULL);
	}

IL_00e4:
	{
		// if (alfa1 <= 1.0f)
		float L_27 = __this->___alfa1_7;
		if ((!(((float)L_27) <= ((float)(1.0f)))))
		{
			goto IL_013c;
		}
	}
	{
		// for (int i = 0; i <= 2; i++)
		V_0 = 0;
		goto IL_0138;
	}

IL_00f5:
	{
		// alfa1 += Time.deltaTime / 1.5f;
		float L_28 = __this->___alfa1_7;
		float L_29;
		L_29 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa1_7 = ((float)il2cpp_codegen_add(L_28, ((float)(L_29/(1.5f)))));
		// light2d[i].color = new Color(1f, 1f, 1f, alfa1);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_30 = __this->___light2d_13;
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		float L_34 = __this->___alfa1_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		memset((&L_35), 0, sizeof(L_35));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_35), (1.0f), (1.0f), (1.0f), L_34, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_33, L_35, NULL);
		// for (int i = 0; i <= 2; i++)
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0138:
	{
		// for (int i = 0; i <= 2; i++)
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) <= ((int32_t)2)))
		{
			goto IL_00f5;
		}
	}

IL_013c:
	{
		// if (girl.transform.position.x >= -6.5)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___girl_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		float L_41 = L_40.___x_2;
		if ((!(((double)((double)L_41)) >= ((double)(-6.5)))))
		{
			goto IL_0182;
		}
	}
	{
		// camera.transform.Translate(Vector2.right * speed);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42 = __this->___camera_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_45 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_44, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_46, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_43, L_47, NULL);
	}

IL_0182:
	{
		// if (audioOn)
		bool L_48 = __this->___audioOn_15;
		if (!L_48)
		{
			goto IL_01a1;
		}
	}
	{
		// bgm.volume -= Time.deltaTime;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_49 = __this->___bgm_14;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_50 = L_49;
		float L_51;
		L_51 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_50, NULL);
		float L_52;
		L_52 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_50, ((float)il2cpp_codegen_subtract(L_51, L_52)), NULL);
	}

IL_01a1:
	{
		// }
		return;
	}
}
// System.Void Stage2Anim::Audio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage2Anim_Audio_m3CF5BAAD5FDA2881F80D30FB733F6E2A61DB3BA5 (Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F* __this, const RuntimeMethod* method) 
{
	{
		// audioOn = true;
		__this->___audioOn_15 = (bool)1;
		// }
		return;
	}
}
// System.Void Stage2Anim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage2Anim__ctor_mB24316BA864A96C0E248582F65292EF2690B7171 (Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Stage3Anim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage3Anim_Start_m065778722E50A69417D8A2B5D22850405E3443B9 (Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// speed1 = speed;
		float L_0 = __this->___speed_4;
		__this->___speed1_5 = L_0;
		// speedKeep = speed;
		float L_1 = __this->___speed_4;
		__this->___speedKeep_6 = L_1;
		// Stage2Anim.good = false;
		((Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_StaticFields*)il2cpp_codegen_static_fields_for(Stage2Anim_t331DF5F646E668A45C1DAD40A88BAC0D4893D27F_il2cpp_TypeInfo_var))->___good_16 = (bool)0;
		// }
		return;
	}
}
// System.Void Stage3Anim::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage3Anim_FixedUpdate_mD42ECCD98812CB1B7BA4B76FCECCAABDF30A5AFF (Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11D7FAAE063D6E3E942FF39AAFDEEC6A9A861150);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C098A97DD96B6CA2DA09665909BE5FEE4AEF826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96645236735E5DC831F4A9D09F51E3B1297595A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// elapsedTime += Time.deltaTime;
		float L_0 = __this->___elapsedTime_7;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsedTime_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (elapsedTime >= 1.0f)
		float L_2 = __this->___elapsedTime_7;
		if ((!(((float)L_2) >= ((float)(1.0f)))))
		{
			goto IL_014c;
		}
	}
	{
		// if (!stop)
		bool L_3 = __this->___stop_11;
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		// boy.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___boy_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
	}

IL_0040:
	{
		// if (!stop1)
		bool L_6 = __this->___stop1_12;
		if (L_6)
		{
			goto IL_005e;
		}
	}
	{
		// girl.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___girl_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_7, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
	}

IL_005e:
	{
		// boy.transform.Translate(Vector2.right * speed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___boy_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_12 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_13, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_10, L_14, NULL);
		// girl.transform.Translate(Vector2.right * speed1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___girl_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_18 = __this->___speed1_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_19, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_16, L_20, NULL);
		// if (alfa1 <= 0.1f)
		float L_21 = __this->___alfa1_23;
		if ((!(((float)L_21) <= ((float)(0.100000001f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// alfa1 += Time.deltaTime / 1.5f;
		float L_22 = __this->___alfa1_23;
		float L_23;
		L_23 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa1_23 = ((float)il2cpp_codegen_add(L_22, ((float)(L_23/(1.5f)))));
		// begin.color = new Color(alfa1, alfa1, alfa1, 1f);
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_24 = __this->___begin_21;
		float L_25 = __this->___alfa1_23;
		float L_26 = __this->___alfa1_23;
		float L_27 = __this->___alfa1_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_28), L_25, L_26, L_27, (1.0f), /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_24, L_28, NULL);
	}

IL_00f4:
	{
		// if (alfa2 <= 1.0f)
		float L_29 = __this->___alfa2_24;
		if ((!(((float)L_29) <= ((float)(1.0f)))))
		{
			goto IL_014c;
		}
	}
	{
		// for (int i = 0; i <= 2; i++)
		V_0 = 0;
		goto IL_0148;
	}

IL_0105:
	{
		// alfa2 += Time.deltaTime / 1.5f;
		float L_30 = __this->___alfa2_24;
		float L_31;
		L_31 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa2_24 = ((float)il2cpp_codegen_add(L_30, ((float)(L_31/(1.5f)))));
		// light2d[i].color = new Color(1f, 1f, 1f, alfa2);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_32 = __this->___light2d_22;
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		float L_36 = __this->___alfa2_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		memset((&L_37), 0, sizeof(L_37));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_37), (1.0f), (1.0f), (1.0f), L_36, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_35, L_37, NULL);
		// for (int i = 0; i <= 2; i++)
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0148:
	{
		// for (int i = 0; i <= 2; i++)
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) <= ((int32_t)2)))
		{
			goto IL_0105;
		}
	}

IL_014c:
	{
		// if ((boy.transform.position.x >= 0.5f || elapsedTime >= 5.0f) && !walk)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___boy_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		float L_43 = L_42.___x_2;
		if ((((float)L_43) >= ((float)(0.5f))))
		{
			goto IL_0175;
		}
	}
	{
		float L_44 = __this->___elapsedTime_7;
		if ((!(((float)L_44) >= ((float)(5.0f)))))
		{
			goto IL_01a5;
		}
	}

IL_0175:
	{
		bool L_45 = __this->___walk_20;
		if (L_45)
		{
			goto IL_01a5;
		}
	}
	{
		// stop = true;
		__this->___stop_11 = (bool)1;
		// speed = 0f;
		__this->___speed_4 = (0.0f);
		// boy.GetComponent<Animator>().SetBool("right", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___boy_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_47;
		L_47 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_46, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_47, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
	}

IL_01a5:
	{
		// if ((girl.transform.position.x >= -1.5f || elapsedTime >= 5.5f) && !stop2)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___girl_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		float L_51 = L_50.___x_2;
		if ((((float)L_51) >= ((float)(-1.5f))))
		{
			goto IL_01ce;
		}
	}
	{
		float L_52 = __this->___elapsedTime_7;
		if ((!(((float)L_52) >= ((float)(5.5f)))))
		{
			goto IL_01fe;
		}
	}

IL_01ce:
	{
		bool L_53 = __this->___stop2_13;
		if (L_53)
		{
			goto IL_01fe;
		}
	}
	{
		// stop1 = true;
		__this->___stop1_12 = (bool)1;
		// speed1 = 0f;
		__this->___speed1_5 = (0.0f);
		// girl.GetComponent<Animator>().SetBool("right", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___girl_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_55;
		L_55 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_54, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_55, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
	}

IL_01fe:
	{
		// if (elapsedTime >= 8.5f && !walk)
		float L_56 = __this->___elapsedTime_7;
		if ((!(((float)L_56) >= ((float)(8.5f)))))
		{
			goto IL_0235;
		}
	}
	{
		bool L_57 = __this->___walk_20;
		if (L_57)
		{
			goto IL_0235;
		}
	}
	{
		// boy.GetComponent<SpriteRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___boy_8;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59;
		L_59 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_58, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_59, (bool)0, NULL);
		// shadow.GetComponent<SpriteRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___shadow_10;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61;
		L_61 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_60, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_61, (bool)1, NULL);
	}

IL_0235:
	{
		// if (elapsedTime >= 9.5f && !stop3)
		float L_62 = __this->___elapsedTime_7;
		if ((!(((float)L_62) >= ((float)(9.5f)))))
		{
			goto IL_0279;
		}
	}
	{
		bool L_63 = __this->___stop3_14;
		if (L_63)
		{
			goto IL_0279;
		}
	}
	{
		// stop2 = true;
		__this->___stop2_13 = (bool)1;
		// speed1 = speedKeep * 1.5f;
		float L_64 = __this->___speedKeep_6;
		__this->___speed1_5 = ((float)il2cpp_codegen_multiply(L_64, (1.5f)));
		// girl.GetComponent<Animator>().SetBool("running", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = __this->___girl_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_66;
		L_66 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_65, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_66, _stringLiteral11D7FAAE063D6E3E942FF39AAFDEEC6A9A861150, (bool)1, NULL);
	}

IL_0279:
	{
		// if (girl.transform.position.x >= 1.5f && !walk)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___girl_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		float L_70 = L_69.___x_2;
		if ((!(((float)L_70) >= ((float)(1.5f)))))
		{
			goto IL_02c5;
		}
	}
	{
		bool L_71 = __this->___walk_20;
		if (L_71)
		{
			goto IL_02c5;
		}
	}
	{
		// stop3 = true;
		__this->___stop3_14 = (bool)1;
		// girl.GetComponent<Animator>().SetBool("idleL", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___girl_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_73;
		L_73 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_72, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_73, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)1, NULL);
		// speed1 = 0f;
		__this->___speed1_5 = (0.0f);
	}

IL_02c5:
	{
		// if (elapsedTime >= 11.0f)
		float L_74 = __this->___elapsedTime_7;
		if ((!(((float)L_74) >= ((float)(11.0f)))))
		{
			goto IL_02f7;
		}
	}
	{
		// if (StoryManager.drink <= 10)
		int32_t L_75 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		if ((((int32_t)L_75) > ((int32_t)((int32_t)10))))
		{
			goto IL_02ed;
		}
	}
	{
		// Fungus.Flowchart.BroadcastFungusMessage("GoodOn2");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteral96645236735E5DC831F4A9D09F51E3B1297595A8, NULL);
		// good = true;
		((Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_StaticFields*)il2cpp_codegen_static_fields_for(Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_il2cpp_TypeInfo_var))->___good_25 = (bool)1;
		goto IL_02f7;
	}

IL_02ed:
	{
		// Fungus.Flowchart.BroadcastFungusMessage("NormalOn2");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteral8C098A97DD96B6CA2DA09665909BE5FEE4AEF826, NULL);
	}

IL_02f7:
	{
		// if (alartOn)
		bool L_76 = __this->___alartOn_19;
		if (!L_76)
		{
			goto IL_03e3;
		}
	}
	{
		// pointbrinklight[0].color = new Color(1.0f, 0f, 0f, alfa * 1.5f);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_77 = __this->___pointbrinklight_15;
		int32_t L_78 = 0;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_79 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		float L_80 = __this->___alfa_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_81;
		memset((&L_81), 0, sizeof(L_81));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_81), (1.0f), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_80, (1.5f))), /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_79, L_81, NULL);
		// pointbrinklight[1].color = new Color(1.0f, 0f, 0f, alfa * 1.5f);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_82 = __this->___pointbrinklight_15;
		int32_t L_83 = 1;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_84 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		float L_85 = __this->___alfa_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_86;
		memset((&L_86), 0, sizeof(L_86));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_86), (1.0f), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_85, (1.5f))), /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_84, L_86, NULL);
		// alarm.color = new Color(1.0f, 0f, 0f, alfa * 1.5f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_87 = __this->___alarm_16;
		float L_88 = __this->___alfa_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89;
		memset((&L_89), 0, sizeof(L_89));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_89), (1.0f), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_88, (1.5f))), /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_87, L_89);
		// if (alfa <= 0f)
		float L_90 = __this->___alfa_17;
		if ((!(((float)L_90) <= ((float)(0.0f)))))
		{
			goto IL_039b;
		}
	}
	{
		// alfaPlus = true;
		__this->___alfaPlus_18 = (bool)1;
	}

IL_039b:
	{
		// if (alfa >= 1.0f)
		float L_91 = __this->___alfa_17;
		if ((!(((float)L_91) >= ((float)(1.0f)))))
		{
			goto IL_03af;
		}
	}
	{
		// alfaPlus = false;
		__this->___alfaPlus_18 = (bool)0;
	}

IL_03af:
	{
		// if (alfaPlus)
		bool L_92 = __this->___alfaPlus_18;
		if (!L_92)
		{
			goto IL_03c9;
		}
	}
	{
		// alfa += Time.deltaTime;
		float L_93 = __this->___alfa_17;
		float L_94;
		L_94 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_17 = ((float)il2cpp_codegen_add(L_93, L_94));
	}

IL_03c9:
	{
		// if (!alfaPlus)
		bool L_95 = __this->___alfaPlus_18;
		if (L_95)
		{
			goto IL_03e3;
		}
	}
	{
		// alfa -= Time.deltaTime;
		float L_96 = __this->___alfa_17;
		float L_97;
		L_97 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_17 = ((float)il2cpp_codegen_subtract(L_96, L_97));
	}

IL_03e3:
	{
		// if (walk)
		bool L_98 = __this->___walk_20;
		if (!L_98)
		{
			goto IL_045d;
		}
	}
	{
		// shadow.GetComponent<SpriteRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = __this->___shadow_10;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100;
		L_100 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_99, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_100, (bool)0, NULL);
		// boy.GetComponent<SpriteRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = __this->___boy_8;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102;
		L_102 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_101, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_102, (bool)1, NULL);
		// boy.GetComponent<Animator>().SetBool("down", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103 = __this->___boy_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_104;
		L_104 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_103, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_104, _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, (bool)1, NULL);
		// girl.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_105 = __this->___girl_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_106;
		L_106 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_105, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_106, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// speed = speedKeep / 2.0f;
		float L_107 = __this->___speedKeep_6;
		__this->___speed_4 = ((float)(L_107/(2.0f)));
		// speed1 = speedKeep / 2.0f;
		float L_108 = __this->___speedKeep_6;
		__this->___speed1_5 = ((float)(L_108/(2.0f)));
	}

IL_045d:
	{
		// }
		return;
	}
}
// System.Void Stage3Anim::Alarm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage3Anim_Alarm_m963DE00E73E796803B60805AC226A9498E887F9E (Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3* __this, const RuntimeMethod* method) 
{
	{
		// alartOn = true;
		__this->___alartOn_19 = (bool)1;
		// warning.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___warning_26;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void Stage3Anim::Walk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage3Anim_Walk_m9E5599D82009A913A5FB367FF385014D557B61C6 (Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3* __this, const RuntimeMethod* method) 
{
	{
		// walk = true;
		__this->___walk_20 = (bool)1;
		// }
		return;
	}
}
// System.Void Stage3Anim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage3Anim__ctor_m228D5DE466764ACB498B40ADB6F847F4AE67C74F (Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3* __this, const RuntimeMethod* method) 
{
	{
		// private bool alfaPlus = true;
		__this->___alfaPlus_18 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Stage4Anim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage4Anim_Start_m928C92D2845A20490AA65ED644901FFCE459227F (Stage4Anim_tE1639F7EFF3C9F81A7EB20CEE075213620065B6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// speed1 = speed;
		float L_0 = __this->___speed_4;
		__this->___speed1_5 = L_0;
		// speedKeep = speed;
		float L_1 = __this->___speed_4;
		__this->___speedKeep_6 = L_1;
		// Stage3Anim.good = false;
		((Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_StaticFields*)il2cpp_codegen_static_fields_for(Stage3Anim_t262962354B2391DAAE82C08D09468B3E498F16A3_il2cpp_TypeInfo_var))->___good_25 = (bool)0;
		// }
		return;
	}
}
// System.Void Stage4Anim::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage4Anim_FixedUpdate_mAE676415BB1B408B7B9CEDE9908131B73C4296A9 (Stage4Anim_tE1639F7EFF3C9F81A7EB20CEE075213620065B6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11D7FAAE063D6E3E942FF39AAFDEEC6A9A861150);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C098A97DD96B6CA2DA09665909BE5FEE4AEF826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96645236735E5DC831F4A9D09F51E3B1297595A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elapsedTime += Time.deltaTime;
		float L_0 = __this->___elapsedTime_7;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsedTime_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (elapsedTime >= 1.0f)
		float L_2 = __this->___elapsedTime_7;
		if ((!(((float)L_2) >= ((float)(1.0f)))))
		{
			goto IL_0174;
		}
	}
	{
		// if (!stop)
		bool L_3 = __this->___stop_10;
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		// boy.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___boy_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
	}

IL_0040:
	{
		// if (!stop1)
		bool L_6 = __this->___stop1_11;
		if (L_6)
		{
			goto IL_005e;
		}
	}
	{
		// girl.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___girl_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_7, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
	}

IL_005e:
	{
		// boy.transform.Translate(Vector2.right * speed / 2.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___boy_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_12 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_11, L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_13, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_14, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_10, L_15, NULL);
		// girl.transform.Translate(Vector2.right * speed1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___girl_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_19 = __this->___speed1_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_20, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_17, L_21, NULL);
		// if (alfa <= 0.32f)
		float L_22 = __this->___alfa_22;
		if ((!(((float)L_22) <= ((float)(0.319999993f)))))
		{
			goto IL_00fe;
		}
	}
	{
		// alfa += Time.deltaTime / 1.5f;
		float L_23 = __this->___alfa_22;
		float L_24;
		L_24 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_22 = ((float)il2cpp_codegen_add(L_23, ((float)(L_24/(1.5f)))));
		// whole.color = new Color(alfa, alfa, alfa, 1f);
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_25 = __this->___whole_19;
		float L_26 = __this->___alfa_22;
		float L_27 = __this->___alfa_22;
		float L_28 = __this->___alfa_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_29), L_26, L_27, L_28, (1.0f), /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_25, L_29, NULL);
	}

IL_00fe:
	{
		// if (alfa1 <= 1.0f)
		float L_30 = __this->___alfa1_23;
		if ((!(((float)L_30) <= ((float)(1.0f)))))
		{
			goto IL_0174;
		}
	}
	{
		// alfa1 += Time.deltaTime / 1.5f;
		float L_31 = __this->___alfa1_23;
		float L_32;
		L_32 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa1_23 = ((float)il2cpp_codegen_add(L_31, ((float)(L_32/(1.5f)))));
		// light2d.color = new Color(1f, 1f, 1f, alfa1);
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_33 = __this->___light2d_20;
		float L_34 = __this->___alfa1_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		memset((&L_35), 0, sizeof(L_35));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_35), (1.0f), (1.0f), (1.0f), L_34, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_33, L_35, NULL);
		// door.GetComponent<SpriteRenderer>().color = new Color(alfa1, alfa1, alfa1, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___door_21;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37;
		L_37 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_36, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		float L_38 = __this->___alfa1_23;
		float L_39 = __this->___alfa1_23;
		float L_40 = __this->___alfa1_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		memset((&L_41), 0, sizeof(L_41));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_41), L_38, L_39, L_40, (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_37, L_41, NULL);
	}

IL_0174:
	{
		// if (elapsedTime >= 2.0f && !stop2)
		float L_42 = __this->___elapsedTime_7;
		if ((!(((float)L_42) >= ((float)(2.0f)))))
		{
			goto IL_01d7;
		}
	}
	{
		bool L_43 = __this->___stop2_12;
		if (L_43)
		{
			goto IL_01d7;
		}
	}
	{
		// if (StoryManager.drink <= 10)
		int32_t L_44 = ((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)10))))
		{
			goto IL_019e;
		}
	}
	{
		// Fungus.Flowchart.BroadcastFungusMessage("GoodOn2");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteral96645236735E5DC831F4A9D09F51E3B1297595A8, NULL);
		goto IL_01a8;
	}

IL_019e:
	{
		// Fungus.Flowchart.BroadcastFungusMessage("NormalOn2");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteral8C098A97DD96B6CA2DA09665909BE5FEE4AEF826, NULL);
	}

IL_01a8:
	{
		// speed1 = speed * 1.5f;
		float L_45 = __this->___speed_4;
		__this->___speed1_5 = ((float)il2cpp_codegen_multiply(L_45, (1.5f)));
		// girl.GetComponent<Animator>().SetBool("running", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___girl_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_47;
		L_47 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_46, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_47, _stringLiteral11D7FAAE063D6E3E942FF39AAFDEEC6A9A861150, (bool)1, NULL);
		// stop1 = true;
		__this->___stop1_11 = (bool)1;
	}

IL_01d7:
	{
		// if (girl.transform.position.x >= 1.0f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___girl_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		float L_51 = L_50.___x_2;
		if ((!(((float)L_51) >= ((float)(1.0f)))))
		{
			goto IL_021b;
		}
	}
	{
		// speed1 = 0f;
		__this->___speed1_5 = (0.0f);
		// girl.GetComponent<Animator>().SetBool("right", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___girl_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_53;
		L_53 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_52, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_53, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// stop2 = true;
		__this->___stop2_12 = (bool)1;
	}

IL_021b:
	{
		// if (boy.transform.position.x >= -1.0f && !ending)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___boy_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		float L_57 = L_56.___x_2;
		if ((!(((float)L_57) >= ((float)(-1.0f)))))
		{
			goto IL_0267;
		}
	}
	{
		bool L_58 = __this->___ending_14;
		if (L_58)
		{
			goto IL_0267;
		}
	}
	{
		// stop = true;
		__this->___stop_10 = (bool)1;
		// boy.GetComponent<Animator>().SetBool("right", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___boy_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_60;
		L_60 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_59, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_60, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// speed = 0f;
		__this->___speed_4 = (0.0f);
	}

IL_0267:
	{
		// if (ending)
		bool L_61 = __this->___ending_14;
		if (!L_61)
		{
			goto IL_0281;
		}
	}
	{
		// elapsed += Time.deltaTime;
		float L_62 = __this->___elapsed_15;
		float L_63;
		L_63 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsed_15 = ((float)il2cpp_codegen_add(L_62, L_63));
	}

IL_0281:
	{
		// if (elapsed >= 1.0f && anim == 0)
		float L_64 = __this->___elapsed_15;
		if ((!(((float)L_64) >= ((float)(1.0f)))))
		{
			goto IL_02cd;
		}
	}
	{
		int32_t L_65 = __this->___anim_16;
		if (L_65)
		{
			goto IL_02cd;
		}
	}
	{
		// speed = -speedKeep / 3.0f;
		float L_66 = __this->___speedKeep_6;
		__this->___speed_4 = ((float)(((-L_66))/(3.0f)));
		// boy.GetComponent<Animator>().SetBool("left", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___boy_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_68;
		L_68 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_67, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_68, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)1, NULL);
		// anim++;
		int32_t L_69 = __this->___anim_16;
		__this->___anim_16 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_02cd:
	{
		// if (elapsed >= 3.0f && anim == 1)
		float L_70 = __this->___elapsed_15;
		if ((!(((float)L_70) >= ((float)(3.0f)))))
		{
			goto IL_0312;
		}
	}
	{
		int32_t L_71 = __this->___anim_16;
		if ((!(((uint32_t)L_71) == ((uint32_t)1))))
		{
			goto IL_0312;
		}
	}
	{
		// boy.GetComponent<Animator>().SetBool("left", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___boy_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_73;
		L_73 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_72, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_73, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// speed = 0f;
		__this->___speed_4 = (0.0f);
		// anim++;
		int32_t L_74 = __this->___anim_16;
		__this->___anim_16 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0312:
	{
		// if (elapsed >= 5.0f && anim == 2)
		float L_75 = __this->___elapsed_15;
		if ((!(((float)L_75) >= ((float)(5.0f)))))
		{
			goto IL_035f;
		}
	}
	{
		int32_t L_76 = __this->___anim_16;
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_035f;
		}
	}
	{
		// boy.GetComponent<Animator>().SetBool("left", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = __this->___boy_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_78;
		L_78 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_77, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_78, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)1, NULL);
		// speed = -speedKeep / 3.0f;
		float L_79 = __this->___speedKeep_6;
		__this->___speed_4 = ((float)(((-L_79))/(3.0f)));
		// anim++;
		int32_t L_80 = __this->___anim_16;
		__this->___anim_16 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_035f:
	{
		// if (elapsed >= 7.0f && anim == 3)
		float L_81 = __this->___elapsed_15;
		if ((!(((float)L_81) >= ((float)(7.0f)))))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_82 = __this->___anim_16;
		if ((!(((uint32_t)L_82) == ((uint32_t)3))))
		{
			goto IL_0382;
		}
	}
	{
		// speed = -speedKeep;
		float L_83 = __this->___speedKeep_6;
		__this->___speed_4 = ((-L_83));
	}

IL_0382:
	{
		// if (audioCont)
		bool L_84 = __this->___audioCont_18;
		if (!L_84)
		{
			goto IL_03a1;
		}
	}
	{
		// forever.volume -= Time.deltaTime;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_85 = __this->___forever_17;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_86 = L_85;
		float L_87;
		L_87 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_86, NULL);
		float L_88;
		L_88 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_86, ((float)il2cpp_codegen_subtract(L_87, L_88)), NULL);
	}

IL_03a1:
	{
		// }
		return;
	}
}
// System.Void Stage4Anim::LeftGirl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage4Anim_LeftGirl_m827EA8AF9AD4C3D258CD43BA9261ED9C181CB8DC (Stage4Anim_tE1639F7EFF3C9F81A7EB20CEE075213620065B6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568);
		s_Il2CppMethodInitialized = true;
	}
	{
		// girl.GetComponent<Animator>().SetBool("idleL", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___girl_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Stage4Anim::Ending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage4Anim_Ending_m3F0C5D4F77F5A78870BECB8FDF19EBD63C18C8C8 (Stage4Anim_tE1639F7EFF3C9F81A7EB20CEE075213620065B6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boy.GetComponent<Animator>().SetBool("idleL", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteralAD34AA9E1011875C55D1D4227786F98233E67568, (bool)1, NULL);
		// ending = true;
		__this->___ending_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Stage4Anim::AudioStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage4Anim_AudioStop_mD7CAB427A2992BB08930E40E2D808FAB7774D8D0 (Stage4Anim_tE1639F7EFF3C9F81A7EB20CEE075213620065B6E* __this, const RuntimeMethod* method) 
{
	{
		// audioCont = true;
		__this->___audioCont_18 = (bool)1;
		// }
		return;
	}
}
// System.Void Stage4Anim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage4Anim__ctor_mC63F253B3C442F069626CB61D64D1E62997243B5 (Stage4Anim_tE1639F7EFF3C9F81A7EB20CEE075213620065B6E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StoryManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoryManager_Start_mE22DC2B056D5A077BFD09DA070C6B12A040468A8 (StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// drink = 0;
		((StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_StaticFields*)il2cpp_codegen_static_fields_for(StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B_il2cpp_TypeInfo_var))->___drink_4 = 0;
		// }
		return;
	}
}
// System.Void StoryManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoryManager_Update_m09FDD490BEA19C254A592E207D99214ED454000C (StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// }
		return;
	}
}
// System.Void StoryManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoryManager__ctor_m47FF4B222C8C476CBBB51EB4F13582B04456E6F7 (StoryManager_tBE290589F7A9960001514FEC9F05B67FDFA8527B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tutorial1Anim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial1Anim_Start_mD09255DD7D482B8C5D32A86D1E7ECE04901E87F3 (Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Tutorial1Anim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial1Anim_Update_mC25424C633D0D6A0A986CD21F6482EDD8847AF1D (Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m7E6DD79B4F853CBB46CD7B9CDA2324E1F5297A72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99576FE1A46D4277A38DBE67FE2C9B89C57CE589);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB7132D74DB46B6EB3B1E427D14967EBE1121775);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elapsedTime += Time.deltaTime;
		float L_0 = __this->___elapsedTime_9;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsedTime_9 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (elapsedTime >= 1.0f)
		float L_2 = __this->___elapsedTime_9;
		if ((!(((float)L_2) >= ((float)(1.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		// girlCaptured.GetComponent<SpriteRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___girlCaptured_4;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_3, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// girlFalling.GetComponent<SpriteRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___girlFalling_5;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)1, NULL);
		// girlFalling.AddComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___girlFalling_5;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8;
		L_8 = GameObject_AddComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m7E6DD79B4F853CBB46CD7B9CDA2324E1F5297A72(L_7, GameObject_AddComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m7E6DD79B4F853CBB46CD7B9CDA2324E1F5297A72_RuntimeMethod_var);
		// if (!hyun.isPlaying && hyunLim)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___hyun_15;
		bool L_10;
		L_10 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_9, NULL);
		if (L_10)
		{
			goto IL_0074;
		}
	}
	{
		bool L_11 = __this->___hyunLim_18;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		// hyun.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___hyun_15;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		// hyunLim = false;
		__this->___hyunLim_18 = (bool)0;
	}

IL_0074:
	{
		// if (time)
		bool L_13 = __this->___time_12;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		// elapsedTime1 += Time.deltaTime;
		float L_14 = __this->___elapsedTime1_10;
		float L_15;
		L_15 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsedTime1_10 = ((float)il2cpp_codegen_add(L_14, L_15));
	}

IL_008e:
	{
		// if (elapsedTime1 >= 1.0f)
		float L_16 = __this->___elapsedTime1_10;
		if ((!(((float)L_16) >= ((float)(1.0f)))))
		{
			goto IL_00d8;
		}
	}
	{
		// if (!stop)
		bool L_17 = __this->___stop_13;
		if (L_17)
		{
			goto IL_00d8;
		}
	}
	{
		// shadow.transform.Translate(-0.01f, 0f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___shadow_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_19, (-0.00999999978f), (0.0f), (0.0f), NULL);
		// shadow.GetComponent<Animator>().SetBool("left", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___shadow_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21;
		L_21 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_20, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_21, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)1, NULL);
	}

IL_00d8:
	{
		// if (shadow.transform.position.x <= 1.58f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___shadow_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25 = L_24.___x_2;
		if ((!(((float)L_25) <= ((float)(1.58000004f)))))
		{
			goto IL_0140;
		}
	}
	{
		// stop = true;
		__this->___stop_13 = (bool)1;
		// shadow.GetComponent<Animator>().SetBool("left", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___shadow_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27;
		L_27 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_26, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_27, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// elapsedTime2 += Time.deltaTime;
		float L_28 = __this->___elapsedTime2_11;
		float L_29;
		L_29 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsedTime2_11 = ((float)il2cpp_codegen_add(L_28, L_29));
		// if (elapsedTime2 >= 1.0f)
		float L_30 = __this->___elapsedTime2_11;
		if ((!(((float)L_30) >= ((float)(1.0f)))))
		{
			goto IL_0140;
		}
	}
	{
		// girlFalling.SendMessage("GirlGetUp");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___girlFalling_5;
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_31, _stringLiteralEB7132D74DB46B6EB3B1E427D14967EBE1121775, NULL);
	}

IL_0140:
	{
		// if (elapsedTime2 >= 2.0f)
		float L_32 = __this->___elapsedTime2_11;
		if ((!(((float)L_32) >= ((float)(2.0f)))))
		{
			goto IL_016f;
		}
	}
	{
		// Fungus.Flowchart.BroadcastFungusMessage("DialogOn");
		il2cpp_codegen_runtime_class_init_inline(Flowchart_t0EC729D460FF8F5EFD42BB7A757FCF383C7556C2_il2cpp_TypeInfo_var);
		Flowchart_BroadcastFungusMessage_m24D6AAA0EC8CF4397DE30DACC7497A4113714C6C(_stringLiteral99576FE1A46D4277A38DBE67FE2C9B89C57CE589, NULL);
		// if (!bgm.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_33 = __this->___bgm_16;
		bool L_34;
		L_34 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_33, NULL);
		if (L_34)
		{
			goto IL_016f;
		}
	}
	{
		// bgm.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_35 = __this->___bgm_16;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_35, NULL);
	}

IL_016f:
	{
		// if (walk)
		bool L_36 = __this->___walk_14;
		if (!L_36)
		{
			goto IL_01b5;
		}
	}
	{
		// shadow.transform.Translate(0.01f, 0f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___shadow_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_38, (0.00999999978f), (0.0f), (0.0f), NULL);
		// girl.transform.Translate(0.01f, 0f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___girl_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_40, (0.00999999978f), (0.0f), (0.0f), NULL);
	}

IL_01b5:
	{
		// if (bgmlim)
		bool L_41 = __this->___bgmlim_17;
		if (!L_41)
		{
			goto IL_01d4;
		}
	}
	{
		// bgm.volume -= Time.deltaTime;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_42 = __this->___bgm_16;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_43 = L_42;
		float L_44;
		L_44 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_43, NULL);
		float L_45;
		L_45 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_43, ((float)il2cpp_codegen_subtract(L_44, L_45)), NULL);
	}

IL_01d4:
	{
		// }
		return;
	}
}
// System.Void Tutorial1Anim::CollisionCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial1Anim_CollisionCheck_mB62DB60FA7C0DFC1C57B5B838C397349F7AB7D83 (Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79* __this, const RuntimeMethod* method) 
{
	{
		// time = true;
		__this->___time_12 = (bool)1;
		// }
		return;
	}
}
// System.Void Tutorial1Anim::DialogOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial1Anim_DialogOff_mD21B9F80F646F5765C0A326F734E07D208B6AAB0 (Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// black.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___black_8;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// walk = true;
		__this->___walk_14 = (bool)1;
		// shadow.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___shadow_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_1, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// girl.GetComponent<Animator>().SetBool("right", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___girl_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_3, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// bgmlim = true;
		__this->___bgmlim_17 = (bool)1;
		// }
		return;
	}
}
// System.Void Tutorial1Anim::SceneChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial1Anim_SceneChange_m600A7560930762C59D198932A665B7A5A29003E9 (Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BCCC52E6E3FB47128A11940A53C04B79505587A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Story");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral7BCCC52E6E3FB47128A11940A53C04B79505587A, NULL);
		// }
		return;
	}
}
// System.Void Tutorial1Anim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial1Anim__ctor_mB0552491C3A9917B50FFBBC173BA24A10FC8E72A (Tutorial1Anim_t972E1442CD676854B2551EBB39D58A887AAF3F79* __this, const RuntimeMethod* method) 
{
	{
		// private bool hyunLim = true;
		__this->___hyunLim_18 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialAnim_Start_mBA9B6CF5C10FB0D689C83492AECB49A9D5389FBD (TutorialAnim_t26C52CAE01088DFB27B30699E790A17CCD417674* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = boy.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boy_9;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void TutorialAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialAnim_Update_mCDC57F4ACEC065F7142CB7B2138B5B82F8EA21B5 (TutorialAnim_t26C52CAE01088DFB27B30699E790A17CCD417674* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ACA0CB48F7AD1046074FCE12544191B2D46E536);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// elapsedTime += Time.deltaTime;
		float L_0 = __this->___elapsedTime_4;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___elapsedTime_4 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (elapsedTime >= 16.0f)
		float L_2 = __this->___elapsedTime_4;
		if ((!(((float)L_2) >= ((float)(16.0f)))))
		{
			goto IL_0069;
		}
	}
	{
		// alfa += Time.deltaTime / 4;
		float L_3 = __this->___alfa_5;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa_5 = ((float)il2cpp_codegen_add(L_3, ((float)(L_4/(4.0f)))));
		// if (alfa <= 1.0f)
		float L_5 = __this->___alfa_5;
		if ((!(((float)L_5) <= ((float)(1.0f)))))
		{
			goto IL_0069;
		}
	}
	{
		// pointbrinklight.color = new Color(1f, 1f, 1f, alfa);
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_6 = __this->___pointbrinklight_7;
		float L_7 = __this->___alfa_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), (1.0f), (1.0f), (1.0f), L_7, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_6, L_8, NULL);
	}

IL_0069:
	{
		// if (elapsedTime >= 21.0f)
		float L_9 = __this->___elapsedTime_4;
		if ((!(((float)L_9) >= ((float)(21.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		// animator.SetBool("gettingup", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_10;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral4ACA0CB48F7AD1046074FCE12544191B2D46E536, (bool)1, NULL);
	}

IL_0087:
	{
		// if (elapsedTime >= 23.0f)
		float L_11 = __this->___elapsedTime_4;
		if ((!(((float)L_11) >= ((float)(23.0f)))))
		{
			goto IL_00a5;
		}
	}
	{
		// animator.SetBool("normal", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_10;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3, (bool)1, NULL);
	}

IL_00a5:
	{
		// if (elapsedTime >= 24.0f)
		float L_13 = __this->___elapsedTime_4;
		if ((!(((float)L_13) >= ((float)(24.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		// alfa1 += Time.deltaTime / 2;
		float L_14 = __this->___alfa1_6;
		float L_15;
		L_15 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___alfa1_6 = ((float)il2cpp_codegen_add(L_14, ((float)(L_15/(2.0f)))));
		// int[] arrowNum = { 0, 1, 2, 3, 4 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_18 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_17, L_18, NULL);
		V_0 = L_17;
		// if (alfa1 <= 1.0f)
		float L_19 = __this->___alfa1_6;
		if ((!(((float)L_19) <= ((float)(1.0f)))))
		{
			goto IL_0127;
		}
	}
	{
		// foreach (int i in arrowNum)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_0;
		V_1 = L_20;
		V_2 = 0;
		goto IL_0121;
	}

IL_00f2:
	{
		// foreach (int i in arrowNum)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_1;
		int32_t L_22 = V_2;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_3 = L_24;
		// pointbrinklight1[i].color = new Color(1f, 1f, 1f, alfa1);
		Light2DU5BU5D_tD5B36D8ADDC8AED39429E909C1C87029518CA7C6* L_25 = __this->___pointbrinklight1_8;
		int32_t L_26 = V_3;
		int32_t L_27 = L_26;
		Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		float L_29 = __this->___alfa1_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), (1.0f), (1.0f), (1.0f), L_29, /*hidden argument*/NULL);
		Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline(L_28, L_30, NULL);
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0121:
	{
		// foreach (int i in arrowNum)
		int32_t L_32 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_1;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_00f2;
		}
	}

IL_0127:
	{
		// boy.GetComponent<BoyWalkAnim>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___boy_9;
		BoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD* L_35;
		L_35 = GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193(L_34, GameObject_GetComponent_TisBoyWalkAnim_tA986BB61A84C6075B4D6D8E6F7557D251385E0CD_m99E91EBE5222D014432636AF3A49D458D208C193_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_35, (bool)1, NULL);
	}

IL_0138:
	{
		// }
		return;
	}
}
// System.Void TutorialAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialAnim__ctor_m7457F218819C306ADD325B3ED98528130E97C81D (TutorialAnim_t26C52CAE01088DFB27B30699E790A17CCD417674* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_color_m4B83C46D644663AD243656907FE544F33B03EFFA_inline (Light2D_tB99F03B2EC245DB5586C77FF7BF5E7CDEF1576AD* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color color { get => m_Color; set => m_Color = value; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_Color_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* NarrationBehaviour_get_mTextUI_mC03B6F80E09BA670F97DA7F156F0656469A6CB43_inline (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* __this, const RuntimeMethod* method) 
{
	{
		// public TMP_Text mTextUI { get; set; }
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___U3CmTextUIU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NarrationBehaviour_set_mTextUI_m41320953CF6A5BF0DBC04EACA2C5F42F06D964FF_inline (NarrationBehaviour_tD06055ACDDF2A7D69B1CF654620708AC5C83EF03* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___value0, const RuntimeMethod* method) 
{
	{
		// public TMP_Text mTextUI { get; set; }
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = ___value0;
		__this->___U3CmTextUIU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmTextUIU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
