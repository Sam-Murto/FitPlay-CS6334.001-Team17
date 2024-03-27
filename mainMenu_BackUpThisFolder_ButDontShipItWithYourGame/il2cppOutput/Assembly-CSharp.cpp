#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>
struct Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>
struct Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8;
// System.Collections.Generic.HashSet`1<UnityEngine.Mesh>
struct HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>>
struct IEnumerable_1_t964CF7E074A80192F0A8F0AAC36C258B2270621B;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>
struct IEnumerable_1_t6519764FF9F2748F42E47AD4C9CB0128ED660B76;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_tB8C86BD783ADA156CF66B9AF8F1FB3B64D57CE5C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Mesh>
struct IEqualityComparer_1_t81ED550082D7FA9DD9644A873DB590B91498D2E1;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<Outline/ListVector3>
struct List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Mesh>[]
struct SlotU5BU5D_t1B065AD15B17E95946F7D6F2E526D98BC50FA02F;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Outline/ListVector3[]
struct ListVector3U5BU5D_tA52527751732880EB40D9F9103C2BCE6A4F5AA9E;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Coin
struct Coin_t6EC3724A41D53D737B499E377089217F0190C268;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveAlongTrack
struct MoveAlongTrack_t3590BA451EB58B04B710B9703B3E31CD3EE7C976;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObstacleSpawner
struct ObstacleSpawner_t447F43700055F1200E1A194844B011876E7362FC;
// Outline
struct Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882;
// Player_controller
struct Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Saber
struct Saber_t3690B631082F649722F334CE70CBD2821E90BB40;
// SaberEnd
struct SaberEnd_tA5BEF32E1AEAF609F4A0C9D88F7DB0177AC4D6E8;
// SceneTransition
struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57;
// Score_text
struct Score_text_t434ED21512BF20DBE4F836765549D503F30A3333;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// Strikeable
struct Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274;
// System.String
struct String_t;
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
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ToggleObject
struct ToggleObject_tE8456EA8F73CC2D0118BB0DF057077F82B60210E;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Outline/<>c
struct U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2;
// Outline/ListVector3
struct ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6519764FF9F2748F42E47AD4C9CB0128ED660B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t964CF7E074A80192F0A8F0AAC36C258B2270621B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t74EA0BDE56E2EC06DBC0D5E1876227691E642FF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t8FF4E49A76FEC7973BEB84FBE07C130E31C544BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B80EC501660F58EEF712988576EF146A948FB9B;
IL2CPP_EXTERN_C String_t* _stringLiteral0ECAB0ECA184D875BF6859B983F81D0BFA793E90;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral271508EA05E62BBDBE53A237D9122FF3E010A315;
IL2CPP_EXTERN_C String_t* _stringLiteral37ACCD7CE705FE55592FBC8D72AAC84BBBA9902F;
IL2CPP_EXTERN_C String_t* _stringLiteral3932DA3D302FFEF5EF82496DE74CC30F03E8C3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5;
IL2CPP_EXTERN_C String_t* _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257;
IL2CPP_EXTERN_C String_t* _stringLiteral63D30199207595D4F227CD3E39E842CAA71183E0;
IL2CPP_EXTERN_C String_t* _stringLiteral850EF8D3F58F6EDEC669035503FE3699C8F0BE48;
IL2CPP_EXTERN_C String_t* _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764;
IL2CPP_EXTERN_C String_t* _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C;
IL2CPP_EXTERN_C String_t* _stringLiteralDD823BBDA7735F84381B96AAC509BC302E165768;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStrikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274_m37A0C6ED88C802699248363C289182999F16EFF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m68EDB1BC21CDD271AF95048193430D2BFD67C99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m8600DF2023C681E503BBD879A6037C3F4F0D92C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_m606239D8F88C8655A765F5055C51825986BA6921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_GroupBy_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m491C085FC565131183389EBF0F528092585E814A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_mACA5A2A040ABFB83F58CA4E87B5CDB80C4BFF417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mD2ABF10557F9B6CE8C8C1292311CBA3F6CA44BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14_m4B8753764A9061D42766F542F0984410BFE9C716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m4402F60A8F2D158EF69606DB856DD5F69576E18A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mFA95004A6015F536FEA661EBD61544C36CA69235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m4DB4716A722543BA1B924822286F593CB4AE6368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mBDC505D7DDCEB660D97DBCEBC16A3D8A32F57352_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mA8A3212B2D6EFD29A0C36799CCDC47512D1AEDF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0AA44AA37E6B2131E4A3A94A5D1C42F44336D28A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6E7A5AD57D9904897CB5AFB3BC001B6B03CDF0D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2A7F6C398C8494D1C584E5B59E33A460BBEDC75F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m3582802F20D66EB503BE013D2EC0180F9BFC8127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m732AFE3112A315E939D77D8B4D429851763C0EED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mC73ED1086870FF1814C7DBE40A12F21162064C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5608C61ED638AA1899CDC9F34B3F83742C6D676A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCE9A346DD934EB013274F9CABE1C5B887A7B7D47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6536F496993F98391DCF9D74A9EFC620FDE476CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDEFC8498A704D627BA39DC6E71AFDBDCD75229A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m73784A68F9A84E2C38BEF17E0008B48AA2A1BF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSmoothNormalsU3Eb__30_0_m505FC74F9B4AC168013E5DD5BA78003EF5C0352B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSmoothNormalsU3Eb__30_1_m3B53A1B0677BDAA95C75BB73B1BEA77438D26493_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

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

// System.Collections.Generic.HashSet`1<UnityEngine.Mesh>
struct HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t1B065AD15B17E95946F7D6F2E526D98BC50FA02F* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Outline/ListVector3>
struct List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ListVector3U5BU5D_tA52527751732880EB40D9F9103C2BCE6A4F5AA9E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Outline/<>c
struct U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2  : public RuntimeObject
{
};

// Outline/ListVector3
struct ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Outline/ListVector3::data
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___data_0;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>
struct KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
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

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>
struct Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>
struct Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// Coin
struct Coin_t6EC3724A41D53D737B499E377089217F0190C268  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Coin::speed_rotate
	float ___speed_rotate_4;
};

// MoveAlongTrack
struct MoveAlongTrack_t3590BA451EB58B04B710B9703B3E31CD3EE7C976  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MoveAlongTrack::speed
	float ___speed_4;
};

// ObstacleSpawner
struct ObstacleSpawner_t447F43700055F1200E1A194844B011876E7362FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ObstacleSpawner::obstacleTypes
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___obstacleTypes_4;
	// System.Single ObstacleSpawner::spawnInterval
	float ___spawnInterval_5;
	// System.Single ObstacleSpawner::timeToNextSpawn
	float ___timeToNextSpawn_6;
	// UnityEngine.Transform ObstacleSpawner::spawnTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnTransform_7;
};

// Outline
struct Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Outline/Mode Outline::outlineMode
	int32_t ___outlineMode_5;
	// UnityEngine.Color Outline::outlineColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___outlineColor_6;
	// System.Single Outline::outlineWidth
	float ___outlineWidth_7;
	// System.Boolean Outline::precomputeOutline
	bool ___precomputeOutline_8;
	// System.Collections.Generic.List`1<UnityEngine.Mesh> Outline::bakeKeys
	List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ___bakeKeys_9;
	// System.Collections.Generic.List`1<Outline/ListVector3> Outline::bakeValues
	List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* ___bakeValues_10;
	// UnityEngine.Renderer[] Outline::renderers
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderers_11;
	// UnityEngine.Material Outline::outlineMaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___outlineMaskMaterial_12;
	// UnityEngine.Material Outline::outlineFillMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___outlineFillMaterial_13;
	// System.Boolean Outline::needsUpdate
	bool ___needsUpdate_14;
};

// Player_controller
struct Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Player_controller::finish_stage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___finish_stage_4;
	// System.Int32 Player_controller::score
	int32_t ___score_5;
};

// Saber
struct Saber_t3690B631082F649722F334CE70CBD2821E90BB40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SaberEnd Saber::saberEnd
	SaberEnd_tA5BEF32E1AEAF609F4A0C9D88F7DB0177AC4D6E8* ___saberEnd_4;
	// UnityEngine.Rigidbody Saber::rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidBody_5;
	// UnityEngine.Vector3 Saber::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_6;
	// UnityEngine.Vector3 Saber::lastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPosition_7;
	// System.Single Saber::strikeSpeedThreshold
	float ___strikeSpeedThreshold_8;
};

// SaberEnd
struct SaberEnd_tA5BEF32E1AEAF609F4A0C9D88F7DB0177AC4D6E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SceneTransition
struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Score_text
struct Score_text_t434ED21512BF20DBE4F836765549D503F30A3333  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Score_text::score_text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___score_text_4;
	// UnityEngine.GameObject Score_text::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// System.Int32 Score_text::current_score
	int32_t ___current_score_6;
};

// Strikeable
struct Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Strikeable::correctStrikeDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___correctStrikeDirection_4;
};

// ToggleObject
struct ToggleObject_tE8456EA8F73CC2D0118BB0DF057077F82B60210E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.HashSet`1<UnityEngine.Mesh>

// System.Collections.Generic.HashSet`1<UnityEngine.Mesh>

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Material>

// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Mesh>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// System.Collections.Generic.List`1<Outline/ListVector3>
struct List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ListVector3U5BU5D_tA52527751732880EB40D9F9103C2BCE6A4F5AA9E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Outline/ListVector3>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// Outline/<>c
struct U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields
{
	// Outline/<>c Outline/<>c::<>9
	U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2* ___U3CU3E9_0;
	// System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>> Outline/<>c::<>9__30_0
	Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* ___U3CU3E9__30_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3> Outline/<>c::<>9__30_1
	Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* ___U3CU3E9__30_1_2;
};

// Outline/<>c

// Outline/ListVector3

// Outline/ListVector3

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.Collision

// UnityEngine.Collision

// System.Delegate

// System.Delegate

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.VertexGradient

// TMPro.VertexGradient

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.MulticastDelegate

// System.MulticastDelegate

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>

// System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>

// System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SkinnedMeshRenderer

// UnityEngine.SkinnedMeshRenderer

// Coin

// Coin

// MoveAlongTrack

// MoveAlongTrack

// ObstacleSpawner

// ObstacleSpawner

// Outline
struct Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_StaticFields
{
	// System.Collections.Generic.HashSet`1<UnityEngine.Mesh> Outline::registeredMeshes
	HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4* ___registeredMeshes_4;
};

// Outline

// Player_controller

// Player_controller

// Saber

// Saber

// SaberEnd

// SaberEnd

// SceneTransition

// SceneTransition

// Score_text

// Score_text

// Strikeable

// Strikeable

// ToggleObject

// ToggleObject

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* m_Items[1];

	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B  : public RuntimeArray
{
	ALIGN_FIELD (8) SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* m_Items[1];

	inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m82418963137F920DC5FC72422B71C35029E0A334_gshared (Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_mACA5A2A040ABFB83F58CA4E87B5CDB80C4BFF417_gshared (RuntimeObject* ___0_source, Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* ___1_selector, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m1FC4E71DFD0DB68CFDA4E9D173518B974F9C437E_gshared (Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TSource>> System.Linq.Enumerable::GroupBy<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_GroupBy_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m491C085FC565131183389EBF0F528092585E814A_gshared (RuntimeObject* ___0_source, Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* ___1_keySelector, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_m606239D8F88C8655A765F5055C51825986BA6921_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_mA8A3212B2D6EFD29A0C36799CCDC47512D1AEDF8_gshared_inline (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m4DB4716A722543BA1B924822286F593CB4AE6368_gshared (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Key_mBDC505D7DDCEB660D97DBCEBC16A3D8A32F57352_gshared_inline (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.Material>(T)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_original, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Outline::LoadSmoothNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_LoadSmoothNormals_mC2B954B5629F26BCC3052985D13B19B07F51758E (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) ;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.Material>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* Enumerable_ToList_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mD2ABF10557F9B6CE8C8C1292311CBA3F6CA44BD8 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(T)
inline void List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
inline MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	return ((  MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Mesh>::get_Count()
inline int32_t List_1_get_Count_m6536F496993F98391DCF9D74A9EFC620FDE476CD_inline (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Outline/ListVector3>::get_Count()
inline int32_t List_1_get_Count_mDEFC8498A704D627BA39DC6E71AFDBDCD75229A8_inline (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Mesh>::Clear()
inline void List_1_Clear_m2A7F6C398C8494D1C584E5B59E33A460BBEDC75F_inline (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Outline/ListVector3>::Clear()
inline void List_1_Clear_m3582802F20D66EB503BE013D2EC0180F9BFC8127_inline (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Outline::Bake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_Bake_mCE5F0AB4579938AEA2467576B630567650B472CD (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) ;
// System.Void Outline::UpdateMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_UpdateMaterialProperties_mF30D42EDEEB92EB4C0E822B20D2CF0112012C6B7 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Remove(T)
inline bool List_1_Remove_mC73ED1086870FF1814C7DBE40A12F21162064C76 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Mesh>::.ctor()
inline void HashSet_1__ctor_mFA95004A6015F536FEA661EBD61544C36CA69235 (HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.MeshFilter>()
inline MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* Component_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m68EDB1BC21CDD271AF95048193430D2BFD67C99E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Mesh>::Add(T)
inline bool HashSet_1_Add_m4402F60A8F2D158EF69606DB856DD5F69576E18A (HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4*, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> Outline::SmoothNormals(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* Outline_SmoothNormals_m5D53122B9582AF98E51EBAAD92A3CF41831AA80D (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Mesh>::Add(T)
inline void List_1_Add_m0AA44AA37E6B2131E4A3A94A5D1C42F44336D28A_inline (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Outline/ListVector3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListVector3__ctor_m308616F10D2AA37684228F8BE647484DC2935115 (ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Outline/ListVector3>::Add(T)
inline void List_1_Add_m6E7A5AD57D9904897CB5AFB3BC001B6B03CDF0D5_inline (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* __this, ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303*, ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Mesh>::IndexOf(T)
inline int32_t List_1_IndexOf_m732AFE3112A315E939D77D8B4D429851763C0EED (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<Outline/ListVector3>::get_Item(System.Int32)
inline ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7* List_1_get_Item_m73784A68F9A84E2C38BEF17E0008B48AA2A1BF32 (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7* (*) (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___1_uvs, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void Outline::CombineSubmeshes(UnityEngine.Mesh,UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_CombineSubmeshes_mADF0C4B19681CE606B33ADCAB4ED70B85BB8C6C2 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___1_materials, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m8600DF2023C681E503BBD879A6037C3F4F0D92C0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv4(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv4_mC87359C3EEA7219ABF70375148B98DC95577F9A3 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m82418963137F920DC5FC72422B71C35029E0A334 (Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m82418963137F920DC5FC72422B71C35029E0A334_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
inline RuntimeObject* Enumerable_Select_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_mACA5A2A040ABFB83F58CA4E87B5CDB80C4BFF417 (RuntimeObject* ___0_source, Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8*, const RuntimeMethod*))Enumerable_Select_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_mACA5A2A040ABFB83F58CA4E87B5CDB80C4BFF417_gshared)(___0_source, ___1_selector, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1FC4E71DFD0DB68CFDA4E9D173518B974F9C437E (Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m1FC4E71DFD0DB68CFDA4E9D173518B974F9C437E_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TSource>> System.Linq.Enumerable::GroupBy<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_GroupBy_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m491C085FC565131183389EBF0F528092585E814A (RuntimeObject* ___0_source, Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* ___1_keySelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877*, const RuntimeMethod*))Enumerable_GroupBy_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m491C085FC565131183389EBF0F528092585E814A_gshared)(___0_source, ___1_keySelector, method);
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_gshared)(__this, ___0_collection, method);
}
// System.Int32 System.Linq.Enumerable::Count<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_m606239D8F88C8655A765F5055C51825986BA6921 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_m606239D8F88C8655A765F5055C51825986BA6921_gshared)(___0_source, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_mA8A3212B2D6EFD29A0C36799CCDC47512D1AEDF8_inline (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E*, const RuntimeMethod*))KeyValuePair_2_get_Value_mA8A3212B2D6EFD29A0C36799CCDC47512D1AEDF8_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___0_index, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
inline void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_triangles, int32_t ___1_submesh, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Mesh>::.ctor()
inline void List_1__ctor_mCE9A346DD934EB013274F9CABE1C5B887A7B7D47 (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Outline/ListVector3>::.ctor()
inline void List_1__ctor_m5608C61ED638AA1899CDC9F34B3F83742C6D676A (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Outline/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE194CFEDCF972E2B90ADB13465F0FF288715508D (U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m4DB4716A722543BA1B924822286F593CB4AE6368 (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m4DB4716A722543BA1B924822286F593CB4AE6368_gshared)(__this, ___0_key, ___1_value, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::get_Key()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Key_mBDC505D7DDCEB660D97DBCEBC16A3D8A32F57352_inline (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBDC505D7DDCEB660D97DBCEBC16A3D8A32F57352_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// UnityEngine.GameObject ObstacleSpawner::RandomObstacle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObstacleSpawner_RandomObstacle_m6B1A900905CA7BB3014FD60C5949BBFBCD36F9DB (ObstacleSpawner_t447F43700055F1200E1A194844B011876E7362FC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 Saber::GetSaberEndPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Saber_GetSaberEndPosition_m83A535DE0FC1C6EF17937A788BDD04A0B384BAE1 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) ;
// System.Void Saber::UpdateVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saber_UpdateVelocity_mEE59532C8B8509304640AA4FE014FB0324D208BA (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Strikeable>()
inline Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* Component_GetComponent_TisStrikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274_m37A0C6ED88C802699248363C289182999F16EFF7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 Saber::GetStrikeDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Saber_GetStrikeDirection_m5313A7DE41E0E7F96B83B1D8D625213D1BAC75F9 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) ;
// System.Void Strikeable::GetStruck(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Strikeable_GetStruck_mBCD7D6537962DAA47571A63C59A7623E7B4E9F87 (Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_strikeDirection, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void Strikeable::Crumble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Strikeable_Crumble_mC8D8720EDBD13C24265BBD5F1661305423AF4A00 (Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Player_controller>()
inline Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14* GameObject_GetComponent_TisPlayer_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14_m4B8753764A9061D42766F542F0984410BFE9C716 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 Player_controller::current_score()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_controller_current_score_m8E91208AA2195462AEBA3F96944593A0E51D590B_inline (Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// Outline/Mode Outline::get_OutlineMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Outline_get_OutlineMode_m407E90C88C66DA2B6155740D4FB9142C355A491B (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	{
		// get { return outlineMode; }
		int32_t L_0 = __this->___outlineMode_5;
		return L_0;
	}
}
// System.Void Outline::set_OutlineMode(Outline/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_set_OutlineMode_m82C5D0413E7460037A2A2BF8FB60B84C9AC17C06 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// outlineMode = value;
		int32_t L_0 = ___0_value;
		__this->___outlineMode_5 = L_0;
		// needsUpdate = true;
		__this->___needsUpdate_14 = (bool)1;
		// }
		return;
	}
}
// UnityEngine.Color Outline::get_OutlineColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Outline_get_OutlineColor_m51FFB54A998C965C991B395520EEB4E24EF363CD (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	{
		// get { return outlineColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___outlineColor_6;
		return L_0;
	}
}
// System.Void Outline::set_OutlineColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_set_OutlineColor_m4889531215E9E7CDFBA38DDEB010477973D837C6 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// outlineColor = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___outlineColor_6 = L_0;
		// needsUpdate = true;
		__this->___needsUpdate_14 = (bool)1;
		// }
		return;
	}
}
// System.Single Outline::get_OutlineWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Outline_get_OutlineWidth_mCFD03E6DF8E664C1F32148FECE77815F144BA034 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	{
		// get { return outlineWidth; }
		float L_0 = __this->___outlineWidth_7;
		return L_0;
	}
}
// System.Void Outline::set_OutlineWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_set_OutlineWidth_mF0D2F497BFDFB472E57FD7C4A0C075CF01C1F8B0 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// outlineWidth = value;
		float L_0 = ___0_value;
		__this->___outlineWidth_7 = L_0;
		// needsUpdate = true;
		__this->___needsUpdate_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Outline::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_Awake_mF777410709B6AEB60EB852721F0A3F3995521001 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B80EC501660F58EEF712988576EF146A948FB9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271508EA05E62BBDBE53A237D9122FF3E010A315);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3932DA3D302FFEF5EF82496DE74CC30F03E8C3BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D30199207595D4F227CD3E39E842CAA71183E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// renderers = GetComponentsInChildren<Renderer>();
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0;
		L_0 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(__this, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		__this->___renderers_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderers_11), (void*)L_0);
		// outlineMaskMaterial = Instantiate(Resources.Load<Material>(@"Materials/OutlineMask"));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E(_stringLiteral271508EA05E62BBDBE53A237D9122FF3E010A315, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171(L_1, Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171_RuntimeMethod_var);
		__this->___outlineMaskMaterial_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outlineMaskMaterial_12), (void*)L_2);
		// outlineFillMaterial = Instantiate(Resources.Load<Material>(@"Materials/OutlineFill"));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E(_stringLiteral3932DA3D302FFEF5EF82496DE74CC30F03E8C3BC, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171(L_3, Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171_RuntimeMethod_var);
		__this->___outlineFillMaterial_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outlineFillMaterial_13), (void*)L_4);
		// outlineMaskMaterial.name = "OutlineMask (Instance)";
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___outlineMaskMaterial_12;
		NullCheck(L_5);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_5, _stringLiteral63D30199207595D4F227CD3E39E842CAA71183E0, NULL);
		// outlineFillMaterial.name = "OutlineFill (Instance)";
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___outlineFillMaterial_13;
		NullCheck(L_6);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_6, _stringLiteral0B80EC501660F58EEF712988576EF146A948FB9B, NULL);
		// LoadSmoothNormals();
		Outline_LoadSmoothNormals_mC2B954B5629F26BCC3052985D13B19B07F51758E(__this, NULL);
		// needsUpdate = true;
		__this->___needsUpdate_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Outline::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_OnEnable_m1D83BBF3E0EC2561D2D516514BCB29D14E2AFE73 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mD2ABF10557F9B6CE8C8C1292311CBA3F6CA44BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* V_2 = NULL;
	{
		// foreach (var renderer in renderers) {
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0 = __this->___renderers_11;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0041;
	}

IL_000b:
	{
		// foreach (var renderer in renderers) {
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var materials = renderer.sharedMaterials.ToList();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = L_4;
		NullCheck(L_5);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6;
		L_6 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_5, NULL);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_7;
		L_7 = Enumerable_ToList_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mD2ABF10557F9B6CE8C8C1292311CBA3F6CA44BD8((RuntimeObject*)L_6, Enumerable_ToList_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mD2ABF10557F9B6CE8C8C1292311CBA3F6CA44BD8_RuntimeMethod_var);
		V_2 = L_7;
		// materials.Add(outlineMaskMaterial);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_8 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___outlineMaskMaterial_12;
		NullCheck(L_8);
		List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline(L_8, L_9, List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		// materials.Add(outlineFillMaterial);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_10 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___outlineFillMaterial_13;
		NullCheck(L_10);
		List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline(L_10, L_11, List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		// renderer.materials = materials.ToArray();
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_12 = V_2;
		NullCheck(L_12);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_13;
		L_13 = List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6(L_12, List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001(L_5, L_13, NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0041:
	{
		// foreach (var renderer in renderers) {
		int32_t L_15 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Outline::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_OnValidate_mB52AEBD4F2D121E1AF4B5B20EACE2ADD7D2091E7 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2A7F6C398C8494D1C584E5B59E33A460BBEDC75F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3582802F20D66EB503BE013D2EC0180F9BFC8127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6536F496993F98391DCF9D74A9EFC620FDE476CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDEFC8498A704D627BA39DC6E71AFDBDCD75229A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// needsUpdate = true;
		__this->___needsUpdate_14 = (bool)1;
		// if (!precomputeOutline && bakeKeys.Count != 0 || bakeKeys.Count != bakeValues.Count) {
		bool L_0 = __this->___precomputeOutline_8;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* L_1 = __this->___bakeKeys_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m6536F496993F98391DCF9D74A9EFC620FDE476CD_inline(L_1, List_1_get_Count_m6536F496993F98391DCF9D74A9EFC620FDE476CD_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0034;
		}
	}

IL_001c:
	{
		List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* L_3 = __this->___bakeKeys_9;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m6536F496993F98391DCF9D74A9EFC620FDE476CD_inline(L_3, List_1_get_Count_m6536F496993F98391DCF9D74A9EFC620FDE476CD_RuntimeMethod_var);
		List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* L_5 = __this->___bakeValues_10;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mDEFC8498A704D627BA39DC6E71AFDBDCD75229A8_inline(L_5, List_1_get_Count_mDEFC8498A704D627BA39DC6E71AFDBDCD75229A8_RuntimeMethod_var);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_004a;
		}
	}

IL_0034:
	{
		// bakeKeys.Clear();
		List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* L_7 = __this->___bakeKeys_9;
		NullCheck(L_7);
		List_1_Clear_m2A7F6C398C8494D1C584E5B59E33A460BBEDC75F_inline(L_7, List_1_Clear_m2A7F6C398C8494D1C584E5B59E33A460BBEDC75F_RuntimeMethod_var);
		// bakeValues.Clear();
		List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* L_8 = __this->___bakeValues_10;
		NullCheck(L_8);
		List_1_Clear_m3582802F20D66EB503BE013D2EC0180F9BFC8127_inline(L_8, List_1_Clear_m3582802F20D66EB503BE013D2EC0180F9BFC8127_RuntimeMethod_var);
	}

IL_004a:
	{
		// if (precomputeOutline && bakeKeys.Count == 0) {
		bool L_9 = __this->___precomputeOutline_8;
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* L_10 = __this->___bakeKeys_9;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m6536F496993F98391DCF9D74A9EFC620FDE476CD_inline(L_10, List_1_get_Count_m6536F496993F98391DCF9D74A9EFC620FDE476CD_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0065;
		}
	}
	{
		// Bake();
		Outline_Bake_mCE5F0AB4579938AEA2467576B630567650B472CD(__this, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Outline::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_Update_mB63EE99CEEEBBE664F20B5F73EE21E6424071191 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	{
		// if (needsUpdate) {
		bool L_0 = __this->___needsUpdate_14;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// needsUpdate = false;
		__this->___needsUpdate_14 = (bool)0;
		// UpdateMaterialProperties();
		Outline_UpdateMaterialProperties_mF30D42EDEEB92EB4C0E822B20D2CF0112012C6B7(__this, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Outline::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_OnDisable_mF7388259717C44FA86E232E83494596BFE572507 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mD2ABF10557F9B6CE8C8C1292311CBA3F6CA44BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mC73ED1086870FF1814C7DBE40A12F21162064C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* V_2 = NULL;
	{
		// foreach (var renderer in renderers) {
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0 = __this->___renderers_11;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0043;
	}

IL_000b:
	{
		// foreach (var renderer in renderers) {
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var materials = renderer.sharedMaterials.ToList();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = L_4;
		NullCheck(L_5);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6;
		L_6 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_5, NULL);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_7;
		L_7 = Enumerable_ToList_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mD2ABF10557F9B6CE8C8C1292311CBA3F6CA44BD8((RuntimeObject*)L_6, Enumerable_ToList_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mD2ABF10557F9B6CE8C8C1292311CBA3F6CA44BD8_RuntimeMethod_var);
		V_2 = L_7;
		// materials.Remove(outlineMaskMaterial);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_8 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___outlineMaskMaterial_12;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_mC73ED1086870FF1814C7DBE40A12F21162064C76(L_8, L_9, List_1_Remove_mC73ED1086870FF1814C7DBE40A12F21162064C76_RuntimeMethod_var);
		// materials.Remove(outlineFillMaterial);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_11 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___outlineFillMaterial_13;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Remove_mC73ED1086870FF1814C7DBE40A12F21162064C76(L_11, L_12, List_1_Remove_mC73ED1086870FF1814C7DBE40A12F21162064C76_RuntimeMethod_var);
		// renderer.materials = materials.ToArray();
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_14 = V_2;
		NullCheck(L_14);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_15;
		L_15 = List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6(L_14, List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001(L_5, L_15, NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0043:
	{
		// foreach (var renderer in renderers) {
		int32_t L_17 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Outline::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_OnDestroy_m57F1616E8A82ABA129D4AECAED4B57F1995F3232 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(outlineMaskMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___outlineMaskMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// Destroy(outlineFillMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___outlineFillMaterial_13;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Outline::Bake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_Bake_mCE5F0AB4579938AEA2467576B630567650B472CD (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m68EDB1BC21CDD271AF95048193430D2BFD67C99E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m4402F60A8F2D158EF69606DB856DD5F69576E18A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mFA95004A6015F536FEA661EBD61544C36CA69235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0AA44AA37E6B2131E4A3A94A5D1C42F44336D28A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E7A5AD57D9904897CB5AFB3BC001B6B03CDF0D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4* V_0 = NULL;
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* V_1 = NULL;
	int32_t V_2 = 0;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_3 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_4 = NULL;
	{
		// var bakedMeshes = new HashSet<Mesh>();
		HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4* L_0 = (HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4*)il2cpp_codegen_object_new(HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_mFA95004A6015F536FEA661EBD61544C36CA69235(L_0, HashSet_1__ctor_mFA95004A6015F536FEA661EBD61544C36CA69235_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_1;
		L_1 = Component_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m68EDB1BC21CDD271AF95048193430D2BFD67C99E(__this, Component_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m68EDB1BC21CDD271AF95048193430D2BFD67C99E_RuntimeMethod_var);
		V_1 = L_1;
		V_2 = 0;
		goto IL_005e;
	}

IL_0011:
	{
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// if (!bakedMeshes.Add(meshFilter.sharedMesh)) {
		HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4* L_6 = V_0;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7 = V_3;
		NullCheck(L_7);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8;
		L_8 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_7, NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = HashSet_1_Add_m4402F60A8F2D158EF69606DB856DD5F69576E18A(L_6, L_8, HashSet_1_Add_m4402F60A8F2D158EF69606DB856DD5F69576E18A_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// var smoothNormals = SmoothNormals(meshFilter.sharedMesh);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_10 = V_3;
		NullCheck(L_10);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_11;
		L_11 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_10, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12;
		L_12 = Outline_SmoothNormals_m5D53122B9582AF98E51EBAAD92A3CF41831AA80D(__this, L_11, NULL);
		V_4 = L_12;
		// bakeKeys.Add(meshFilter.sharedMesh);
		List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* L_13 = __this->___bakeKeys_9;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_14 = V_3;
		NullCheck(L_14);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15;
		L_15 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_14, NULL);
		NullCheck(L_13);
		List_1_Add_m0AA44AA37E6B2131E4A3A94A5D1C42F44336D28A_inline(L_13, L_15, List_1_Add_m0AA44AA37E6B2131E4A3A94A5D1C42F44336D28A_RuntimeMethod_var);
		// bakeValues.Add(new ListVector3() { data = smoothNormals });
		List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* L_16 = __this->___bakeValues_10;
		ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7* L_17 = (ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7*)il2cpp_codegen_object_new(ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		ListVector3__ctor_m308616F10D2AA37684228F8BE647484DC2935115(L_17, NULL);
		ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7* L_18 = L_17;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_19 = V_4;
		NullCheck(L_18);
		L_18->___data_0 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___data_0), (void*)L_19);
		NullCheck(L_16);
		List_1_Add_m6E7A5AD57D9904897CB5AFB3BC001B6B03CDF0D5_inline(L_16, L_18, List_1_Add_m6E7A5AD57D9904897CB5AFB3BC001B6B03CDF0D5_RuntimeMethod_var);
	}

IL_005a:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005e:
	{
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		int32_t L_21 = V_2;
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Outline::LoadSmoothNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_LoadSmoothNormals_mC2B954B5629F26BCC3052985D13B19B07F51758E (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m68EDB1BC21CDD271AF95048193430D2BFD67C99E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m8600DF2023C681E503BBD879A6037C3F4F0D92C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m4402F60A8F2D158EF69606DB856DD5F69576E18A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m732AFE3112A315E939D77D8B4D429851763C0EED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m73784A68F9A84E2C38BEF17E0008B48AA2A1BF32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* V_0 = NULL;
	int32_t V_1 = 0;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_2 = NULL;
	int32_t V_3 = 0;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_4 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_5 = NULL;
	SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* V_6 = NULL;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_7 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* G_B5_0 = NULL;
	{
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_0;
		L_0 = Component_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m68EDB1BC21CDD271AF95048193430D2BFD67C99E(__this, Component_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m68EDB1BC21CDD271AF95048193430D2BFD67C99E_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0092;
	}

IL_000e:
	{
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (!registeredMeshes.Add(meshFilter.sharedMesh)) {
		il2cpp_codegen_runtime_class_init_inline(Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_il2cpp_TypeInfo_var);
		HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4* L_5 = ((Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_StaticFields*)il2cpp_codegen_static_fields_for(Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_il2cpp_TypeInfo_var))->___registeredMeshes_4;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_6 = V_2;
		NullCheck(L_6);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7;
		L_7 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_6, NULL);
		NullCheck(L_5);
		bool L_8;
		L_8 = HashSet_1_Add_m4402F60A8F2D158EF69606DB856DD5F69576E18A(L_5, L_7, HashSet_1_Add_m4402F60A8F2D158EF69606DB856DD5F69576E18A_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_008e;
		}
	}
	{
		// var index = bakeKeys.IndexOf(meshFilter.sharedMesh);
		List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* L_9 = __this->___bakeKeys_9;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_10 = V_2;
		NullCheck(L_10);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_11;
		L_11 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_10, NULL);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = List_1_IndexOf_m732AFE3112A315E939D77D8B4D429851763C0EED(L_9, L_11, List_1_IndexOf_m732AFE3112A315E939D77D8B4D429851763C0EED_RuntimeMethod_var);
		V_3 = L_12;
		// var smoothNormals = (index >= 0) ? bakeValues[index].data : SmoothNormals(meshFilter.sharedMesh);
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_14 = V_2;
		NullCheck(L_14);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15;
		L_15 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_14, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_16;
		L_16 = Outline_SmoothNormals_m5D53122B9582AF98E51EBAAD92A3CF41831AA80D(__this, L_15, NULL);
		G_B5_0 = L_16;
		goto IL_0059;
	}

IL_0048:
	{
		List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* L_17 = __this->___bakeValues_10;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7* L_19;
		L_19 = List_1_get_Item_m73784A68F9A84E2C38BEF17E0008B48AA2A1BF32(L_17, L_18, List_1_get_Item_m73784A68F9A84E2C38BEF17E0008B48AA2A1BF32_RuntimeMethod_var);
		NullCheck(L_19);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_20 = L_19->___data_0;
		G_B5_0 = L_20;
	}

IL_0059:
	{
		V_4 = G_B5_0;
		// meshFilter.sharedMesh.SetUVs(3, smoothNormals);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_21 = V_2;
		NullCheck(L_21);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22;
		L_22 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_21, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_23 = V_4;
		NullCheck(L_22);
		Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2(L_22, 3, L_23, NULL);
		// var renderer = meshFilter.GetComponent<Renderer>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_24 = V_2;
		NullCheck(L_24);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_25;
		L_25 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_24, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_5 = L_25;
		// if (renderer != null) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_008e;
		}
	}
	{
		// CombineSubmeshes(meshFilter.sharedMesh, renderer.sharedMaterials);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_28 = V_2;
		NullCheck(L_28);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_29;
		L_29 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_28, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_30 = V_5;
		NullCheck(L_30);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_31;
		L_31 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_30, NULL);
		Outline_CombineSubmeshes_mADF0C4B19681CE606B33ADCAB4ED70B85BB8C6C2(__this, L_29, L_31, NULL);
	}

IL_008e:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0092:
	{
		// foreach (var meshFilter in GetComponentsInChildren<MeshFilter>()) {
		int32_t L_33 = V_1;
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// foreach (var skinnedMeshRenderer in GetComponentsInChildren<SkinnedMeshRenderer>()) {
		SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* L_35;
		L_35 = Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m8600DF2023C681E503BBD879A6037C3F4F0D92C0(__this, Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m8600DF2023C681E503BBD879A6037C3F4F0D92C0_RuntimeMethod_var);
		V_6 = L_35;
		V_1 = 0;
		goto IL_00f5;
	}

IL_00a7:
	{
		// foreach (var skinnedMeshRenderer in GetComponentsInChildren<SkinnedMeshRenderer>()) {
		SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* L_36 = V_6;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_7 = L_39;
		// if (!registeredMeshes.Add(skinnedMeshRenderer.sharedMesh)) {
		il2cpp_codegen_runtime_class_init_inline(Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_il2cpp_TypeInfo_var);
		HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4* L_40 = ((Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_StaticFields*)il2cpp_codegen_static_fields_for(Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_il2cpp_TypeInfo_var))->___registeredMeshes_4;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_41 = V_7;
		NullCheck(L_41);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_42;
		L_42 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_41, NULL);
		NullCheck(L_40);
		bool L_43;
		L_43 = HashSet_1_Add_m4402F60A8F2D158EF69606DB856DD5F69576E18A(L_40, L_42, HashSet_1_Add_m4402F60A8F2D158EF69606DB856DD5F69576E18A_RuntimeMethod_var);
		if (!L_43)
		{
			goto IL_00f1;
		}
	}
	{
		// skinnedMeshRenderer.sharedMesh.uv4 = new Vector2[skinnedMeshRenderer.sharedMesh.vertexCount];
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_44 = V_7;
		NullCheck(L_44);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_45;
		L_45 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_44, NULL);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_46 = V_7;
		NullCheck(L_46);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_47;
		L_47 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_46, NULL);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_47, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_49 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_48);
		NullCheck(L_45);
		Mesh_set_uv4_mC87359C3EEA7219ABF70375148B98DC95577F9A3(L_45, L_49, NULL);
		// CombineSubmeshes(skinnedMeshRenderer.sharedMesh, skinnedMeshRenderer.sharedMaterials);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_50 = V_7;
		NullCheck(L_50);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_51;
		L_51 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_50, NULL);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_52 = V_7;
		NullCheck(L_52);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_53;
		L_53 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_52, NULL);
		Outline_CombineSubmeshes_mADF0C4B19681CE606B33ADCAB4ED70B85BB8C6C2(__this, L_51, L_53, NULL);
	}

IL_00f1:
	{
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00f5:
	{
		// foreach (var skinnedMeshRenderer in GetComponentsInChildren<SkinnedMeshRenderer>()) {
		int32_t L_55 = V_1;
		SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* L_56 = V_6;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_00a7;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> Outline::SmoothNormals(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* Outline_SmoothNormals_m5D53122B9582AF98E51EBAAD92A3CF41831AA80D (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_m606239D8F88C8655A765F5055C51825986BA6921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_GroupBy_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m491C085FC565131183389EBF0F528092585E814A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_mACA5A2A040ABFB83F58CA4E87B5CDB80C4BFF417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6519764FF9F2748F42E47AD4C9CB0128ED660B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t964CF7E074A80192F0A8F0AAC36C258B2270621B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t74EA0BDE56E2EC06DBC0D5E1876227691E642FF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8FF4E49A76FEC7973BEB84FBE07C130E31C544BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mA8A3212B2D6EFD29A0C36799CCDC47512D1AEDF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSmoothNormalsU3Eb__30_0_m505FC74F9B4AC168013E5DD5BA78003EF5C0352B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSmoothNormalsU3Eb__30_1_m3B53A1B0677BDAA95C75BB73B1BEA77438D26493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E V_6;
	memset((&V_6), 0, sizeof(V_6));
	Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* G_B2_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B2_1 = NULL;
	Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* G_B1_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B1_1 = NULL;
	Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// var groups = mesh.vertices.Select((vertex, index) => new KeyValuePair<Vector3, int>(vertex, index)).GroupBy(pair => pair.Key);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_mesh;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var);
		Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* L_2 = ((U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1;
		Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var);
		U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2* L_4 = ((U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* L_5 = (Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8*)il2cpp_codegen_object_new(Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_3__ctor_m82418963137F920DC5FC72422B71C35029E0A334(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CSmoothNormalsU3Eb__30_0_m505FC74F9B4AC168013E5DD5BA78003EF5C0352B_RuntimeMethod_var), NULL);
		Func_3_t5A745A2A818D67325AFC7CB25D0EA2F89FE271C8* L_6 = L_5;
		((U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_mACA5A2A040ABFB83F58CA4E87B5CDB80C4BFF417((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_mACA5A2A040ABFB83F58CA4E87B5CDB80C4BFF417_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var);
		Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* L_8 = ((U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var))->___U3CU3E9__30_1_2;
		Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var);
		U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2* L_10 = ((U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* L_11 = (Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877*)il2cpp_codegen_object_new(Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_m1FC4E71DFD0DB68CFDA4E9D173518B974F9C437E(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CSmoothNormalsU3Eb__30_1_m3B53A1B0677BDAA95C75BB73B1BEA77438D26493_RuntimeMethod_var), NULL);
		Func_2_t02FA65445FDB0972487E45A000B16A8FE54CD877* L_12 = L_11;
		((U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var))->___U3CU3E9__30_1_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var))->___U3CU3E9__30_1_2), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0049:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_GroupBy_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m491C085FC565131183389EBF0F528092585E814A(G_B4_1, G_B4_0, Enumerable_GroupBy_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m491C085FC565131183389EBF0F528092585E814A_RuntimeMethod_var);
		// var smoothNormals = new List<Vector3>(mesh.normals);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = ___0_mesh;
		NullCheck(L_14);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15;
		L_15 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_14, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_16 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD(L_16, (RuntimeObject*)L_15, List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_RuntimeMethod_var);
		V_0 = L_16;
		// foreach (var group in groups) {
		NullCheck(L_13);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>>::GetEnumerator() */, IEnumerable_1_t964CF7E074A80192F0A8F0AAC36C258B2270621B_il2cpp_TypeInfo_var, L_13);
		V_1 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0108:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_1;
					if (!L_18)
					{
						goto IL_0111;
					}
				}
				{
					RuntimeObject* L_19 = V_1;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_0111:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00fb_1;
			}

IL_0065_1:
			{
				// foreach (var group in groups) {
				RuntimeObject* L_20 = V_1;
				NullCheck(L_20);
				RuntimeObject* L_21;
				L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>>::get_Current() */, IEnumerator_1_t8FF4E49A76FEC7973BEB84FBE07C130E31C544BA_il2cpp_TypeInfo_var, L_20);
				V_2 = L_21;
				// if (group.Count() == 1) {
				RuntimeObject* L_22 = V_2;
				int32_t L_23;
				L_23 = Enumerable_Count_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_m606239D8F88C8655A765F5055C51825986BA6921(L_22, Enumerable_Count_TisKeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E_m606239D8F88C8655A765F5055C51825986BA6921_RuntimeMethod_var);
				if ((((int32_t)L_23) == ((int32_t)1)))
				{
					goto IL_00fb_1;
				}
			}
			{
				// var smoothNormal = Vector3.zero;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
				V_3 = L_24;
				// foreach (var pair in group) {
				RuntimeObject* L_25 = V_2;
				NullCheck(L_25);
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::GetEnumerator() */, IEnumerable_1_t6519764FF9F2748F42E47AD4C9CB0128ED660B76_il2cpp_TypeInfo_var, L_25);
				V_4 = L_26;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00b0_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_27 = V_4;
							if (!L_27)
							{
								goto IL_00bb_1;
							}
						}
						{
							RuntimeObject* L_28 = V_4;
							NullCheck(L_28);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_28);
						}

IL_00bb_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00a5_2;
					}

IL_0088_2:
					{
						// foreach (var pair in group) {
						RuntimeObject* L_29 = V_4;
						NullCheck(L_29);
						KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E L_30;
						L_30 = InterfaceFuncInvoker0< KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::get_Current() */, IEnumerator_1_t74EA0BDE56E2EC06DBC0D5E1876227691E642FF4_il2cpp_TypeInfo_var, L_29);
						V_5 = L_30;
						// smoothNormal += smoothNormals[pair.Value];
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_3;
						List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32 = V_0;
						int32_t L_33;
						L_33 = KeyValuePair_2_get_Value_mA8A3212B2D6EFD29A0C36799CCDC47512D1AEDF8_inline((&V_5), KeyValuePair_2_get_Value_mA8A3212B2D6EFD29A0C36799CCDC47512D1AEDF8_RuntimeMethod_var);
						NullCheck(L_32);
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
						L_34 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_32, L_33, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
						L_35 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_34, NULL);
						V_3 = L_35;
					}

IL_00a5_2:
					{
						// foreach (var pair in group) {
						RuntimeObject* L_36 = V_4;
						NullCheck(L_36);
						bool L_37;
						L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_36);
						if (L_37)
						{
							goto IL_0088_2;
						}
					}
					{
						goto IL_00bc_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00bc_1:
			{
				// smoothNormal.Normalize();
				Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_3), NULL);
				// foreach (var pair in group) {
				RuntimeObject* L_38 = V_2;
				NullCheck(L_38);
				RuntimeObject* L_39;
				L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::GetEnumerator() */, IEnumerable_1_t6519764FF9F2748F42E47AD4C9CB0128ED660B76_il2cpp_TypeInfo_var, L_38);
				V_4 = L_39;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00ef_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_40 = V_4;
							if (!L_40)
							{
								goto IL_00fa_1;
							}
						}
						{
							RuntimeObject* L_41 = V_4;
							NullCheck(L_41);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
						}

IL_00fa_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00e4_2;
					}

IL_00cd_2:
					{
						// foreach (var pair in group) {
						RuntimeObject* L_42 = V_4;
						NullCheck(L_42);
						KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E L_43;
						L_43 = InterfaceFuncInvoker0< KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>::get_Current() */, IEnumerator_1_t74EA0BDE56E2EC06DBC0D5E1876227691E642FF4_il2cpp_TypeInfo_var, L_42);
						V_6 = L_43;
						// smoothNormals[pair.Value] = smoothNormal;
						List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_44 = V_0;
						int32_t L_45;
						L_45 = KeyValuePair_2_get_Value_mA8A3212B2D6EFD29A0C36799CCDC47512D1AEDF8_inline((&V_6), KeyValuePair_2_get_Value_mA8A3212B2D6EFD29A0C36799CCDC47512D1AEDF8_RuntimeMethod_var);
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_3;
						NullCheck(L_44);
						List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C(L_44, L_45, L_46, List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
					}

IL_00e4_2:
					{
						// foreach (var pair in group) {
						RuntimeObject* L_47 = V_4;
						NullCheck(L_47);
						bool L_48;
						L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_47);
						if (L_48)
						{
							goto IL_00cd_2;
						}
					}
					{
						goto IL_00fb_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00fb_1:
			{
				// foreach (var group in groups) {
				RuntimeObject* L_49 = V_1;
				NullCheck(L_49);
				bool L_50;
				L_50 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_49);
				if (L_50)
				{
					goto IL_0065_1;
				}
			}
			{
				goto IL_0112;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0112:
	{
		// return smoothNormals;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_51 = V_0;
		return L_51;
	}
}
// System.Void Outline::CombineSubmeshes(UnityEngine.Mesh,UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_CombineSubmeshes_mADF0C4B19681CE606B33ADCAB4ED70B85BB8C6C2 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___1_materials, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (mesh.subMeshCount == 1) {
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_mesh;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (mesh.subMeshCount > materials.Length) {
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___0_mesh;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_2, NULL);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = ___1_materials;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// mesh.subMeshCount++;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = ___0_mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28(L_6, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		// mesh.SetTriangles(mesh.triangles, mesh.subMeshCount - 1);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = ___0_mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10 = ___0_mesh;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_10, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = ___0_mesh;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_12, NULL);
		NullCheck(L_9);
		Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258(L_9, L_11, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), NULL);
		// }
		return;
	}
}
// System.Void Outline::UpdateMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_UpdateMaterialProperties_mF30D42EDEEB92EB4C0E822B20D2CF0112012C6B7 (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// outlineFillMaterial.SetColor("_OutlineColor", outlineColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___outlineFillMaterial_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___outlineColor_6;
		NullCheck(L_0);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_0, _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, L_1, NULL);
		// switch (outlineMode) {
		int32_t L_2 = __this->___outlineMode_5;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_00ba;
			}
			case 3:
			{
				goto IL_00fb;
			}
			case 4:
			{
				goto IL_013c;
			}
		}
	}
	{
		return;
	}

IL_0038:
	{
		// outlineMaskMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___outlineMaskMaterial_12;
		NullCheck(L_4);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_4, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (8.0f), NULL);
		// outlineFillMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___outlineFillMaterial_13;
		NullCheck(L_5);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_5, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (8.0f), NULL);
		// outlineFillMaterial.SetFloat("_OutlineWidth", outlineWidth);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___outlineFillMaterial_13;
		float L_7 = __this->___outlineWidth_7;
		NullCheck(L_6);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_6, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, L_7, NULL);
		// break;
		return;
	}

IL_0079:
	{
		// outlineMaskMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___outlineMaskMaterial_12;
		NullCheck(L_8);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_8, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (8.0f), NULL);
		// outlineFillMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.LessEqual);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___outlineFillMaterial_13;
		NullCheck(L_9);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_9, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (4.0f), NULL);
		// outlineFillMaterial.SetFloat("_OutlineWidth", outlineWidth);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___outlineFillMaterial_13;
		float L_11 = __this->___outlineWidth_7;
		NullCheck(L_10);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_10, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, L_11, NULL);
		// break;
		return;
	}

IL_00ba:
	{
		// outlineMaskMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___outlineMaskMaterial_12;
		NullCheck(L_12);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_12, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (8.0f), NULL);
		// outlineFillMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Greater);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___outlineFillMaterial_13;
		NullCheck(L_13);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_13, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (5.0f), NULL);
		// outlineFillMaterial.SetFloat("_OutlineWidth", outlineWidth);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___outlineFillMaterial_13;
		float L_15 = __this->___outlineWidth_7;
		NullCheck(L_14);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_14, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, L_15, NULL);
		// break;
		return;
	}

IL_00fb:
	{
		// outlineMaskMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.LessEqual);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___outlineMaskMaterial_12;
		NullCheck(L_16);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_16, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (4.0f), NULL);
		// outlineFillMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___outlineFillMaterial_13;
		NullCheck(L_17);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_17, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (8.0f), NULL);
		// outlineFillMaterial.SetFloat("_OutlineWidth", outlineWidth);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___outlineFillMaterial_13;
		float L_19 = __this->___outlineWidth_7;
		NullCheck(L_18);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_18, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, L_19, NULL);
		// break;
		return;
	}

IL_013c:
	{
		// outlineMaskMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.LessEqual);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___outlineMaskMaterial_12;
		NullCheck(L_20);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_20, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (4.0f), NULL);
		// outlineFillMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Greater);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___outlineFillMaterial_13;
		NullCheck(L_21);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_21, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (5.0f), NULL);
		// outlineFillMaterial.SetFloat("_OutlineWidth", 0f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___outlineFillMaterial_13;
		NullCheck(L_22);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_22, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Outline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline__ctor_m1E041E48D42F3C9EA22C681A23D851E6E7EAEA8D (Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5608C61ED638AA1899CDC9F34B3F83742C6D676A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCE9A346DD934EB013274F9CABE1C5B887A7B7D47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Color outlineColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___outlineColor_6 = L_0;
		// private float outlineWidth = 2f;
		__this->___outlineWidth_7 = (2.0f);
		// private List<Mesh> bakeKeys = new List<Mesh>();
		List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* L_1 = (List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*)il2cpp_codegen_object_new(List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCE9A346DD934EB013274F9CABE1C5B887A7B7D47(L_1, List_1__ctor_mCE9A346DD934EB013274F9CABE1C5B887A7B7D47_RuntimeMethod_var);
		__this->___bakeKeys_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bakeKeys_9), (void*)L_1);
		// private List<ListVector3> bakeValues = new List<ListVector3>();
		List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303* L_2 = (List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303*)il2cpp_codegen_object_new(List_1_tE5EEE6BCC896453A3D3B2C3482962F63DADAF303_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m5608C61ED638AA1899CDC9F34B3F83742C6D676A(L_2, List_1__ctor_m5608C61ED638AA1899CDC9F34B3F83742C6D676A_RuntimeMethod_var);
		__this->___bakeValues_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bakeValues_10), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Outline::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline__cctor_mE62B624C6B645E1C7A787A771F77AF01DA1253A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mFA95004A6015F536FEA661EBD61544C36CA69235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static HashSet<Mesh> registeredMeshes = new HashSet<Mesh>();
		HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4* L_0 = (HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4*)il2cpp_codegen_object_new(HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_mFA95004A6015F536FEA661EBD61544C36CA69235(L_0, HashSet_1__ctor_mFA95004A6015F536FEA661EBD61544C36CA69235_RuntimeMethod_var);
		((Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_StaticFields*)il2cpp_codegen_static_fields_for(Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_il2cpp_TypeInfo_var))->___registeredMeshes_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_StaticFields*)il2cpp_codegen_static_fields_for(Outline_tA78D70438690321A2C0560EA51E59BF4A2F7A882_il2cpp_TypeInfo_var))->___registeredMeshes_4), (void*)L_0);
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
// System.Void Outline/ListVector3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListVector3__ctor_m308616F10D2AA37684228F8BE647484DC2935115 (ListVector3_tDA277D82FE29F3AE88DB67F185D37617345C32D7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Outline/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m30BBCCA08360728317739E46D196255FA072F28E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2* L_0 = (U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2*)il2cpp_codegen_object_new(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE194CFEDCF972E2B90ADB13465F0FF288715508D(L_0, NULL);
		((U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Outline/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE194CFEDCF972E2B90ADB13465F0FF288715508D (U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32> Outline/<>c::<SmoothNormals>b__30_0(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E U3CU3Ec_U3CSmoothNormalsU3Eb__30_0_m505FC74F9B4AC168013E5DD5BA78003EF5C0352B (U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vertex, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m4DB4716A722543BA1B924822286F593CB4AE6368_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var groups = mesh.vertices.Select((vertex, index) => new KeyValuePair<Vector3, int>(vertex, index)).GroupBy(pair => pair.Key);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vertex;
		int32_t L_1 = ___1_index;
		KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E L_2;
		memset((&L_2), 0, sizeof(L_2));
		KeyValuePair_2__ctor_m4DB4716A722543BA1B924822286F593CB4AE6368((&L_2), L_0, L_1, /*hidden argument*/KeyValuePair_2__ctor_m4DB4716A722543BA1B924822286F593CB4AE6368_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.Vector3 Outline/<>c::<SmoothNormals>b__30_1(System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec_U3CSmoothNormalsU3Eb__30_1_m3B53A1B0677BDAA95C75BB73B1BEA77438D26493 (U3CU3Ec_tD594DC1F85AFF933984045CC6C7068AFCBE6D7B2* __this, KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E ___0_pair, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mBDC505D7DDCEB660D97DBCEBC16A3D8A32F57352_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var groups = mesh.vertices.Select((vertex, index) => new KeyValuePair<Vector3, int>(vertex, index)).GroupBy(pair => pair.Key);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = KeyValuePair_2_get_Key_mBDC505D7DDCEB660D97DBCEBC16A3D8A32F57352_inline((&___0_pair), KeyValuePair_2_get_Key_mBDC505D7DDCEB660D97DBCEBC16A3D8A32F57352_RuntimeMethod_var);
		return L_0;
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
// System.Void Coin::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin_Start_mA073768C06B75276A262C088D118DEEE9F40991E (Coin_t6EC3724A41D53D737B499E377089217F0190C268* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Coin::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin_Update_mD81A56D3C82C2FF349BB57ED6C8B95699F2E5908 (Coin_t6EC3724A41D53D737B499E377089217F0190C268* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Coin::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin_FixedUpdate_mB68618169D6029CBB2CA2833A9D7E255411E7B96 (Coin_t6EC3724A41D53D737B499E377089217F0190C268* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0, speed_rotate, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___speed_rotate_4;
		NullCheck(L_0);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, (0.0f), L_1, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Coin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin__ctor_mFEAAC42C1DAABB5CCCF4B39FCDBC5D0B0B8A183D (Coin_t6EC3724A41D53D737B499E377089217F0190C268* __this, const RuntimeMethod* method) 
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
// System.Void MoveAlongTrack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAlongTrack_Update_m1435530F13B60994337862362ED5E87A95177533 (MoveAlongTrack_t3590BA451EB58B04B710B9703B3E31CD3EE7C976* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.back * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void MoveAlongTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAlongTrack__ctor_m0B0E7BC93691A1DF8E37D5EF6499FF2DB49F3F73 (MoveAlongTrack_t3590BA451EB58B04B710B9703B3E31CD3EE7C976* __this, const RuntimeMethod* method) 
{
	{
		// float speed = 8.0f;
		__this->___speed_4 = (8.0f);
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
// System.Void ObstacleSpawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleSpawner_OnEnable_m8AC6D853B00B74626047D5984320FBEC162C8ABE (ObstacleSpawner_t447F43700055F1200E1A194844B011876E7362FC* __this, const RuntimeMethod* method) 
{
	{
		// timeToNextSpawn = spawnInterval;
		float L_0 = __this->___spawnInterval_5;
		__this->___timeToNextSpawn_6 = L_0;
		// }
		return;
	}
}
// System.Void ObstacleSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleSpawner_Update_m3266463E77433CD430E2B948372FABBC4E652D0B (ObstacleSpawner_t447F43700055F1200E1A194844B011876E7362FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeToNextSpawn -= Time.deltaTime;
		float L_0 = __this->___timeToNextSpawn_6;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeToNextSpawn_6 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if(timeToNextSpawn < 0)
		float L_2 = __this->___timeToNextSpawn_6;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// Instantiate(RandomObstacle(), spawnTransform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = ObstacleSpawner_RandomObstacle_m6B1A900905CA7BB3014FD60C5949BBFBCD36F9DB(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___spawnTransform_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// timeToNextSpawn = spawnInterval;
		float L_8 = __this->___spawnInterval_5;
		__this->___timeToNextSpawn_6 = L_8;
	}

IL_0047:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ObstacleSpawner::RandomObstacle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObstacleSpawner_RandomObstacle_m6B1A900905CA7BB3014FD60C5949BBFBCD36F9DB (ObstacleSpawner_t447F43700055F1200E1A194844B011876E7362FC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// int max = obstacleTypes.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___obstacleTypes_4;
		NullCheck(L_0);
		// float t = Random.value;
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		V_0 = L_1;
		// int randomIndex = (int)((max) * t + 0.5f);
		float L_2 = V_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1))), L_2)), (0.5f))));
		// return obstacleTypes[randomIndex];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___obstacleTypes_4;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.Void ObstacleSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleSpawner__ctor_mD0E52BA33EF3B1B5E8235A469E089DA17CC63C94 (ObstacleSpawner_t447F43700055F1200E1A194844B011876E7362FC* __this, const RuntimeMethod* method) 
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
// System.Void Saber::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saber_OnEnable_m429207B37933C59384681C9B56DE0B2FC8156667 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidBody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidBody_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidBody_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Saber::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saber_Start_m25201D71B2A2563EECB34C14F8E1C10F713FE557 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) 
{
	{
		// lastPosition = GetSaberEndPosition();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Saber_GetSaberEndPosition_m83A535DE0FC1C6EF17937A788BDD04A0B384BAE1(__this, NULL);
		__this->___lastPosition_7 = L_0;
		// velocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___velocity_6 = L_1;
		// }
		return;
	}
}
// System.Void Saber::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saber_Update_mA04DC7AC7AE5B28545FEFD4D419DF611C70BEEE6 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) 
{
	{
		// UpdateVelocity();
		Saber_UpdateVelocity_mEE59532C8B8509304640AA4FE014FB0324D208BA(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Saber::GetStrikeDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Saber_GetStrikeDirection_m5313A7DE41E0E7F96B83B1D8D625213D1BAC75F9 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_1 = NULL;
	{
		// Vector3 strikeDirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// strikeDirection.x = (Mathf.Abs(velocity.x) > strikeSpeedThreshold) ? Mathf.Sign(velocity.x) : 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___velocity_6);
		float L_2 = L_1->___x_2;
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = __this->___strikeSpeedThreshold_8;
		G_B1_0 = (&V_0);
		if ((((float)L_3) > ((float)L_4)))
		{
			G_B2_0 = (&V_0);
			goto IL_0027;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_0037;
	}

IL_0027:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___velocity_6);
		float L_6 = L_5->___x_2;
		float L_7;
		L_7 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0037:
	{
		G_B3_1->___x_2 = G_B3_0;
		// strikeDirection.y = (Mathf.Abs(velocity.y) > strikeSpeedThreshold) ? Mathf.Sign(velocity.y) : 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___velocity_6);
		float L_9 = L_8->___y_3;
		float L_10;
		L_10 = fabsf(L_9);
		float L_11 = __this->___strikeSpeedThreshold_8;
		G_B4_0 = (&V_0);
		if ((((float)L_10) > ((float)L_11)))
		{
			G_B5_0 = (&V_0);
			goto IL_005d;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_006d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___velocity_6);
		float L_13 = L_12->___y_3;
		float L_14;
		L_14 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_13, NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
	}

IL_006d:
	{
		G_B6_1->___y_3 = G_B6_0;
		// return strikeDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		return L_15;
	}
}
// System.Void Saber::UpdateVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saber_UpdateVelocity_mEE59532C8B8509304640AA4FE014FB0324D208BA (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 deltaP = GetSaberEndPosition() - lastPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Saber_GetSaberEndPosition_m83A535DE0FC1C6EF17937A788BDD04A0B384BAE1(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___lastPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// velocity = deltaP / Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_3, L_4, NULL);
		__this->___velocity_6 = L_5;
		// lastPosition = GetSaberEndPosition();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Saber_GetSaberEndPosition_m83A535DE0FC1C6EF17937A788BDD04A0B384BAE1(__this, NULL);
		__this->___lastPosition_7 = L_6;
		// }
		return;
	}
}
// UnityEngine.Vector3 Saber::GetSaberEndPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Saber_GetSaberEndPosition_m83A535DE0FC1C6EF17937A788BDD04A0B384BAE1 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) 
{
	{
		// return saberEnd.transform.position;
		SaberEnd_tA5BEF32E1AEAF609F4A0C9D88F7DB0177AC4D6E8* L_0 = __this->___saberEnd_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		return L_2;
	}
}
// System.Void Saber::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saber_OnCollisionEnter_mEE9D11C437976C272AB9A72C68C3F66991A97D82 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStrikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274_m37A0C6ED88C802699248363C289182999F16EFF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* V_0 = NULL;
	{
		// Strikeable struckObject = collision.collider.GetComponent<Strikeable>();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_0, NULL);
		NullCheck(L_1);
		Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* L_2;
		L_2 = Component_GetComponent_TisStrikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274_m37A0C6ED88C802699248363C289182999F16EFF7(L_1, Component_GetComponent_TisStrikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274_m37A0C6ED88C802699248363C289182999F16EFF7_RuntimeMethod_var);
		V_0 = L_2;
		// if(struckObject != null)
		Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// struckObject.GetStruck(GetStrikeDirection());
		Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Saber_GetStrikeDirection_m5313A7DE41E0E7F96B83B1D8D625213D1BAC75F9(__this, NULL);
		NullCheck(L_5);
		Strikeable_GetStruck_mBCD7D6537962DAA47571A63C59A7623E7B4E9F87(L_5, L_6, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Saber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saber__ctor_mE8E122F9452454036AFDFD6E46F1F33D0DA26812 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) 
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
// System.Void SaberEnd::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaberEnd_Start_m46B1F26A498D837546DA126EB0934F356502CD70 (SaberEnd_tA5BEF32E1AEAF609F4A0C9D88F7DB0177AC4D6E8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SaberEnd::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaberEnd_Update_m75B9F9228BB9FE00A0442E2A5D894ACC224990A4 (SaberEnd_tA5BEF32E1AEAF609F4A0C9D88F7DB0177AC4D6E8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SaberEnd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaberEnd__ctor_m6CCCE0486ABFDB3A8ED6B96CAE40213D6FDF9ECE (SaberEnd_tA5BEF32E1AEAF609F4A0C9D88F7DB0177AC4D6E8* __this, const RuntimeMethod* method) 
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
// System.Void Strikeable::GetStruck(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Strikeable_GetStruck_mBCD7D6537962DAA47571A63C59A7623E7B4E9F87 (Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_strikeDirection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ECAB0ECA184D875BF6859B983F81D0BFA793E90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37ACCD7CE705FE55592FBC8D72AAC84BBBA9902F);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (strikeDirection == correctStrikeDirection)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_strikeDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___correctStrikeDirection_4;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// Crumble();
		Strikeable_Crumble_mC8D8720EDBD13C24265BBD5F1661305423AF4A00(__this, NULL);
		return;
	}

IL_0015:
	{
		// Debug.Log("Struck in direction: " + strikeDirection + ", correct direction: " + correctStrikeDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_strikeDirection;
		V_0 = L_3;
		String_t* L_4;
		L_4 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___correctStrikeDirection_4;
		V_0 = L_5;
		String_t* L_6;
		L_6 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral37ACCD7CE705FE55592FBC8D72AAC84BBBA9902F, L_4, _stringLiteral0ECAB0ECA184D875BF6859B983F81D0BFA793E90, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// }
		return;
	}
}
// System.Void Strikeable::Crumble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Strikeable_Crumble_mC8D8720EDBD13C24265BBD5F1661305423AF4A00 (Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Strikeable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Strikeable__ctor_m997CFC76A5D2161C40FA663F61D414D6F8C442E2 (Strikeable_tF982E6D7C5B786DB1A96C296C59029AF3F4E9274* __this, const RuntimeMethod* method) 
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
// System.Void SceneTransition::ChangeScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_ChangeScene_m0DBD39D7AA6EFE0E127C7FABEC455B4509EB27C6 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneIndex);
		int32_t L_0 = ___0_sceneIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition__ctor_m6FEBED7A92C4C5A3ED76C9251DC10A680690B5E5 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
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
// System.Void ToggleObject::ToggleTargetObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleObject_ToggleTargetObject_m3015CE52898B58DEE246CB9E0B0EAC6CD34A93B8 (ToggleObject_tE8456EA8F73CC2D0118BB0DF057077F82B60210E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_toggleTarget, const RuntimeMethod* method) 
{
	{
		// toggleTarget.SetActive(!toggleTarget.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_toggleTarget;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_toggleTarget;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void ToggleObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleObject__ctor_mDEC6AB8200C0D28EF417E6E713A9804BB1647782 (ToggleObject_tE8456EA8F73CC2D0118BB0DF057077F82B60210E* __this, const RuntimeMethod* method) 
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
// System.Void Player_controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_controller_Start_m07F4F6507510C1457F9A07C0533BD10B2ADE321E (Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Player_controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_controller_Update_mE7BD5D13C51AE1DCD5F1CC1CCDE93B03A06B5A32 (Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(transform.position.y <= -5.0f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) <= ((float)(-5.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Player_controller::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_controller_OnTriggerEnter_mF5C92643B0D8516B1C3D3595285677F473D3592D (Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral850EF8D3F58F6EDEC669035503FE3699C8F0BE48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD823BBDA7735F84381B96AAC509BC302E165768);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Coin")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// score++;
		int32_t L_3 = __this->___score_5;
		__this->___score_5 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// other.gameObject.SetActive(false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___0_other;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_002c:
	{
		// if(other.tag == "Finish_line")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___0_other;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral850EF8D3F58F6EDEC669035503FE3699C8F0BE48, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.Log("Finish Line");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDD823BBDA7735F84381B96AAC509BC302E165768, NULL);
		// finish_stage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___finish_stage_4;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Int32 Player_controller::current_score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_controller_current_score_m8E91208AA2195462AEBA3F96944593A0E51D590B (Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14* __this, const RuntimeMethod* method) 
{
	{
		// return score;
		int32_t L_0 = __this->___score_5;
		return L_0;
	}
}
// System.Void Player_controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_controller__ctor_mE4571151ACAB142D642B21C2A857E64093B6DDF3 (Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14* __this, const RuntimeMethod* method) 
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
// System.Void Score_text::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_text_Start_m10FA5BAADB3C75CABEE8A916CEA8924E945502FC (Score_text_t434ED21512BF20DBE4F836765549D503F30A3333* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Score_text::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_text_Update_m620F7C73EDE9A2778B0853E38E2D52875E37B8CA (Score_text_t434ED21512BF20DBE4F836765549D503F30A3333* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14_m4B8753764A9061D42766F542F0984410BFE9C716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// current_score = player.GetComponent<Player_controller>().current_score();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_5;
		NullCheck(L_0);
		Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14* L_1;
		L_1 = GameObject_GetComponent_TisPlayer_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14_m4B8753764A9061D42766F542F0984410BFE9C716(L_0, GameObject_GetComponent_TisPlayer_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14_m4B8753764A9061D42766F542F0984410BFE9C716_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Player_controller_current_score_m8E91208AA2195462AEBA3F96944593A0E51D590B_inline(L_1, NULL);
		__this->___current_score_6 = L_2;
		// score_text.text = "Score: " + current_score.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___score_text_4;
		int32_t* L_4 = (&__this->___current_score_6);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_5, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		// }
		return;
	}
}
// System.Void Score_text::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_text__ctor_m4CFFE51FB983EAC3D072A848428281AA677341D1 (Score_text_t434ED21512BF20DBE4F836765549D503F30A3333* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_controller_current_score_m8E91208AA2195462AEBA3F96944593A0E51D590B_inline (Player_controller_t72C5FD25D6DB32F0CBEFA9AFF52AA5B1F13FCD14* __this, const RuntimeMethod* method) 
{
	{
		// return score;
		int32_t L_0 = __this->___score_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_mA8A3212B2D6EFD29A0C36799CCDC47512D1AEDF8_gshared_inline (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Key_mBDC505D7DDCEB660D97DBCEBC16A3D8A32F57352_gshared_inline (KeyValuePair_2_t86D9DFA4534415620BC2CEBABBA2D34ED9CC169E* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
