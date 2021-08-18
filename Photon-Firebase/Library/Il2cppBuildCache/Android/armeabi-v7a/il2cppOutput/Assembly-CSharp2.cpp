#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t7570552C35A220ADB9666809E4D57E4C10713634;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>
struct Action_1_tD4E3131F8801005BF06CEBA1838FA49CBB285172;
// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t780FB18E67AC464A50B094492A06E11D0DF1D172;
// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_tAEEAE0CA76819C6105A7D08A17A11166D3071492;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`2<System.Boolean,System.String>
struct Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226;
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener
struct CaptureOverlayStateListener_t9DE6C20BD115A79BA44E615E7255F06DB9E59E0F;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t2BF5C828331510A60F01770EDA23C238D9AE8057;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_t77B961C60C3D2BD1A9D9382BB753022A4AADE677;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_t8C37544FF1503E97471C78A161E0B8B1E5B54EA4;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_tA36CDA40256B599478F8269F31F083BF577CD3C2;
// UnityEngine.SocialPlatforms.IScore
struct IScore_tE3BDDCDC8FB888BD6AF13EE00EF6AE225DDF2B3B;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43;
// GooglePlayGames.PlayGamesAchievement
struct PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC;
// GooglePlayGames.PlayGamesLeaderboard
struct PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F;
// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4;
// PlayerNetwork
struct PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724;
// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5;
// Ragdoll
struct Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91;
// GooglePlayGames.ReportProgress
struct ReportProgress_tDB0B195833B4D0F97BF3A363EAE3ED60729F4251;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// System.String
struct String_t;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// ToolData
struct ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// Vibration
struct Vibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener
struct OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener
struct OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1;
// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy
struct OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D;
// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26;
// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t150D29E7B0A91B4429E8E03207C1D0B60D29C143;
// GooglePlayGames.PlayGamesPlatform/<>c
struct U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t684AD2B7D17BC4B3280BB0A8C56617AAE7FBE3F7;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t6B06D770672F582CF8229A1F66B5E64B8280A64F;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t7D78215E69AC13544E46050D9799EF7296ABDF75;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_tC90D0336F3B473DD7832FF49C6F7F28E44207057;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t293E38584D2A6B4BB58792D4BB9704AF87B46297;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass54_0
struct U3CU3Ec__DisplayClass54_0_t2C1C0AEB70F28FE12EB9AB1949982C5F687C7D8B;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_tB601FA13744A693A4BDBA5571C84943748DF75E4;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t9DFEEEB531D2C725E083DAEF4BF8420F7FC344DE;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass71_0
struct U3CU3Ec__DisplayClass71_0_t1813507FF5EADFCDC442ADB7974D4FEFB93D3D02;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass83_0
struct U3CU3Ec__DisplayClass83_0_tDA034E050CF988B317ECCBFECC6464B9A24B7FF8;
// GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23
struct U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016;
// PlayerNetwork/<DetectEnemy>d__35
struct U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9;
// PlayerNetwork/<FogDelay>d__34
struct U3CFogDelayU3Ed__34_t92184A2A8B57330D7AB094270EB5B9E5DB09BAAB;
// PlayerNetwork/<HurtImg>d__28
struct U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6;
// Ragdoll/<DropRagdoll_Co>d__5
struct U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354;
// ToolData/<ClearDestory_IE>d__34
struct U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2;
// ToolData/<btnTimer>d__28
struct U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4;
// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB;
// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaptureOverlayStateListener_t9DE6C20BD115A79BA44E615E7255F06DB9E59E0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayGamesClient_tA36CDA40256B599478F8269F31F083BF577CD3C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInStatus_t8AB2FD9416400CA43D65FC1F4217E509CE05D968_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3C7000ACF0EB48C1458817E59DD90219ED2B97;
IL2CPP_EXTERN_C String_t* _stringLiteral24278202528A13F91A7E8306203F176C630AAF51;
IL2CPP_EXTERN_C String_t* _stringLiteral2F68AE3E326214C34B37D67806E67D572E7F9947;
IL2CPP_EXTERN_C String_t* _stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71;
IL2CPP_EXTERN_C String_t* _stringLiteral39A773B5E937C1EA9E92214B1255A7553498ED48;
IL2CPP_EXTERN_C String_t* _stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral4F159651BB274F35A4016D49CAFAEFBF01496CB0;
IL2CPP_EXTERN_C String_t* _stringLiteral561E871CE42CF20E1FB60AA8B6941D7D0B7B9466;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6669BAAD37B7226E250B52C3705FCEE60C26D8;
IL2CPP_EXTERN_C String_t* _stringLiteral9D57A629D6E7F8930979EC2AF07A919C72FEEE0E;
IL2CPP_EXTERN_C String_t* _stringLiteralB823F51FA08DCBD192B331D861F6AD3669FDFB59;
IL2CPP_EXTERN_C String_t* _stringLiteralBD066E42B63E30EFFD3D9F2C9C79629108906EC6;
IL2CPP_EXTERN_C String_t* _stringLiteralC1003F25B0B39EA0A70315465C29B77F91F1AA46;
IL2CPP_EXTERN_C String_t* _stringLiteralC63555F5631A509A767F8CAE7C637344AE34C6D2;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C48774A0B59B21ACDD799A6675B25C3C8DDC51;
IL2CPP_EXTERN_C String_t* _stringLiteralC92578BDC42DAC206202E3F97935E34FD1106EAC;
IL2CPP_EXTERN_C String_t* _stringLiteralCE4B0E2541EDBBB3C6491A2744BB22061C9DD7BD;
IL2CPP_EXTERN_C String_t* _stringLiteralCE92B3B0982727A84D8DF8E6115B5FCC5E335A33;
IL2CPP_EXTERN_C String_t* _stringLiteralF16D4694D202A12DE193813F4FF291AA003B00DB;
IL2CPP_EXTERN_C String_t* _stringLiteralF52A7F41AA0A7805139481921965C616D126D7F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF6BB44F4BC9F8D1D63EFDF77186766035805DAAF;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m09A2BB65EE7BC55D17B7CA3B91507DC1E688A084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4D22D4BF4A7C54B4ED2878B61E89577070B4866C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m237B2A62251C7CD4622DF9B2504C1D25BA77CC6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408_mE900AA8E8E7FF1B8B2F888CAF7143DFB6ADABCCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearDestory_IEU3Ed__34_System_Collections_IEnumerator_Reset_m6CE1B63A1578B79AF7385F63F0C46EA7E2B49AA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDetectEnemyU3Ed__35_System_Collections_IEnumerator_Reset_m708020D29DE4C92AAC2B6D2BC865525249F2D937_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDropRagdoll_CoU3Ed__5_System_Collections_IEnumerator_Reset_mAC84F3807FAC7409BCBF7F8F1C611355A920BC71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFogDelayU3Ed__34_System_Collections_IEnumerator_Reset_mCFDD3BFF2163BF1BD1B4FDECEE8CBA8BEF5289EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHurtImgU3Ed__28_System_Collections_IEnumerator_Reset_m80B0326F168D4EFE52099E358A0EBB87D81B2202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mC2EAA89EB4670EF602DD77F282D50C38466E6E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CAuthenticateU3Eb__5_m86D14AB77710CF4EC079744202286778AD774F31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CbtnTimerU3Ed__28_System_Collections_IEnumerator_Reset_mD1F793DFB11A8795049843853D5DEC0EC46A4CE2_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226;
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1;
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayerStats::mValid
	bool ___mValid_1;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfPurchases
	int32_t ___mNumberOfPurchases_2;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mAvgSessionLength
	float ___mAvgSessionLength_3;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mDaysSinceLastPlayed
	int32_t ___mDaysSinceLastPlayed_4;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfSessions
	int32_t ___mNumberOfSessions_5;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSessPercentile
	float ___mSessPercentile_6;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendPercentile
	float ___mSpendPercentile_7;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendProbability
	float ___mSpendProbability_8;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mChurnProbability
	float ___mChurnProbability_9;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mHighSpenderProbability
	float ___mHighSpenderProbability_10;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mTotalSpendNext28Days
	float ___mTotalSpendNext28Days_11;

public:
	inline static int32_t get_offset_of_mValid_1() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mValid_1)); }
	inline bool get_mValid_1() const { return ___mValid_1; }
	inline bool* get_address_of_mValid_1() { return &___mValid_1; }
	inline void set_mValid_1(bool value)
	{
		___mValid_1 = value;
	}

	inline static int32_t get_offset_of_mNumberOfPurchases_2() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mNumberOfPurchases_2)); }
	inline int32_t get_mNumberOfPurchases_2() const { return ___mNumberOfPurchases_2; }
	inline int32_t* get_address_of_mNumberOfPurchases_2() { return &___mNumberOfPurchases_2; }
	inline void set_mNumberOfPurchases_2(int32_t value)
	{
		___mNumberOfPurchases_2 = value;
	}

	inline static int32_t get_offset_of_mAvgSessionLength_3() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mAvgSessionLength_3)); }
	inline float get_mAvgSessionLength_3() const { return ___mAvgSessionLength_3; }
	inline float* get_address_of_mAvgSessionLength_3() { return &___mAvgSessionLength_3; }
	inline void set_mAvgSessionLength_3(float value)
	{
		___mAvgSessionLength_3 = value;
	}

	inline static int32_t get_offset_of_mDaysSinceLastPlayed_4() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mDaysSinceLastPlayed_4)); }
	inline int32_t get_mDaysSinceLastPlayed_4() const { return ___mDaysSinceLastPlayed_4; }
	inline int32_t* get_address_of_mDaysSinceLastPlayed_4() { return &___mDaysSinceLastPlayed_4; }
	inline void set_mDaysSinceLastPlayed_4(int32_t value)
	{
		___mDaysSinceLastPlayed_4 = value;
	}

	inline static int32_t get_offset_of_mNumberOfSessions_5() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mNumberOfSessions_5)); }
	inline int32_t get_mNumberOfSessions_5() const { return ___mNumberOfSessions_5; }
	inline int32_t* get_address_of_mNumberOfSessions_5() { return &___mNumberOfSessions_5; }
	inline void set_mNumberOfSessions_5(int32_t value)
	{
		___mNumberOfSessions_5 = value;
	}

	inline static int32_t get_offset_of_mSessPercentile_6() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mSessPercentile_6)); }
	inline float get_mSessPercentile_6() const { return ___mSessPercentile_6; }
	inline float* get_address_of_mSessPercentile_6() { return &___mSessPercentile_6; }
	inline void set_mSessPercentile_6(float value)
	{
		___mSessPercentile_6 = value;
	}

	inline static int32_t get_offset_of_mSpendPercentile_7() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mSpendPercentile_7)); }
	inline float get_mSpendPercentile_7() const { return ___mSpendPercentile_7; }
	inline float* get_address_of_mSpendPercentile_7() { return &___mSpendPercentile_7; }
	inline void set_mSpendPercentile_7(float value)
	{
		___mSpendPercentile_7 = value;
	}

	inline static int32_t get_offset_of_mSpendProbability_8() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mSpendProbability_8)); }
	inline float get_mSpendProbability_8() const { return ___mSpendProbability_8; }
	inline float* get_address_of_mSpendProbability_8() { return &___mSpendProbability_8; }
	inline void set_mSpendProbability_8(float value)
	{
		___mSpendProbability_8 = value;
	}

	inline static int32_t get_offset_of_mChurnProbability_9() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mChurnProbability_9)); }
	inline float get_mChurnProbability_9() const { return ___mChurnProbability_9; }
	inline float* get_address_of_mChurnProbability_9() { return &___mChurnProbability_9; }
	inline void set_mChurnProbability_9(float value)
	{
		___mChurnProbability_9 = value;
	}

	inline static int32_t get_offset_of_mHighSpenderProbability_10() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mHighSpenderProbability_10)); }
	inline float get_mHighSpenderProbability_10() const { return ___mHighSpenderProbability_10; }
	inline float* get_address_of_mHighSpenderProbability_10() { return &___mHighSpenderProbability_10; }
	inline void set_mHighSpenderProbability_10(float value)
	{
		___mHighSpenderProbability_10 = value;
	}

	inline static int32_t get_offset_of_mTotalSpendNext28Days_11() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mTotalSpendNext28Days_11)); }
	inline float get_mTotalSpendNext28Days_11() const { return ___mTotalSpendNext28Days_11; }
	inline float* get_address_of_mTotalSpendNext28Days_11() { return &___mTotalSpendNext28Days_11; }
	inline void set_mTotalSpendNext28Days_11(float value)
	{
		___mTotalSpendNext28Days_11 = value;
	}
};

struct PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5_StaticFields
{
public:
	// System.Single GooglePlayGames.BasicApi.PlayerStats::UNSET_VALUE
	float ___UNSET_VALUE_0;

public:
	inline static int32_t get_offset_of_UNSET_VALUE_0() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5_StaticFields, ___UNSET_VALUE_0)); }
	inline float get_UNSET_VALUE_0() const { return ___UNSET_VALUE_0; }
	inline float* get_address_of_UNSET_VALUE_0() { return &___UNSET_VALUE_0; }
	inline void set_UNSET_VALUE_0(float value)
	{
		___UNSET_VALUE_0 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener
struct OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener::mListener
	RuntimeObject* ___mListener_0;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461, ___mListener_0)); }
	inline RuntimeObject* get_mListener_0() const { return ___mListener_0; }
	inline RuntimeObject** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(RuntimeObject* value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_0), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener
struct OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.Nearby.IMessageListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener::mListener
	RuntimeObject* ___mListener_0;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1, ___mListener_0)); }
	inline RuntimeObject* get_mListener_0() const { return ___mListener_0; }
	inline RuntimeObject** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(RuntimeObject* value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_0), (void*)value);
	}
};


// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mEnableSaveGames
	bool ___mEnableSaveGames_0;
	// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mScopes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___mScopes_1;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mHidePopups
	bool ___mHidePopups_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestEmail
	bool ___mRequestEmail_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestIdToken
	bool ___mRequestIdToken_6;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mAccountName
	String_t* ___mAccountName_7;

public:
	inline static int32_t get_offset_of_mEnableSaveGames_0() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mEnableSaveGames_0)); }
	inline bool get_mEnableSaveGames_0() const { return ___mEnableSaveGames_0; }
	inline bool* get_address_of_mEnableSaveGames_0() { return &___mEnableSaveGames_0; }
	inline void set_mEnableSaveGames_0(bool value)
	{
		___mEnableSaveGames_0 = value;
	}

	inline static int32_t get_offset_of_mScopes_1() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mScopes_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_mScopes_1() const { return ___mScopes_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_mScopes_1() { return &___mScopes_1; }
	inline void set_mScopes_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___mScopes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScopes_1), (void*)value);
	}

	inline static int32_t get_offset_of_mHidePopups_2() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mHidePopups_2)); }
	inline bool get_mHidePopups_2() const { return ___mHidePopups_2; }
	inline bool* get_address_of_mHidePopups_2() { return &___mHidePopups_2; }
	inline void set_mHidePopups_2(bool value)
	{
		___mHidePopups_2 = value;
	}

	inline static int32_t get_offset_of_mRequestAuthCode_3() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mRequestAuthCode_3)); }
	inline bool get_mRequestAuthCode_3() const { return ___mRequestAuthCode_3; }
	inline bool* get_address_of_mRequestAuthCode_3() { return &___mRequestAuthCode_3; }
	inline void set_mRequestAuthCode_3(bool value)
	{
		___mRequestAuthCode_3 = value;
	}

	inline static int32_t get_offset_of_mForceRefresh_4() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mForceRefresh_4)); }
	inline bool get_mForceRefresh_4() const { return ___mForceRefresh_4; }
	inline bool* get_address_of_mForceRefresh_4() { return &___mForceRefresh_4; }
	inline void set_mForceRefresh_4(bool value)
	{
		___mForceRefresh_4 = value;
	}

	inline static int32_t get_offset_of_mRequestEmail_5() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mRequestEmail_5)); }
	inline bool get_mRequestEmail_5() const { return ___mRequestEmail_5; }
	inline bool* get_address_of_mRequestEmail_5() { return &___mRequestEmail_5; }
	inline void set_mRequestEmail_5(bool value)
	{
		___mRequestEmail_5 = value;
	}

	inline static int32_t get_offset_of_mRequestIdToken_6() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mRequestIdToken_6)); }
	inline bool get_mRequestIdToken_6() const { return ___mRequestIdToken_6; }
	inline bool* get_address_of_mRequestIdToken_6() { return &___mRequestIdToken_6; }
	inline void set_mRequestIdToken_6(bool value)
	{
		___mRequestIdToken_6 = value;
	}

	inline static int32_t get_offset_of_mAccountName_7() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mAccountName_7)); }
	inline String_t* get_mAccountName_7() const { return ___mAccountName_7; }
	inline String_t** get_address_of_mAccountName_7() { return &___mAccountName_7; }
	inline void set_mAccountName_7(String_t* value)
	{
		___mAccountName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAccountName_7), (void*)value);
	}
};


// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::action
	RuntimeObject* ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26, ___action_0)); }
	inline RuntimeObject* get_action_0() const { return ___action_0; }
	inline RuntimeObject** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(RuntimeObject* value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t150D29E7B0A91B4429E8E03207C1D0B60D29C143  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass28_0::<>4__this
	PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D * ___U3CU3E4__this_0;
	// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats> GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass28_0::callback
	Action_2_t780FB18E67AC464A50B094492A06E11D0DF1D172 * ___callback_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_t150D29E7B0A91B4429E8E03207C1D0B60D29C143, ___U3CU3E4__this_0)); }
	inline PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_t150D29E7B0A91B4429E8E03207C1D0B60D29C143, ___callback_1)); }
	inline Action_2_t780FB18E67AC464A50B094492A06E11D0DF1D172 * get_callback_1() const { return ___callback_1; }
	inline Action_2_t780FB18E67AC464A50B094492A06E11D0DF1D172 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_2_t780FB18E67AC464A50B094492A06E11D0DF1D172 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c
struct U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C_StaticFields
{
public:
	// GooglePlayGames.PlayGamesPlatform/<>c GooglePlayGames.PlayGamesPlatform/<>c::<>9
	U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C * ___U3CU3E9_0;
	// System.Action`1<GooglePlayGames.BasicApi.SignInStatus> GooglePlayGames.PlayGamesPlatform/<>c::<>9__34_0
	Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * ___U3CU3E9__34_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C_StaticFields, ___U3CU3E9__34_0_1)); }
	inline Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * get_U3CU3E9__34_0_1() const { return ___U3CU3E9__34_0_1; }
	inline Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD ** get_address_of_U3CU3E9__34_0_1() { return &___U3CU3E9__34_0_1; }
	inline void set_U3CU3E9__34_0_1(Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * value)
	{
		___U3CU3E9__34_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_1), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t684AD2B7D17BC4B3280BB0A8C56617AAE7FBE3F7  : public RuntimeObject
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0::callback
	Action_1_tD4E3131F8801005BF06CEBA1838FA49CBB285172 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t684AD2B7D17BC4B3280BB0A8C56617AAE7FBE3F7, ___callback_0)); }
	inline Action_1_tD4E3131F8801005BF06CEBA1838FA49CBB285172 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tD4E3131F8801005BF06CEBA1838FA49CBB285172 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tD4E3131F8801005BF06CEBA1838FA49CBB285172 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t6B06D770672F582CF8229A1F66B5E64B8280A64F  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass32_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t6B06D770672F582CF8229A1F66B5E64B8280A64F, ___callback_0)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t7D78215E69AC13544E46050D9799EF7296ABDF75  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,System.String> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass33_0::callback
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t7D78215E69AC13544E46050D9799EF7296ABDF75, ___callback_0)); }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E  : public RuntimeObject
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.SignInStatus> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0::callback
	Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * ___callback_0;
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0::<>4__this
	PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * ___U3CU3E4__this_1;
	// System.Action`1<GooglePlayGames.BasicApi.SignInStatus> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0::<>9__5
	Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * ___U3CU3E9__5_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E, ___callback_0)); }
	inline Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * get_callback_0() const { return ___callback_0; }
	inline Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E, ___U3CU3E4__this_1)); }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E, ___U3CU3E9__5_2)); }
	inline Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * get_U3CU3E9__5_2() const { return ___U3CU3E9__5_2; }
	inline Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD ** get_address_of_U3CU3E9__5_2() { return &___U3CU3E9__5_2; }
	inline void set_U3CU3E9__5_2(Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * value)
	{
		___U3CU3E9__5_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_tC90D0336F3B473DD7832FF49C6F7F28E44207057  : public RuntimeObject
{
public:
	// System.Action`1<System.String> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::callback
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___callback_0;
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::<>4__this
	PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_tC90D0336F3B473DD7832FF49C6F7F28E44207057, ___callback_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_tC90D0336F3B473DD7832FF49C6F7F28E44207057, ___U3CU3E4__this_1)); }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t293E38584D2A6B4BB58792D4BB9704AF87B46297  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass48_0::achievementID
	String_t* ___achievementID_0;
	// System.Double GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass48_0::progress
	double ___progress_1;
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass48_0::<>4__this
	PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * ___U3CU3E4__this_2;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass48_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_3;

public:
	inline static int32_t get_offset_of_achievementID_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t293E38584D2A6B4BB58792D4BB9704AF87B46297, ___achievementID_0)); }
	inline String_t* get_achievementID_0() const { return ___achievementID_0; }
	inline String_t** get_address_of_achievementID_0() { return &___achievementID_0; }
	inline void set_achievementID_0(String_t* value)
	{
		___achievementID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___achievementID_0), (void*)value);
	}

	inline static int32_t get_offset_of_progress_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t293E38584D2A6B4BB58792D4BB9704AF87B46297, ___progress_1)); }
	inline double get_progress_1() const { return ___progress_1; }
	inline double* get_address_of_progress_1() { return &___progress_1; }
	inline void set_progress_1(double value)
	{
		___progress_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t293E38584D2A6B4BB58792D4BB9704AF87B46297, ___U3CU3E4__this_2)); }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t293E38584D2A6B4BB58792D4BB9704AF87B46297, ___callback_3)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_3() const { return ___callback_3; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass54_0
struct U3CU3Ec__DisplayClass54_0_t2C1C0AEB70F28FE12EB9AB1949982C5F687C7D8B  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass54_0::callback
	Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass54_0_t2C1C0AEB70F28FE12EB9AB1949982C5F687C7D8B, ___callback_0)); }
	inline Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_tB601FA13744A693A4BDBA5571C84943748DF75E4  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass55_0::callback
	Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_tB601FA13744A693A4BDBA5571C84943748DF75E4, ___callback_0)); }
	inline Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t9DFEEEB531D2C725E083DAEF4BF8420F7FC344DE  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::callback
	Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t9DFEEEB531D2C725E083DAEF4BF8420F7FC344DE, ___callback_0)); }
	inline Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass71_0
struct U3CU3Ec__DisplayClass71_0_t1813507FF5EADFCDC442ADB7974D4FEFB93D3D02  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass71_0::<>4__this
	PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * ___U3CU3E4__this_0;
	// UnityEngine.SocialPlatforms.ILeaderboard GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass71_0::board
	RuntimeObject* ___board_1;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass71_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_t1813507FF5EADFCDC442ADB7974D4FEFB93D3D02, ___U3CU3E4__this_0)); }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_board_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_t1813507FF5EADFCDC442ADB7974D4FEFB93D3D02, ___board_1)); }
	inline RuntimeObject* get_board_1() const { return ___board_1; }
	inline RuntimeObject** get_address_of_board_1() { return &___board_1; }
	inline void set_board_1(RuntimeObject* value)
	{
		___board_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_t1813507FF5EADFCDC442ADB7974D4FEFB93D3D02, ___callback_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_2() const { return ___callback_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass83_0
struct U3CU3Ec__DisplayClass83_0_tDA034E050CF988B317ECCBFECC6464B9A24B7FF8  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass83_0::<>4__this
	PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * ___U3CU3E4__this_0;
	// GooglePlayGames.PlayGamesLeaderboard GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass83_0::board
	PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B * ___board_1;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass83_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass83_0_tDA034E050CF988B317ECCBFECC6464B9A24B7FF8, ___U3CU3E4__this_0)); }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_board_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass83_0_tDA034E050CF988B317ECCBFECC6464B9A24B7FF8, ___board_1)); }
	inline PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B * get_board_1() const { return ___board_1; }
	inline PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B ** get_address_of_board_1() { return &___board_1; }
	inline void set_board_1(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B * value)
	{
		___board_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass83_0_tDA034E050CF988B317ECCBFECC6464B9A24B7FF8, ___callback_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_2() const { return ___callback_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23
struct U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016  : public RuntimeObject
{
public:
	// System.Int32 GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GooglePlayGames.PlayGamesUserProfile GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<>4__this
	PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016, ___U3CU3E4__this_2)); }
	inline PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016, ___U3CwwwU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// PlayerNetwork/<DetectEnemy>d__35
struct U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9  : public RuntimeObject
{
public:
	// System.Int32 PlayerNetwork/<DetectEnemy>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerNetwork/<DetectEnemy>d__35::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerNetwork PlayerNetwork/<DetectEnemy>d__35::<>4__this
	PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9, ___U3CU3E4__this_2)); }
	inline PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// PlayerNetwork/<FogDelay>d__34
struct U3CFogDelayU3Ed__34_t92184A2A8B57330D7AB094270EB5B9E5DB09BAAB  : public RuntimeObject
{
public:
	// System.Int32 PlayerNetwork/<FogDelay>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerNetwork/<FogDelay>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFogDelayU3Ed__34_t92184A2A8B57330D7AB094270EB5B9E5DB09BAAB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFogDelayU3Ed__34_t92184A2A8B57330D7AB094270EB5B9E5DB09BAAB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// PlayerNetwork/<HurtImg>d__28
struct U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6  : public RuntimeObject
{
public:
	// System.Int32 PlayerNetwork/<HurtImg>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerNetwork/<HurtImg>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerNetwork PlayerNetwork/<HurtImg>d__28::<>4__this
	PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6, ___U3CU3E4__this_2)); }
	inline PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Ragdoll/<DropRagdoll_Co>d__5
struct U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354  : public RuntimeObject
{
public:
	// System.Int32 Ragdoll/<DropRagdoll_Co>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ragdoll/<DropRagdoll_Co>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Ragdoll Ragdoll/<DropRagdoll_Co>d__5::<>4__this
	Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354, ___U3CU3E4__this_2)); }
	inline Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ToolData/<ClearDestory_IE>d__34
struct U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2  : public RuntimeObject
{
public:
	// System.Int32 ToolData/<ClearDestory_IE>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ToolData/<ClearDestory_IE>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ToolData ToolData/<ClearDestory_IE>d__34::<>4__this
	ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2, ___U3CU3E4__this_2)); }
	inline ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ToolData/<btnTimer>d__28
struct U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4  : public RuntimeObject
{
public:
	// System.Int32 ToolData/<btnTimer>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ToolData/<btnTimer>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ToolData ToolData/<btnTimer>d__28::<>4__this
	ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4, ___U3CU3E4__this_2)); }
	inline ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields
{
public:
	// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9
	U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * ___U3CU3E9_0;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_0
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___U3CU3E9__14_0_1;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_1
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___U3CU3E9__14_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9__14_1_2)); }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * get_U3CU3E9__14_1_2() const { return ___U3CU3E9__14_1_2; }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 ** get_address_of_U3CU3E9__14_1_2() { return &___U3CU3E9__14_1_2; }
	inline void set_U3CU3E9__14_1_2(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * value)
	{
		___U3CU3E9__14_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_1_2), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::<>4__this
	OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::lostEndpointId
	String_t* ___lostEndpointId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC, ___U3CU3E4__this_0)); }
	inline OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_lostEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC, ___lostEndpointId_1)); }
	inline String_t* get_lostEndpointId_1() const { return ___lostEndpointId_1; }
	inline String_t** get_address_of_lostEndpointId_1() { return &___lostEndpointId_1; }
	inline void set_lostEndpointId_1(String_t* value)
	{
		___lostEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lostEndpointId_1), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::<>4__this
	OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::remoteEndpointId
	String_t* ___remoteEndpointId_1;
	// System.Byte[] GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_2;
	// System.Boolean GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::isReliableMessage
	bool ___isReliableMessage_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5, ___U3CU3E4__this_0)); }
	inline OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5, ___remoteEndpointId_1)); }
	inline String_t* get_remoteEndpointId_1() const { return ___remoteEndpointId_1; }
	inline String_t** get_address_of_remoteEndpointId_1() { return &___remoteEndpointId_1; }
	inline void set_remoteEndpointId_1(String_t* value)
	{
		___remoteEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndpointId_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5, ___data_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_isReliableMessage_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5, ___isReliableMessage_3)); }
	inline bool get_isReliableMessage_3() const { return ___isReliableMessage_3; }
	inline bool* get_address_of_isReliableMessage_3() { return &___isReliableMessage_3; }
	inline void set_isReliableMessage_3(bool value)
	{
		___isReliableMessage_3 = value;
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::<>4__this
	OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::remoteEndpointId
	String_t* ___remoteEndpointId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB, ___U3CU3E4__this_0)); }
	inline OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB, ___remoteEndpointId_1)); }
	inline String_t* get_remoteEndpointId_1() const { return ___remoteEndpointId_1; }
	inline String_t** get_address_of_remoteEndpointId_1() { return &___remoteEndpointId_1; }
	inline void set_remoteEndpointId_1(String_t* value)
	{
		___remoteEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndpointId_1), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::<>4__this
	OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7 * ___U3CU3E4__this_0;
	// System.Int32 GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::overlayState
	int32_t ___overlayState_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4, ___U3CU3E4__this_0)); }
	inline OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_overlayState_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4, ___overlayState_1)); }
	inline int32_t get_overlayState_1() const { return ___overlayState_1; }
	inline int32_t* get_address_of_overlayState_1() { return &___overlayState_1; }
	inline void set_overlayState_1(int32_t value)
	{
		___overlayState_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 
{
public:
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;

public:
	inline static int32_t get_offset_of_mEndpointId_0() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mEndpointId_0)); }
	inline String_t* get_mEndpointId_0() const { return ___mEndpointId_0; }
	inline String_t** get_address_of_mEndpointId_0() { return &___mEndpointId_0; }
	inline void set_mEndpointId_0(String_t* value)
	{
		___mEndpointId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEndpointId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_1), (void*)value);
	}

	inline static int32_t get_offset_of_mServiceId_2() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mServiceId_2)); }
	inline String_t* get_mServiceId_2() const { return ___mServiceId_2; }
	inline String_t** get_address_of_mServiceId_2() { return &___mServiceId_2; }
	inline void set_mServiceId_2(String_t* value)
	{
		___mServiceId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mServiceId_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mEnableSavedGames
	bool ___mEnableSavedGames_1;
	// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mScopes
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___mScopes_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mHidePopups
	bool ___mHidePopups_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestEmail
	bool ___mRequestEmail_6;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestIdToken
	bool ___mRequestIdToken_7;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mAccountName
	String_t* ___mAccountName_8;

public:
	inline static int32_t get_offset_of_mEnableSavedGames_1() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mEnableSavedGames_1)); }
	inline bool get_mEnableSavedGames_1() const { return ___mEnableSavedGames_1; }
	inline bool* get_address_of_mEnableSavedGames_1() { return &___mEnableSavedGames_1; }
	inline void set_mEnableSavedGames_1(bool value)
	{
		___mEnableSavedGames_1 = value;
	}

	inline static int32_t get_offset_of_mScopes_2() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mScopes_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_mScopes_2() const { return ___mScopes_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_mScopes_2() { return &___mScopes_2; }
	inline void set_mScopes_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___mScopes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScopes_2), (void*)value);
	}

	inline static int32_t get_offset_of_mRequestAuthCode_3() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mRequestAuthCode_3)); }
	inline bool get_mRequestAuthCode_3() const { return ___mRequestAuthCode_3; }
	inline bool* get_address_of_mRequestAuthCode_3() { return &___mRequestAuthCode_3; }
	inline void set_mRequestAuthCode_3(bool value)
	{
		___mRequestAuthCode_3 = value;
	}

	inline static int32_t get_offset_of_mForceRefresh_4() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mForceRefresh_4)); }
	inline bool get_mForceRefresh_4() const { return ___mForceRefresh_4; }
	inline bool* get_address_of_mForceRefresh_4() { return &___mForceRefresh_4; }
	inline void set_mForceRefresh_4(bool value)
	{
		___mForceRefresh_4 = value;
	}

	inline static int32_t get_offset_of_mHidePopups_5() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mHidePopups_5)); }
	inline bool get_mHidePopups_5() const { return ___mHidePopups_5; }
	inline bool* get_address_of_mHidePopups_5() { return &___mHidePopups_5; }
	inline void set_mHidePopups_5(bool value)
	{
		___mHidePopups_5 = value;
	}

	inline static int32_t get_offset_of_mRequestEmail_6() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mRequestEmail_6)); }
	inline bool get_mRequestEmail_6() const { return ___mRequestEmail_6; }
	inline bool* get_address_of_mRequestEmail_6() { return &___mRequestEmail_6; }
	inline void set_mRequestEmail_6(bool value)
	{
		___mRequestEmail_6 = value;
	}

	inline static int32_t get_offset_of_mRequestIdToken_7() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mRequestIdToken_7)); }
	inline bool get_mRequestIdToken_7() const { return ___mRequestIdToken_7; }
	inline bool* get_address_of_mRequestIdToken_7() { return &___mRequestIdToken_7; }
	inline void set_mRequestIdToken_7(bool value)
	{
		___mRequestIdToken_7 = value;
	}

	inline static int32_t get_offset_of_mAccountName_8() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mAccountName_8)); }
	inline String_t* get_mAccountName_8() const { return ___mAccountName_8; }
	inline String_t** get_address_of_mAccountName_8() { return &___mAccountName_8; }
	inline void set_mAccountName_8(String_t* value)
	{
		___mAccountName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAccountName_8), (void*)value);
	}
};

struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_StaticFields
{
public:
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration::DefaultConfiguration
	PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  ___DefaultConfiguration_0;

public:
	inline static int32_t get_offset_of_DefaultConfiguration_0() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_StaticFields, ___DefaultConfiguration_0)); }
	inline PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  get_DefaultConfiguration_0() const { return ___DefaultConfiguration_0; }
	inline PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767 * get_address_of_DefaultConfiguration_0() { return &___DefaultConfiguration_0; }
	inline void set_DefaultConfiguration_0(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  value)
	{
		___DefaultConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mScopes_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mAccountName_8), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_marshaled_pinvoke
{
	int32_t ___mEnableSavedGames_1;
	char** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	char* ___mAccountName_8;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_marshaled_com
{
	int32_t ___mEnableSavedGames_1;
	Il2CppChar** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	Il2CppChar* ___mAccountName_8;
};

// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SocialPlatforms.Range
struct Range_t70C133E51417BC822E878050C90A577A69B671DC 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t70C133E51417BC822E878050C90A577A69B671DC, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t70C133E51417BC822E878050C90A577A69B671DC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// GooglePlayGames.BasicApi.Achievement
struct Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.Achievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsRevealed
	bool ___mIsRevealed_3;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsUnlocked
	bool ___mIsUnlocked_4;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mCurrentSteps
	int32_t ___mCurrentSteps_5;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mTotalSteps
	int32_t ___mTotalSteps_6;
	// System.String GooglePlayGames.BasicApi.Achievement::mDescription
	String_t* ___mDescription_7;
	// System.String GooglePlayGames.BasicApi.Achievement::mName
	String_t* ___mName_8;
	// System.Int64 GooglePlayGames.BasicApi.Achievement::mLastModifiedTime
	int64_t ___mLastModifiedTime_9;
	// System.UInt64 GooglePlayGames.BasicApi.Achievement::mPoints
	uint64_t ___mPoints_10;
	// System.String GooglePlayGames.BasicApi.Achievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_11;
	// System.String GooglePlayGames.BasicApi.Achievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_12;

public:
	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mId_1)); }
	inline String_t* get_mId_1() const { return ___mId_1; }
	inline String_t** get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(String_t* value)
	{
		___mId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIsIncremental_2() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mIsIncremental_2)); }
	inline bool get_mIsIncremental_2() const { return ___mIsIncremental_2; }
	inline bool* get_address_of_mIsIncremental_2() { return &___mIsIncremental_2; }
	inline void set_mIsIncremental_2(bool value)
	{
		___mIsIncremental_2 = value;
	}

	inline static int32_t get_offset_of_mIsRevealed_3() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mIsRevealed_3)); }
	inline bool get_mIsRevealed_3() const { return ___mIsRevealed_3; }
	inline bool* get_address_of_mIsRevealed_3() { return &___mIsRevealed_3; }
	inline void set_mIsRevealed_3(bool value)
	{
		___mIsRevealed_3 = value;
	}

	inline static int32_t get_offset_of_mIsUnlocked_4() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mIsUnlocked_4)); }
	inline bool get_mIsUnlocked_4() const { return ___mIsUnlocked_4; }
	inline bool* get_address_of_mIsUnlocked_4() { return &___mIsUnlocked_4; }
	inline void set_mIsUnlocked_4(bool value)
	{
		___mIsUnlocked_4 = value;
	}

	inline static int32_t get_offset_of_mCurrentSteps_5() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mCurrentSteps_5)); }
	inline int32_t get_mCurrentSteps_5() const { return ___mCurrentSteps_5; }
	inline int32_t* get_address_of_mCurrentSteps_5() { return &___mCurrentSteps_5; }
	inline void set_mCurrentSteps_5(int32_t value)
	{
		___mCurrentSteps_5 = value;
	}

	inline static int32_t get_offset_of_mTotalSteps_6() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mTotalSteps_6)); }
	inline int32_t get_mTotalSteps_6() const { return ___mTotalSteps_6; }
	inline int32_t* get_address_of_mTotalSteps_6() { return &___mTotalSteps_6; }
	inline void set_mTotalSteps_6(int32_t value)
	{
		___mTotalSteps_6 = value;
	}

	inline static int32_t get_offset_of_mDescription_7() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mDescription_7)); }
	inline String_t* get_mDescription_7() const { return ___mDescription_7; }
	inline String_t** get_address_of_mDescription_7() { return &___mDescription_7; }
	inline void set_mDescription_7(String_t* value)
	{
		___mDescription_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_7), (void*)value);
	}

	inline static int32_t get_offset_of_mName_8() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mName_8)); }
	inline String_t* get_mName_8() const { return ___mName_8; }
	inline String_t** get_address_of_mName_8() { return &___mName_8; }
	inline void set_mName_8(String_t* value)
	{
		___mName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_8), (void*)value);
	}

	inline static int32_t get_offset_of_mLastModifiedTime_9() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mLastModifiedTime_9)); }
	inline int64_t get_mLastModifiedTime_9() const { return ___mLastModifiedTime_9; }
	inline int64_t* get_address_of_mLastModifiedTime_9() { return &___mLastModifiedTime_9; }
	inline void set_mLastModifiedTime_9(int64_t value)
	{
		___mLastModifiedTime_9 = value;
	}

	inline static int32_t get_offset_of_mPoints_10() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mPoints_10)); }
	inline uint64_t get_mPoints_10() const { return ___mPoints_10; }
	inline uint64_t* get_address_of_mPoints_10() { return &___mPoints_10; }
	inline void set_mPoints_10(uint64_t value)
	{
		___mPoints_10 = value;
	}

	inline static int32_t get_offset_of_mRevealedImageUrl_11() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mRevealedImageUrl_11)); }
	inline String_t* get_mRevealedImageUrl_11() const { return ___mRevealedImageUrl_11; }
	inline String_t** get_address_of_mRevealedImageUrl_11() { return &___mRevealedImageUrl_11; }
	inline void set_mRevealedImageUrl_11(String_t* value)
	{
		___mRevealedImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRevealedImageUrl_11), (void*)value);
	}

	inline static int32_t get_offset_of_mUnlockedImageUrl_12() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mUnlockedImageUrl_12)); }
	inline String_t* get_mUnlockedImageUrl_12() const { return ___mUnlockedImageUrl_12; }
	inline String_t** get_address_of_mUnlockedImageUrl_12() { return &___mUnlockedImageUrl_12; }
	inline void set_mUnlockedImageUrl_12(String_t* value)
	{
		___mUnlockedImageUrl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnlockedImageUrl_12), (void*)value);
	}
};

struct Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A_StaticFields
{
public:
	// System.DateTime GooglePlayGames.BasicApi.Achievement::UnixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___UnixEpoch_0 = value;
	}
};


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// GooglePlayGames.BasicApi.CommonStatusCodes
struct CommonStatusCodes_tB68EDA346666BA225DDC1B5A045875777CC9061E 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.CommonStatusCodes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CommonStatusCodes_tB68EDA346666BA225DDC1B5A045875777CC9061E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.NetworkReachability
struct NetworkReachability_t8F15310A11943C1C3752844598A796FB8EE2BFBC 
{
public:
	// System.Int32 UnityEngine.NetworkReachability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkReachability_t8F15310A11943C1C3752844598A796FB8EE2BFBC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// GooglePlayGames.PlayGamesAchievement
struct PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC  : public RuntimeObject
{
public:
	// GooglePlayGames.ReportProgress GooglePlayGames.PlayGamesAchievement::mProgressCallback
	ReportProgress_tDB0B195833B4D0F97BF3A363EAE3ED60729F4251 * ___mProgressCallback_0;
	// System.String GooglePlayGames.PlayGamesAchievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Int32 GooglePlayGames.PlayGamesAchievement::mCurrentSteps
	int32_t ___mCurrentSteps_3;
	// System.Int32 GooglePlayGames.PlayGamesAchievement::mTotalSteps
	int32_t ___mTotalSteps_4;
	// System.Double GooglePlayGames.PlayGamesAchievement::mPercentComplete
	double ___mPercentComplete_5;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mCompleted
	bool ___mCompleted_6;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mHidden
	bool ___mHidden_7;
	// System.DateTime GooglePlayGames.PlayGamesAchievement::mLastModifiedTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___mLastModifiedTime_8;
	// System.String GooglePlayGames.PlayGamesAchievement::mTitle
	String_t* ___mTitle_9;
	// System.String GooglePlayGames.PlayGamesAchievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_10;
	// System.String GooglePlayGames.PlayGamesAchievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_11;
	// UnityEngine.Networking.UnityWebRequest GooglePlayGames.PlayGamesAchievement::mImageFetcher
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___mImageFetcher_12;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesAchievement::mImage
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mImage_13;
	// System.String GooglePlayGames.PlayGamesAchievement::mDescription
	String_t* ___mDescription_14;
	// System.UInt64 GooglePlayGames.PlayGamesAchievement::mPoints
	uint64_t ___mPoints_15;

public:
	inline static int32_t get_offset_of_mProgressCallback_0() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mProgressCallback_0)); }
	inline ReportProgress_tDB0B195833B4D0F97BF3A363EAE3ED60729F4251 * get_mProgressCallback_0() const { return ___mProgressCallback_0; }
	inline ReportProgress_tDB0B195833B4D0F97BF3A363EAE3ED60729F4251 ** get_address_of_mProgressCallback_0() { return &___mProgressCallback_0; }
	inline void set_mProgressCallback_0(ReportProgress_tDB0B195833B4D0F97BF3A363EAE3ED60729F4251 * value)
	{
		___mProgressCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mProgressCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mId_1)); }
	inline String_t* get_mId_1() const { return ___mId_1; }
	inline String_t** get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(String_t* value)
	{
		___mId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIsIncremental_2() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mIsIncremental_2)); }
	inline bool get_mIsIncremental_2() const { return ___mIsIncremental_2; }
	inline bool* get_address_of_mIsIncremental_2() { return &___mIsIncremental_2; }
	inline void set_mIsIncremental_2(bool value)
	{
		___mIsIncremental_2 = value;
	}

	inline static int32_t get_offset_of_mCurrentSteps_3() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mCurrentSteps_3)); }
	inline int32_t get_mCurrentSteps_3() const { return ___mCurrentSteps_3; }
	inline int32_t* get_address_of_mCurrentSteps_3() { return &___mCurrentSteps_3; }
	inline void set_mCurrentSteps_3(int32_t value)
	{
		___mCurrentSteps_3 = value;
	}

	inline static int32_t get_offset_of_mTotalSteps_4() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mTotalSteps_4)); }
	inline int32_t get_mTotalSteps_4() const { return ___mTotalSteps_4; }
	inline int32_t* get_address_of_mTotalSteps_4() { return &___mTotalSteps_4; }
	inline void set_mTotalSteps_4(int32_t value)
	{
		___mTotalSteps_4 = value;
	}

	inline static int32_t get_offset_of_mPercentComplete_5() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mPercentComplete_5)); }
	inline double get_mPercentComplete_5() const { return ___mPercentComplete_5; }
	inline double* get_address_of_mPercentComplete_5() { return &___mPercentComplete_5; }
	inline void set_mPercentComplete_5(double value)
	{
		___mPercentComplete_5 = value;
	}

	inline static int32_t get_offset_of_mCompleted_6() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mCompleted_6)); }
	inline bool get_mCompleted_6() const { return ___mCompleted_6; }
	inline bool* get_address_of_mCompleted_6() { return &___mCompleted_6; }
	inline void set_mCompleted_6(bool value)
	{
		___mCompleted_6 = value;
	}

	inline static int32_t get_offset_of_mHidden_7() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mHidden_7)); }
	inline bool get_mHidden_7() const { return ___mHidden_7; }
	inline bool* get_address_of_mHidden_7() { return &___mHidden_7; }
	inline void set_mHidden_7(bool value)
	{
		___mHidden_7 = value;
	}

	inline static int32_t get_offset_of_mLastModifiedTime_8() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mLastModifiedTime_8)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_mLastModifiedTime_8() const { return ___mLastModifiedTime_8; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_mLastModifiedTime_8() { return &___mLastModifiedTime_8; }
	inline void set_mLastModifiedTime_8(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___mLastModifiedTime_8 = value;
	}

	inline static int32_t get_offset_of_mTitle_9() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mTitle_9)); }
	inline String_t* get_mTitle_9() const { return ___mTitle_9; }
	inline String_t** get_address_of_mTitle_9() { return &___mTitle_9; }
	inline void set_mTitle_9(String_t* value)
	{
		___mTitle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_9), (void*)value);
	}

	inline static int32_t get_offset_of_mRevealedImageUrl_10() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mRevealedImageUrl_10)); }
	inline String_t* get_mRevealedImageUrl_10() const { return ___mRevealedImageUrl_10; }
	inline String_t** get_address_of_mRevealedImageUrl_10() { return &___mRevealedImageUrl_10; }
	inline void set_mRevealedImageUrl_10(String_t* value)
	{
		___mRevealedImageUrl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRevealedImageUrl_10), (void*)value);
	}

	inline static int32_t get_offset_of_mUnlockedImageUrl_11() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mUnlockedImageUrl_11)); }
	inline String_t* get_mUnlockedImageUrl_11() const { return ___mUnlockedImageUrl_11; }
	inline String_t** get_address_of_mUnlockedImageUrl_11() { return &___mUnlockedImageUrl_11; }
	inline void set_mUnlockedImageUrl_11(String_t* value)
	{
		___mUnlockedImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnlockedImageUrl_11), (void*)value);
	}

	inline static int32_t get_offset_of_mImageFetcher_12() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mImageFetcher_12)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_mImageFetcher_12() const { return ___mImageFetcher_12; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_mImageFetcher_12() { return &___mImageFetcher_12; }
	inline void set_mImageFetcher_12(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___mImageFetcher_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageFetcher_12), (void*)value);
	}

	inline static int32_t get_offset_of_mImage_13() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mImage_13)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mImage_13() const { return ___mImage_13; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mImage_13() { return &___mImage_13; }
	inline void set_mImage_13(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_mDescription_14() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mDescription_14)); }
	inline String_t* get_mDescription_14() const { return ___mDescription_14; }
	inline String_t** get_address_of_mDescription_14() { return &___mDescription_14; }
	inline void set_mDescription_14(String_t* value)
	{
		___mDescription_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPoints_15() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mPoints_15)); }
	inline uint64_t get_mPoints_15() const { return ___mPoints_15; }
	inline uint64_t* get_address_of_mPoints_15() { return &___mPoints_15; }
	inline void set_mPoints_15(uint64_t value)
	{
		___mPoints_15 = value;
	}
};


// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.PlayGamesPlatform::mConfiguration
	PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  ___mConfiguration_3;
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesPlatform::mLocalUser
	PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D * ___mLocalUser_4;
	// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesPlatform::mClient
	RuntimeObject* ___mClient_5;
	// System.String GooglePlayGames.PlayGamesPlatform::mDefaultLbUi
	String_t* ___mDefaultLbUi_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GooglePlayGames.PlayGamesPlatform::mIdMap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___mIdMap_7;

public:
	inline static int32_t get_offset_of_mConfiguration_3() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F, ___mConfiguration_3)); }
	inline PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  get_mConfiguration_3() const { return ___mConfiguration_3; }
	inline PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767 * get_address_of_mConfiguration_3() { return &___mConfiguration_3; }
	inline void set_mConfiguration_3(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  value)
	{
		___mConfiguration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mConfiguration_3))->___mScopes_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mConfiguration_3))->___mAccountName_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_mLocalUser_4() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F, ___mLocalUser_4)); }
	inline PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D * get_mLocalUser_4() const { return ___mLocalUser_4; }
	inline PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D ** get_address_of_mLocalUser_4() { return &___mLocalUser_4; }
	inline void set_mLocalUser_4(PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D * value)
	{
		___mLocalUser_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUser_4), (void*)value);
	}

	inline static int32_t get_offset_of_mClient_5() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F, ___mClient_5)); }
	inline RuntimeObject* get_mClient_5() const { return ___mClient_5; }
	inline RuntimeObject** get_address_of_mClient_5() { return &___mClient_5; }
	inline void set_mClient_5(RuntimeObject* value)
	{
		___mClient_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_5), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLbUi_6() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F, ___mDefaultLbUi_6)); }
	inline String_t* get_mDefaultLbUi_6() const { return ___mDefaultLbUi_6; }
	inline String_t** get_address_of_mDefaultLbUi_6() { return &___mDefaultLbUi_6; }
	inline void set_mDefaultLbUi_6(String_t* value)
	{
		___mDefaultLbUi_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLbUi_6), (void*)value);
	}

	inline static int32_t get_offset_of_mIdMap_7() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F, ___mIdMap_7)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_mIdMap_7() const { return ___mIdMap_7; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_mIdMap_7() { return &___mIdMap_7; }
	inline void set_mIdMap_7(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___mIdMap_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIdMap_7), (void*)value);
	}
};

struct PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_StaticFields
{
public:
	// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sInstance
	PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * ___sInstance_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyInitializePending
	bool ___sNearbyInitializePending_1;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyConnectionClient
	RuntimeObject* ___sNearbyConnectionClient_2;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_StaticFields, ___sInstance_0)); }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * get_sInstance_0() const { return ___sInstance_0; }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of_sNearbyInitializePending_1() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_StaticFields, ___sNearbyInitializePending_1)); }
	inline bool get_sNearbyInitializePending_1() const { return ___sNearbyInitializePending_1; }
	inline bool* get_address_of_sNearbyInitializePending_1() { return &___sNearbyInitializePending_1; }
	inline void set_sNearbyInitializePending_1(bool value)
	{
		___sNearbyInitializePending_1 = value;
	}

	inline static int32_t get_offset_of_sNearbyConnectionClient_2() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_StaticFields, ___sNearbyConnectionClient_2)); }
	inline RuntimeObject* get_sNearbyConnectionClient_2() const { return ___sNearbyConnectionClient_2; }
	inline RuntimeObject** get_address_of_sNearbyConnectionClient_2() { return &___sNearbyConnectionClient_2; }
	inline void set_sNearbyConnectionClient_2(RuntimeObject* value)
	{
		___sNearbyConnectionClient_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sNearbyConnectionClient_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean GooglePlayGames.PlayGamesUserProfile::mIsFriend
	bool ___mIsFriend_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_4;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mImage_5;

public:
	inline static int32_t get_offset_of_mDisplayName_0() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mDisplayName_0)); }
	inline String_t* get_mDisplayName_0() const { return ___mDisplayName_0; }
	inline String_t** get_address_of_mDisplayName_0() { return &___mDisplayName_0; }
	inline void set_mDisplayName_0(String_t* value)
	{
		___mDisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerId_1() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mPlayerId_1)); }
	inline String_t* get_mPlayerId_1() const { return ___mPlayerId_1; }
	inline String_t** get_address_of_mPlayerId_1() { return &___mPlayerId_1; }
	inline void set_mPlayerId_1(String_t* value)
	{
		___mPlayerId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mAvatarUrl_2() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mAvatarUrl_2)); }
	inline String_t* get_mAvatarUrl_2() const { return ___mAvatarUrl_2; }
	inline String_t** get_address_of_mAvatarUrl_2() { return &___mAvatarUrl_2; }
	inline void set_mAvatarUrl_2(String_t* value)
	{
		___mAvatarUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAvatarUrl_2), (void*)value);
	}

	inline static int32_t get_offset_of_mIsFriend_3() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mIsFriend_3)); }
	inline bool get_mIsFriend_3() const { return ___mIsFriend_3; }
	inline bool* get_address_of_mIsFriend_3() { return &___mIsFriend_3; }
	inline void set_mIsFriend_3(bool value)
	{
		___mIsFriend_3 = value;
	}

	inline static int32_t get_offset_of_mImageLoading_4() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mImageLoading_4)); }
	inline bool get_mImageLoading_4() const { return ___mImageLoading_4; }
	inline bool* get_address_of_mImageLoading_4() { return &___mImageLoading_4; }
	inline void set_mImageLoading_4(bool value)
	{
		___mImageLoading_4 = value;
	}

	inline static int32_t get_offset_of_mImage_5() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mImage_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mImage_5() const { return ___mImage_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mImage_5() { return &___mImage_5; }
	inline void set_mImage_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_5), (void*)value);
	}
};


// GooglePlayGames.BasicApi.ResponseStatus
struct ResponseStatus_t31C6337C84ABBF9243B1628F28D9B459D4D18FC0 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.ResponseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResponseStatus_t31C6337C84ABBF9243B1628F28D9B459D4D18FC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SignInStatus
struct SignInStatus_t8AB2FD9416400CA43D65FC1F4217E509CE05D968 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SignInStatus_t8AB2FD9416400CA43D65FC1F4217E509CE05D968, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.TimeScope
struct TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.SocialPlatforms.UserScope
struct UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.VideoCaptureOverlayState
struct VideoCaptureOverlayState_tA17231C04D53BDB1FB8F4C6D87C7A5D4FEAFAC83 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.VideoCaptureOverlayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoCaptureOverlayState_tA17231C04D53BDB1FB8F4C6D87C7A5D4FEAFAC83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Fog/FogModi
struct FogModi_t7AB28A9B66AD4D16F1DFC6EA98526FD371385F96 
{
public:
	// System.Int32 Fog/FogModi::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FogModi_t7AB28A9B66AD4D16F1DFC6EA98526FD371385F96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::<>4__this
	OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * ___U3CU3E4__this_0;
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::discoveredEndpoint
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  ___discoveredEndpoint_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7, ___U3CU3E4__this_0)); }
	inline OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_discoveredEndpoint_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7, ___discoveredEndpoint_1)); }
	inline EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  get_discoveredEndpoint_1() const { return ___discoveredEndpoint_1; }
	inline EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * get_address_of_discoveredEndpoint_1() { return &___discoveredEndpoint_1; }
	inline void set_discoveredEndpoint_1(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  value)
	{
		___discoveredEndpoint_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mServiceId_2), (void*)NULL);
		#endif
	}
};


// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mId
	String_t* ___mId_0;
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::mStatus
	int32_t ___mStatus_1;
	// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::mApproxCount
	uint64_t ___mApproxCount_2;
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mTitle
	String_t* ___mTitle_3;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::mPlayerScore
	RuntimeObject* ___mPlayerScore_4;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mPrevPage
	ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * ___mPrevPage_5;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mNextPage
	ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * ___mNextPage_6;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.BasicApi.LeaderboardScoreData::mScores
	List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * ___mScores_7;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mStatus_1() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mStatus_1)); }
	inline int32_t get_mStatus_1() const { return ___mStatus_1; }
	inline int32_t* get_address_of_mStatus_1() { return &___mStatus_1; }
	inline void set_mStatus_1(int32_t value)
	{
		___mStatus_1 = value;
	}

	inline static int32_t get_offset_of_mApproxCount_2() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mApproxCount_2)); }
	inline uint64_t get_mApproxCount_2() const { return ___mApproxCount_2; }
	inline uint64_t* get_address_of_mApproxCount_2() { return &___mApproxCount_2; }
	inline void set_mApproxCount_2(uint64_t value)
	{
		___mApproxCount_2 = value;
	}

	inline static int32_t get_offset_of_mTitle_3() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mTitle_3)); }
	inline String_t* get_mTitle_3() const { return ___mTitle_3; }
	inline String_t** get_address_of_mTitle_3() { return &___mTitle_3; }
	inline void set_mTitle_3(String_t* value)
	{
		___mTitle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_3), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerScore_4() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mPlayerScore_4)); }
	inline RuntimeObject* get_mPlayerScore_4() const { return ___mPlayerScore_4; }
	inline RuntimeObject** get_address_of_mPlayerScore_4() { return &___mPlayerScore_4; }
	inline void set_mPlayerScore_4(RuntimeObject* value)
	{
		___mPlayerScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_mPrevPage_5() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mPrevPage_5)); }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * get_mPrevPage_5() const { return ___mPrevPage_5; }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 ** get_address_of_mPrevPage_5() { return &___mPrevPage_5; }
	inline void set_mPrevPage_5(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * value)
	{
		___mPrevPage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPrevPage_5), (void*)value);
	}

	inline static int32_t get_offset_of_mNextPage_6() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mNextPage_6)); }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * get_mNextPage_6() const { return ___mNextPage_6; }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 ** get_address_of_mNextPage_6() { return &___mNextPage_6; }
	inline void set_mNextPage_6(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * value)
	{
		___mNextPage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNextPage_6), (void*)value);
	}

	inline static int32_t get_offset_of_mScores_7() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mScores_7)); }
	inline List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * get_mScores_7() const { return ___mScores_7; }
	inline List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD ** get_address_of_mScores_7() { return &___mScores_7; }
	inline void set_mScores_7(List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * value)
	{
		___mScores_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScores_7), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// GooglePlayGames.PlayGamesLeaderboard
struct PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesLeaderboard::mId
	String_t* ___mId_0;
	// UnityEngine.SocialPlatforms.UserScope GooglePlayGames.PlayGamesLeaderboard::mUserScope
	int32_t ___mUserScope_1;
	// UnityEngine.SocialPlatforms.Range GooglePlayGames.PlayGamesLeaderboard::mRange
	Range_t70C133E51417BC822E878050C90A577A69B671DC  ___mRange_2;
	// UnityEngine.SocialPlatforms.TimeScope GooglePlayGames.PlayGamesLeaderboard::mTimeScope
	int32_t ___mTimeScope_3;
	// System.String[] GooglePlayGames.PlayGamesLeaderboard::mFilteredUserIds
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___mFilteredUserIds_4;
	// System.Boolean GooglePlayGames.PlayGamesLeaderboard::mLoading
	bool ___mLoading_5;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.PlayGamesLeaderboard::mLocalUserScore
	RuntimeObject* ___mLocalUserScore_6;
	// System.UInt32 GooglePlayGames.PlayGamesLeaderboard::mMaxRange
	uint32_t ___mMaxRange_7;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.PlayGamesLeaderboard::mScoreList
	List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * ___mScoreList_8;
	// System.String GooglePlayGames.PlayGamesLeaderboard::mTitle
	String_t* ___mTitle_9;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mUserScope_1() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mUserScope_1)); }
	inline int32_t get_mUserScope_1() const { return ___mUserScope_1; }
	inline int32_t* get_address_of_mUserScope_1() { return &___mUserScope_1; }
	inline void set_mUserScope_1(int32_t value)
	{
		___mUserScope_1 = value;
	}

	inline static int32_t get_offset_of_mRange_2() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mRange_2)); }
	inline Range_t70C133E51417BC822E878050C90A577A69B671DC  get_mRange_2() const { return ___mRange_2; }
	inline Range_t70C133E51417BC822E878050C90A577A69B671DC * get_address_of_mRange_2() { return &___mRange_2; }
	inline void set_mRange_2(Range_t70C133E51417BC822E878050C90A577A69B671DC  value)
	{
		___mRange_2 = value;
	}

	inline static int32_t get_offset_of_mTimeScope_3() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mTimeScope_3)); }
	inline int32_t get_mTimeScope_3() const { return ___mTimeScope_3; }
	inline int32_t* get_address_of_mTimeScope_3() { return &___mTimeScope_3; }
	inline void set_mTimeScope_3(int32_t value)
	{
		___mTimeScope_3 = value;
	}

	inline static int32_t get_offset_of_mFilteredUserIds_4() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mFilteredUserIds_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_mFilteredUserIds_4() const { return ___mFilteredUserIds_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_mFilteredUserIds_4() { return &___mFilteredUserIds_4; }
	inline void set_mFilteredUserIds_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___mFilteredUserIds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFilteredUserIds_4), (void*)value);
	}

	inline static int32_t get_offset_of_mLoading_5() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mLoading_5)); }
	inline bool get_mLoading_5() const { return ___mLoading_5; }
	inline bool* get_address_of_mLoading_5() { return &___mLoading_5; }
	inline void set_mLoading_5(bool value)
	{
		___mLoading_5 = value;
	}

	inline static int32_t get_offset_of_mLocalUserScore_6() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mLocalUserScore_6)); }
	inline RuntimeObject* get_mLocalUserScore_6() const { return ___mLocalUserScore_6; }
	inline RuntimeObject** get_address_of_mLocalUserScore_6() { return &___mLocalUserScore_6; }
	inline void set_mLocalUserScore_6(RuntimeObject* value)
	{
		___mLocalUserScore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUserScore_6), (void*)value);
	}

	inline static int32_t get_offset_of_mMaxRange_7() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mMaxRange_7)); }
	inline uint32_t get_mMaxRange_7() const { return ___mMaxRange_7; }
	inline uint32_t* get_address_of_mMaxRange_7() { return &___mMaxRange_7; }
	inline void set_mMaxRange_7(uint32_t value)
	{
		___mMaxRange_7 = value;
	}

	inline static int32_t get_offset_of_mScoreList_8() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mScoreList_8)); }
	inline List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * get_mScoreList_8() const { return ___mScoreList_8; }
	inline List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD ** get_address_of_mScoreList_8() { return &___mScoreList_8; }
	inline void set_mScoreList_8(List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * value)
	{
		___mScoreList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScoreList_8), (void*)value);
	}

	inline static int32_t get_offset_of_mTitle_9() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mTitle_9)); }
	inline String_t* get_mTitle_9() const { return ___mTitle_9; }
	inline String_t** get_address_of_mTitle_9() { return &___mTitle_9; }
	inline void set_mTitle_9(String_t* value)
	{
		___mTitle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_9), (void*)value);
	}
};


// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D  : public PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesLocalUser::mPlatform
	PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * ___mPlatform_6;
	// System.String GooglePlayGames.PlayGamesLocalUser::emailAddress
	String_t* ___emailAddress_7;
	// GooglePlayGames.BasicApi.PlayerStats GooglePlayGames.PlayGamesLocalUser::mStats
	PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5 * ___mStats_8;

public:
	inline static int32_t get_offset_of_mPlatform_6() { return static_cast<int32_t>(offsetof(PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D, ___mPlatform_6)); }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * get_mPlatform_6() const { return ___mPlatform_6; }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F ** get_address_of_mPlatform_6() { return &___mPlatform_6; }
	inline void set_mPlatform_6(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * value)
	{
		___mPlatform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlatform_6), (void*)value);
	}

	inline static int32_t get_offset_of_emailAddress_7() { return static_cast<int32_t>(offsetof(PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D, ___emailAddress_7)); }
	inline String_t* get_emailAddress_7() const { return ___emailAddress_7; }
	inline String_t** get_address_of_emailAddress_7() { return &___emailAddress_7; }
	inline void set_emailAddress_7(String_t* value)
	{
		___emailAddress_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emailAddress_7), (void*)value);
	}

	inline static int32_t get_offset_of_mStats_8() { return static_cast<int32_t>(offsetof(PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D, ___mStats_8)); }
	inline PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5 * get_mStats_8() const { return ___mStats_8; }
	inline PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5 ** get_address_of_mStats_8() { return &___mStats_8; }
	inline void set_mStats_8(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5 * value)
	{
		___mStats_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mStats_8), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy
struct OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy::mListener
	RuntimeObject* ___mListener_4;

public:
	inline static int32_t get_offset_of_mListener_4() { return static_cast<int32_t>(offsetof(OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7, ___mListener_4)); }
	inline RuntimeObject* get_mListener_4() const { return ___mListener_4; }
	inline RuntimeObject** get_address_of_mListener_4() { return &___mListener_4; }
	inline void set_mListener_4(RuntimeObject* value)
	{
		___mListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_4), (void*)value);
	}
};


// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t7570552C35A220ADB9666809E4D57E4C10713634  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>
struct Action_1_tD4E3131F8801005BF06CEBA1838FA49CBB285172  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t780FB18E67AC464A50B094492A06E11D0DF1D172  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewPlayedTime_4)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};

// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewPlayedTime_4)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};

// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Fog
struct Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Fog::isFogOnOff
	bool ___isFogOnOff_5;
	// UnityEngine.Color Fog::RkFogColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___RkFogColor_6;
	// System.Single Fog::speed
	float ___speed_7;
	// Fog/FogModi Fog::Fogenum
	int32_t ___Fogenum_8;
	// System.Single Fog::LinearStart
	float ___LinearStart_9;
	// System.Single Fog::LinearEnd
	float ___LinearEnd_10;
	// System.Single Fog::ExpotentialDensity
	float ___ExpotentialDensity_11;

public:
	inline static int32_t get_offset_of_isFogOnOff_5() { return static_cast<int32_t>(offsetof(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172, ___isFogOnOff_5)); }
	inline bool get_isFogOnOff_5() const { return ___isFogOnOff_5; }
	inline bool* get_address_of_isFogOnOff_5() { return &___isFogOnOff_5; }
	inline void set_isFogOnOff_5(bool value)
	{
		___isFogOnOff_5 = value;
	}

	inline static int32_t get_offset_of_RkFogColor_6() { return static_cast<int32_t>(offsetof(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172, ___RkFogColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_RkFogColor_6() const { return ___RkFogColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_RkFogColor_6() { return &___RkFogColor_6; }
	inline void set_RkFogColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___RkFogColor_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_Fogenum_8() { return static_cast<int32_t>(offsetof(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172, ___Fogenum_8)); }
	inline int32_t get_Fogenum_8() const { return ___Fogenum_8; }
	inline int32_t* get_address_of_Fogenum_8() { return &___Fogenum_8; }
	inline void set_Fogenum_8(int32_t value)
	{
		___Fogenum_8 = value;
	}

	inline static int32_t get_offset_of_LinearStart_9() { return static_cast<int32_t>(offsetof(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172, ___LinearStart_9)); }
	inline float get_LinearStart_9() const { return ___LinearStart_9; }
	inline float* get_address_of_LinearStart_9() { return &___LinearStart_9; }
	inline void set_LinearStart_9(float value)
	{
		___LinearStart_9 = value;
	}

	inline static int32_t get_offset_of_LinearEnd_10() { return static_cast<int32_t>(offsetof(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172, ___LinearEnd_10)); }
	inline float get_LinearEnd_10() const { return ___LinearEnd_10; }
	inline float* get_address_of_LinearEnd_10() { return &___LinearEnd_10; }
	inline void set_LinearEnd_10(float value)
	{
		___LinearEnd_10 = value;
	}

	inline static int32_t get_offset_of_ExpotentialDensity_11() { return static_cast<int32_t>(offsetof(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172, ___ExpotentialDensity_11)); }
	inline float get_ExpotentialDensity_11() const { return ___ExpotentialDensity_11; }
	inline float* get_address_of_ExpotentialDensity_11() { return &___ExpotentialDensity_11; }
	inline void set_ExpotentialDensity_11(float value)
	{
		___ExpotentialDensity_11 = value;
	}
};

struct Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172_StaticFields
{
public:
	// Fog Fog::instance
	Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172_StaticFields, ___instance_4)); }
	inline Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172 * get_instance_4() const { return ___instance_4; }
	inline Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223, ___pvCache_4)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::localQueue
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___localQueue_7;

public:
	inline static int32_t get_offset_of_localQueue_7() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627, ___localQueue_7)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_localQueue_7() const { return ___localQueue_7; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_localQueue_7() { return &___localQueue_7; }
	inline void set_localQueue_7(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___localQueue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localQueue_7), (void*)value);
	}
};

struct PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields
{
public:
	// GooglePlayGames.OurUtils.PlayGamesHelperObject GooglePlayGames.OurUtils.PlayGamesHelperObject::instance
	PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * ___instance_4;
	// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::sIsDummy
	bool ___sIsDummy_5;
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueue
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___sQueue_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueueEmpty
	bool ___sQueueEmpty_8;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sPauseCallbackList
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___sPauseCallbackList_9;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sFocusCallbackList
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___sFocusCallbackList_10;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___instance_4)); }
	inline PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * get_instance_4() const { return ___instance_4; }
	inline PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_sIsDummy_5() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___sIsDummy_5)); }
	inline bool get_sIsDummy_5() const { return ___sIsDummy_5; }
	inline bool* get_address_of_sIsDummy_5() { return &___sIsDummy_5; }
	inline void set_sIsDummy_5(bool value)
	{
		___sIsDummy_5 = value;
	}

	inline static int32_t get_offset_of_sQueue_6() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___sQueue_6)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_sQueue_6() const { return ___sQueue_6; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_sQueue_6() { return &___sQueue_6; }
	inline void set_sQueue_6(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___sQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of_sQueueEmpty_8() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___sQueueEmpty_8)); }
	inline bool get_sQueueEmpty_8() const { return ___sQueueEmpty_8; }
	inline bool* get_address_of_sQueueEmpty_8() { return &___sQueueEmpty_8; }
	inline void set_sQueueEmpty_8(bool value)
	{
		___sQueueEmpty_8 = value;
	}

	inline static int32_t get_offset_of_sPauseCallbackList_9() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___sPauseCallbackList_9)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_sPauseCallbackList_9() const { return ___sPauseCallbackList_9; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_sPauseCallbackList_9() { return &___sPauseCallbackList_9; }
	inline void set_sPauseCallbackList_9(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___sPauseCallbackList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sPauseCallbackList_9), (void*)value);
	}

	inline static int32_t get_offset_of_sFocusCallbackList_10() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields, ___sFocusCallbackList_10)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_sFocusCallbackList_10() const { return ___sFocusCallbackList_10; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_sFocusCallbackList_10() { return &___sFocusCallbackList_10; }
	inline void set_sFocusCallbackList_10(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___sFocusCallbackList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sFocusCallbackList_10), (void*)value);
	}
};


// Ragdoll
struct Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Ragdoll::skeleton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___skeleton_5;

public:
	inline static int32_t get_offset_of_skeleton_5() { return static_cast<int32_t>(offsetof(Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91, ___skeleton_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_skeleton_5() const { return ___skeleton_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_skeleton_5() { return &___skeleton_5; }
	inline void set_skeleton_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___skeleton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeleton_5), (void*)value);
	}
};

struct Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91_StaticFields
{
public:
	// Ragdoll Ragdoll::instance
	Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91_StaticFields, ___instance_4)); }
	inline Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * get_instance_4() const { return ___instance_4; }
	inline Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// ToolData
struct ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ToolData::buttonTimer
	float ___buttonTimer_4;
	// UnityEngine.GameObject[] ToolData::obj_Score
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___obj_Score_5;
	// UnityEngine.Material[] ToolData::mat_Score
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___mat_Score_6;
	// UnityEngine.MeshRenderer[] ToolData::mr_Score
	MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* ___mr_Score_7;
	// UnityEngine.GameObject ToolData::mesh_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mesh_obj_8;
	// UnityEngine.ParticleSystem[] ToolData::ps
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___ps_9;
	// UnityEngine.AudioClip[] ToolData::ac
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___ac_10;
	// UnityEngine.GameObject ToolData::button
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___button_11;
	// UnityEngine.GameObject[] ToolData::coll
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___coll_12;
	// UnityEngine.AudioSource ToolData::as_Score
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___as_Score_13;
	// UnityEngine.Animator ToolData::button_ani
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___button_ani_14;
	// System.Int32[] ToolData::answer
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___answer_15;
	// System.Int32[] ToolData::nums
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___nums_16;
	// TMPro.TextMeshPro ToolData::numText
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___numText_17;
	// System.Int32 ToolData::v_strike
	int32_t ___v_strike_18;
	// System.Int32 ToolData::v_ball
	int32_t ___v_ball_19;
	// System.Int32[] ToolData::init
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___init_20;
	// System.Int32 ToolData::count
	int32_t ___count_21;
	// UnityEngine.GameObject[] ToolData::obj_Dials
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___obj_Dials_22;

public:
	inline static int32_t get_offset_of_buttonTimer_4() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___buttonTimer_4)); }
	inline float get_buttonTimer_4() const { return ___buttonTimer_4; }
	inline float* get_address_of_buttonTimer_4() { return &___buttonTimer_4; }
	inline void set_buttonTimer_4(float value)
	{
		___buttonTimer_4 = value;
	}

	inline static int32_t get_offset_of_obj_Score_5() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___obj_Score_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_obj_Score_5() const { return ___obj_Score_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_obj_Score_5() { return &___obj_Score_5; }
	inline void set_obj_Score_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___obj_Score_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_Score_5), (void*)value);
	}

	inline static int32_t get_offset_of_mat_Score_6() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___mat_Score_6)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_mat_Score_6() const { return ___mat_Score_6; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_mat_Score_6() { return &___mat_Score_6; }
	inline void set_mat_Score_6(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___mat_Score_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_Score_6), (void*)value);
	}

	inline static int32_t get_offset_of_mr_Score_7() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___mr_Score_7)); }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* get_mr_Score_7() const { return ___mr_Score_7; }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228** get_address_of_mr_Score_7() { return &___mr_Score_7; }
	inline void set_mr_Score_7(MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* value)
	{
		___mr_Score_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mr_Score_7), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_obj_8() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___mesh_obj_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mesh_obj_8() const { return ___mesh_obj_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mesh_obj_8() { return &___mesh_obj_8; }
	inline void set_mesh_obj_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mesh_obj_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_obj_8), (void*)value);
	}

	inline static int32_t get_offset_of_ps_9() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___ps_9)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get_ps_9() const { return ___ps_9; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of_ps_9() { return &___ps_9; }
	inline void set_ps_9(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		___ps_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ps_9), (void*)value);
	}

	inline static int32_t get_offset_of_ac_10() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___ac_10)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_ac_10() const { return ___ac_10; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_ac_10() { return &___ac_10; }
	inline void set_ac_10(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___ac_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ac_10), (void*)value);
	}

	inline static int32_t get_offset_of_button_11() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___button_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_button_11() const { return ___button_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_button_11() { return &___button_11; }
	inline void set_button_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___button_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_11), (void*)value);
	}

	inline static int32_t get_offset_of_coll_12() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___coll_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_coll_12() const { return ___coll_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_coll_12() { return &___coll_12; }
	inline void set_coll_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___coll_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coll_12), (void*)value);
	}

	inline static int32_t get_offset_of_as_Score_13() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___as_Score_13)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_as_Score_13() const { return ___as_Score_13; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_as_Score_13() { return &___as_Score_13; }
	inline void set_as_Score_13(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___as_Score_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___as_Score_13), (void*)value);
	}

	inline static int32_t get_offset_of_button_ani_14() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___button_ani_14)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_button_ani_14() const { return ___button_ani_14; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_button_ani_14() { return &___button_ani_14; }
	inline void set_button_ani_14(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___button_ani_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_ani_14), (void*)value);
	}

	inline static int32_t get_offset_of_answer_15() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___answer_15)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_answer_15() const { return ___answer_15; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_answer_15() { return &___answer_15; }
	inline void set_answer_15(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___answer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___answer_15), (void*)value);
	}

	inline static int32_t get_offset_of_nums_16() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___nums_16)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_nums_16() const { return ___nums_16; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_nums_16() { return &___nums_16; }
	inline void set_nums_16(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___nums_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nums_16), (void*)value);
	}

	inline static int32_t get_offset_of_numText_17() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___numText_17)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_numText_17() const { return ___numText_17; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_numText_17() { return &___numText_17; }
	inline void set_numText_17(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___numText_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numText_17), (void*)value);
	}

	inline static int32_t get_offset_of_v_strike_18() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___v_strike_18)); }
	inline int32_t get_v_strike_18() const { return ___v_strike_18; }
	inline int32_t* get_address_of_v_strike_18() { return &___v_strike_18; }
	inline void set_v_strike_18(int32_t value)
	{
		___v_strike_18 = value;
	}

	inline static int32_t get_offset_of_v_ball_19() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___v_ball_19)); }
	inline int32_t get_v_ball_19() const { return ___v_ball_19; }
	inline int32_t* get_address_of_v_ball_19() { return &___v_ball_19; }
	inline void set_v_ball_19(int32_t value)
	{
		___v_ball_19 = value;
	}

	inline static int32_t get_offset_of_init_20() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___init_20)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_init_20() const { return ___init_20; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_init_20() { return &___init_20; }
	inline void set_init_20(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___init_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___init_20), (void*)value);
	}

	inline static int32_t get_offset_of_count_21() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___count_21)); }
	inline int32_t get_count_21() const { return ___count_21; }
	inline int32_t* get_address_of_count_21() { return &___count_21; }
	inline void set_count_21(int32_t value)
	{
		___count_21 = value;
	}

	inline static int32_t get_offset_of_obj_Dials_22() { return static_cast<int32_t>(offsetof(ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D, ___obj_Dials_22)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_obj_Dials_22() const { return ___obj_Dials_22; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_obj_Dials_22() { return &___obj_Dials_22; }
	inline void set_obj_Dials_22(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___obj_Dials_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_Dials_22), (void*)value);
	}
};


// Vibration
struct Vibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Vibration::isViOn
	bool ___isViOn_4;
	// System.Single Vibration::speed
	float ___speed_5;
	// System.Single Vibration::intensity
	float ___intensity_6;

public:
	inline static int32_t get_offset_of_isViOn_4() { return static_cast<int32_t>(offsetof(Vibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408, ___isViOn_4)); }
	inline bool get_isViOn_4() const { return ___isViOn_4; }
	inline bool* get_address_of_isViOn_4() { return &___isViOn_4; }
	inline void set_isViOn_4(bool value)
	{
		___isViOn_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Vibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(Vibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}
};


// PlayerNetwork
struct PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// UnityEngine.GameObject PlayerNetwork::light
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___light_5;
	// UnityEngine.GameObject PlayerNetwork::here_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___here_obj_6;
	// UnityEngine.GameObject PlayerNetwork::playerCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerCanvas_7;
	// UnityEngine.GameObject PlayerNetwork::typeImg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___typeImg_8;
	// UnityEngine.UI.Slider PlayerNetwork::healthSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___healthSlider_9;
	// UnityEngine.GameObject PlayerNetwork::camara
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___camara_10;
	// UnityEngine.GameObject PlayerNetwork::body_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___body_obj_11;
	// System.String PlayerNetwork::playerName
	String_t* ___playerName_12;
	// Photon.Pun.PhotonView PlayerNetwork::PV
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___PV_13;
	// UnityEngine.Vector3 PlayerNetwork::curPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___curPos_14;
	// System.Single PlayerNetwork::playerDamage
	float ___playerDamage_15;
	// UnityEngine.Quaternion PlayerNetwork::curRot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___curRot_16;
	// UnityEngine.GameObject PlayerNetwork::img_hurt
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___img_hurt_17;
	// System.Boolean PlayerNetwork::isHuman
	bool ___isHuman_18;
	// System.Single PlayerNetwork::_hp
	float ____hp_19;
	// UnityEngine.Vector3 PlayerNetwork::impact
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___impact_20;
	// System.Single PlayerNetwork::mass
	float ___mass_21;

public:
	inline static int32_t get_offset_of_light_5() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___light_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_light_5() const { return ___light_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_light_5() { return &___light_5; }
	inline void set_light_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___light_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___light_5), (void*)value);
	}

	inline static int32_t get_offset_of_here_obj_6() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___here_obj_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_here_obj_6() const { return ___here_obj_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_here_obj_6() { return &___here_obj_6; }
	inline void set_here_obj_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___here_obj_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___here_obj_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerCanvas_7() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___playerCanvas_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerCanvas_7() const { return ___playerCanvas_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerCanvas_7() { return &___playerCanvas_7; }
	inline void set_playerCanvas_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerCanvas_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerCanvas_7), (void*)value);
	}

	inline static int32_t get_offset_of_typeImg_8() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___typeImg_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_typeImg_8() const { return ___typeImg_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_typeImg_8() { return &___typeImg_8; }
	inline void set_typeImg_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___typeImg_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeImg_8), (void*)value);
	}

	inline static int32_t get_offset_of_healthSlider_9() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___healthSlider_9)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_healthSlider_9() const { return ___healthSlider_9; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_healthSlider_9() { return &___healthSlider_9; }
	inline void set_healthSlider_9(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___healthSlider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthSlider_9), (void*)value);
	}

	inline static int32_t get_offset_of_camara_10() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___camara_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_camara_10() const { return ___camara_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_camara_10() { return &___camara_10; }
	inline void set_camara_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___camara_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camara_10), (void*)value);
	}

	inline static int32_t get_offset_of_body_obj_11() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___body_obj_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_body_obj_11() const { return ___body_obj_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_body_obj_11() { return &___body_obj_11; }
	inline void set_body_obj_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___body_obj_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_obj_11), (void*)value);
	}

	inline static int32_t get_offset_of_playerName_12() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___playerName_12)); }
	inline String_t* get_playerName_12() const { return ___playerName_12; }
	inline String_t** get_address_of_playerName_12() { return &___playerName_12; }
	inline void set_playerName_12(String_t* value)
	{
		___playerName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerName_12), (void*)value);
	}

	inline static int32_t get_offset_of_PV_13() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___PV_13)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_PV_13() const { return ___PV_13; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_PV_13() { return &___PV_13; }
	inline void set_PV_13(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___PV_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PV_13), (void*)value);
	}

	inline static int32_t get_offset_of_curPos_14() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___curPos_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_curPos_14() const { return ___curPos_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_curPos_14() { return &___curPos_14; }
	inline void set_curPos_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___curPos_14 = value;
	}

	inline static int32_t get_offset_of_playerDamage_15() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___playerDamage_15)); }
	inline float get_playerDamage_15() const { return ___playerDamage_15; }
	inline float* get_address_of_playerDamage_15() { return &___playerDamage_15; }
	inline void set_playerDamage_15(float value)
	{
		___playerDamage_15 = value;
	}

	inline static int32_t get_offset_of_curRot_16() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___curRot_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_curRot_16() const { return ___curRot_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_curRot_16() { return &___curRot_16; }
	inline void set_curRot_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___curRot_16 = value;
	}

	inline static int32_t get_offset_of_img_hurt_17() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___img_hurt_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_img_hurt_17() const { return ___img_hurt_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_img_hurt_17() { return &___img_hurt_17; }
	inline void set_img_hurt_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___img_hurt_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img_hurt_17), (void*)value);
	}

	inline static int32_t get_offset_of_isHuman_18() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___isHuman_18)); }
	inline bool get_isHuman_18() const { return ___isHuman_18; }
	inline bool* get_address_of_isHuman_18() { return &___isHuman_18; }
	inline void set_isHuman_18(bool value)
	{
		___isHuman_18 = value;
	}

	inline static int32_t get_offset_of__hp_19() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ____hp_19)); }
	inline float get__hp_19() const { return ____hp_19; }
	inline float* get_address_of__hp_19() { return &____hp_19; }
	inline void set__hp_19(float value)
	{
		____hp_19 = value;
	}

	inline static int32_t get_offset_of_impact_20() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___impact_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_impact_20() const { return ___impact_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_impact_20() { return &___impact_20; }
	inline void set_impact_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___impact_20 = value;
	}

	inline static int32_t get_offset_of_mass_21() { return static_cast<int32_t>(offsetof(PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724, ___mass_21)); }
	inline float get_mass_21() const { return ___mass_21; }
	inline float* get_address_of_mass_21() { return &___mass_21; }
	inline void set_mass_21(float value)
	{
		___mass_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * m_Items[1];

public:
	inline Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m152C98E120D38857ED1464915833AAE22C0812B5_gshared (Action_2_tAEEAE0CA76819C6105A7D08A17A11166D3071492 * __this, int32_t ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Misc_CheckNotNull_TisRuntimeObject_mA9074C6868B83433A9BA2420F813443D5F45DF8D_gshared (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesClientConfiguration__ctor_m8EBCDC6D80B560FA59B1AB4FD62227A9305ED407 (PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767 * __this, Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * ___builder0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>::Invoke(!0,!1)
inline void Action_2_Invoke_m237B2A62251C7CD4622DF9B2504C1D25BA77CC6F (Action_2_t780FB18E67AC464A50B094492A06E11D0DF1D172 * __this, int32_t ___arg10, PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5 * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t780FB18E67AC464A50B094492A06E11D0DF1D172 *, int32_t, PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5 *, const RuntimeMethod*))Action_2_Invoke_m152C98E120D38857ED1464915833AAE22C0812B5_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5FD324462D3F0470C8999EB5251AF0AE5ED7034A (U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>::Invoke(!0)
inline void Action_1_Invoke_m09A2BB65EE7BC55D17B7CA3B91507DC1E688A084 (Action_1_tD4E3131F8801005BF06CEBA1838FA49CBB285172 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD4E3131F8801005BF06CEBA1838FA49CBB285172 *, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766 (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * __this, bool ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A (String_t* ___msg0, const RuntimeMethod* method);
// UnityEngine.NetworkReachability UnityEngine.Application::get_internetReachability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_internetReachability_m039C30126BD989614BF2A4A3F33129177A95C61C (const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.SignInStatus>::Invoke(!0)
inline void Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28 (Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD *, int32_t, const RuntimeMethod*))Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared)(__this, ___obj0, method);
}
// System.Boolean GooglePlayGames.BasicApi.SignInHelper::ShouldPromptUiSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignInHelper_ShouldPromptUiSignIn_m132C7EBDCF7F1F041F512D9CB846BA64DB7F4951 (const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.SignInStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4D22D4BF4A7C54B4ED2878B61E89577070B4866C (Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::SetPromptUiSignIn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper_SetPromptUiSignIn_mBB5355FA97893E14DB63BB01AEC6C06A04570C13 (bool ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_mAD1FDCCD1269ED7775BF3B1770E052D7915929BC (String_t* ___msg0, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Achievement::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_m5D158C02B91C51A14EEAEF34FA40189DA7D2AC78_inline (Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsIncremental()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_m46F4FC2667A800F29D427BEFF0800269161F9A9B_inline (Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_m414F13A48103BD802CE1644BC96C5879889468A8 (String_t* ___msg0, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_TotalSteps()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_m298B96E8E8DC4240DA2F032A3D3327483B16C2A3_inline (Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * __this, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.PlayGamesPlatform::progressToSteps(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesPlatform_progressToSteps_mFBC6117228FF628B4194DF22DEC7EC2EA8A11A62 (double ___progress0, int32_t ___totalSteps1, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.BasicApi.Achievement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement__ctor_m1AADF536FEBBA8A0950FED687ED4566391355A95 (PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC * __this, Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * ___ach0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0)
inline void Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F (Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * __this, IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 *, IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0)
inline void Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3 (Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * __this, IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 *, IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.BasicApi.LeaderboardScoreData::get_Scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* LeaderboardScoreData_get_Scores_m0A69C71CC01A46E9E4B476A77A4B8B1785189F3D (LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0)
inline void Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD (Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * __this, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 *, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::HandleLoadingScores(GooglePlayGames.PlayGamesLeaderboard,GooglePlayGames.BasicApi.LeaderboardScoreData,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_HandleLoadingScores_m69FF25A7548F8E0E564F1DB56E3AB9B3BFB8AE45 (PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * __this, PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B * ___board0, LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * ___scoreData1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback2, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesUserProfile::get_AvatarURL()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_m9B1156AA75A22DE0DE0961CE0D97D7DCE1154F46_inline (PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37 (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___www0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.Animator::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_m74C168FD46C780CD153838BDCE77F8B371456D46 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Ragdoll::setRigidbodyState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ragdoll_setRigidbodyState_m44FA1658B1B027702087BCC70544BCED66D23216 (Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * __this, bool ___state0, const RuntimeMethod* method);
// System.Void Ragdoll::setColliderState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ragdoll_setColliderState_m32EA40B4D7FE25C93E88585A5F57B599E591D3EB (Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * __this, bool ___state0, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
inline String_t* Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mA9074C6868B83433A9BA2420F813443D5F45DF8D_gshared)(___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, String_t* ___description0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
inline void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared)(__this, ___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_mA17CBE92DAB0E4914C2E090AF00210FF7143CB75 (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  ___builder0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, const RuntimeMethod* method);
// System.Void ToolData::ParticlePlay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolData_ParticlePlay_m151B9FD849EC52FB4C70EAC11D40611D84A228D7 (ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void ToolData::AudioPlay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolData_AudioPlay_m77D477E08519C9B12EBDBACA178333CDCD79A3EE (ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vibration>()
inline Vibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408 * Component_GetComponent_TisVibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408_mE900AA8E8E7FF1B8B2F888CAF7143DFB6ADABCCC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Vibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void ToolData::DeleteChilds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolData_DeleteChilds_mCFE16679DA2DA3C04DE7BDB2BFE02A3CB69F007C (ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void ToolData::Baseball()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolData_Baseball_m6310C520C14FA147CF1E73D801C3A4887F8C6B8F (ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void ToolData::StateNumChange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolData_StateNumChange_mFB0C40D4D02B5CBC4E9512B0C8CC134F84E0FDEE (ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * __this, bool ___b0, const RuntimeMethod* method);
// System.Void ToolData::ChangeAllColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolData_ChangeAllColor_m6F7C042C9AA02853D1B185265F7AABE7200904EE (ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * __this, int32_t ___color0, const RuntimeMethod* method);
// System.Void ToolData::ResultColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolData_ResultColor_m7FF3A6105B705C0FD417465E21F3A648AC6E41D8 (ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.VideoCaptureOverlayState GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy::FromVideoCaptureOverlayState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnCaptureOverlayStateListenerProxy_FromVideoCaptureOverlayState_m4C062F855CDDC03616E9A5B0863B52405DDDDD53 (int32_t ___overlayState0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableSavedGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * Builder_EnableSavedGames_mF9F62CCC372C7A45FBEB27F8292A6014530F49A6 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// mEnableSaveGames = true;
		__this->set_mEnableSaveGames_0((bool)1);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableHidePopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * Builder_EnableHidePopups_m0396C6D72BFD75B1C627033CB2B14AECEE0A50D6 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// mHidePopups = true;
		__this->set_mHidePopups_2((bool)1);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestServerAuthCode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * Builder_RequestServerAuthCode_m3ABEFD715FF691919304FBEE07C3CB82031CF24A (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, bool ___forceRefresh0, const RuntimeMethod* method)
{
	{
		// mRequestAuthCode = true;
		__this->set_mRequestAuthCode_3((bool)1);
		// mForceRefresh = forceRefresh;
		bool L_0 = ___forceRefresh0;
		__this->set_mForceRefresh_4(L_0);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * Builder_RequestEmail_mBF6111DD3C3334FF8DCEC8E69D42D335F3DD4673 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// mRequestEmail = true;
		__this->set_mRequestEmail_5((bool)1);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * Builder_RequestIdToken_mEEA90D32F254E70D639E79CC4C457347D5715763 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// mRequestIdToken = true;
		__this->set_mRequestIdToken_6((bool)1);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::SetAccountName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * Builder_SetAccountName_mAA8659D8FB257C73570174C3124886C9A731ED30 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, String_t* ___accountName0, const RuntimeMethod* method)
{
	{
		// mAccountName = accountName;
		String_t* L_0 = ___accountName0;
		__this->set_mAccountName_7(L_0);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::AddOauthScope(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * Builder_AddOauthScope_mF84D1E894417673B076C611585339591C2B9F6C0 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, String_t* ___scope0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mScopes == null) mScopes = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_mScopes_1();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (mScopes == null) mScopes = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_1, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_mScopes_1(L_1);
	}

IL_0013:
	{
		// mScopes.Add(scope);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get_mScopes_1();
		String_t* L_3 = ___scope0;
		NullCheck(L_2);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_2, L_3, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  Builder_Build_m480B45B1E999C869ADA63AFCC9E67D20F205234B (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// return new PlayGamesClientConfiguration(this);
		PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayGamesClientConfiguration__ctor_m8EBCDC6D80B560FA59B1AB4FD62227A9305ED407((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableSaveGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_HasEnableSaveGames_m81C8B21A9E216BD80643CBB7B5B7F6A270B22656 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// return mEnableSaveGames;
		bool L_0 = __this->get_mEnableSaveGames_0();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingAuthCode_m98E0A8AE1A25FF9BBF73C7A7A7F577541E983205 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// return mRequestAuthCode;
		bool L_0 = __this->get_mRequestAuthCode_3();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsHidingPopups_m570AF45961B2F1A8490FB624FD05993FA8FBEBF3 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// return mHidePopups;
		bool L_0 = __this->get_mHidePopups_2();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsForcingRefresh_m695EA7ACAC8E4B075B854ACB43EDF1BAC4741785 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// return mForceRefresh;
		bool L_0 = __this->get_mForceRefresh_4();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingEmail_mF12362834E5A0E8627635E554848EB14D716A43C (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// return mRequestEmail;
		bool L_0 = __this->get_mRequestEmail_5();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingIdToken_mD9A13BF734F2A4F90125E08EA85FDA8C7296C516 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// return mRequestIdToken;
		bool L_0 = __this->get_mRequestIdToken_6();
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetAccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builder_GetAccountName_m8709A53EC0DB53D198BFB71712D222E3E6365E1B (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		// return mAccountName;
		String_t* L_0 = __this->get_mAccountName_7();
		return L_0;
	}
}
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::getScopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Builder_getScopes_mE8FD47331C88BA4193DD99CB13CA4384709F2AC2 (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mScopes == null ? new string[0] : mScopes.ToArray();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_mScopes_1();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_mScopes_1();
		NullCheck(L_1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_1, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		return L_2;
	}

IL_0014:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_3;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m7D68507EF91F2C7F322B201BFD7ED33909DD743C (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mC0560B5F45940D0FB364F2C814417A1BB8801EA3 (U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::<RunCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mB0BF079147E3BB2E745DA9CEA7909FF46A8681A7 (U3CU3Ec__DisplayClass10_0_t5B4B429544546EF6CAF148BF947B1F3B07C78E26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627 * L_0 = ((PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t811D12CA4ECDC868E53C383130E35DA936056627_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_1 = __this->get_action_0();
		NullCheck(L_0);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m9281537C04CF6A58EBDC1AA969B7E23D3CA3A7FB (U3CU3Ec__DisplayClass28_0_t150D29E7B0A91B4429E8E03207C1D0B60D29C143 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass28_0::<GetStats>b__0(GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CGetStatsU3Eb__0_mB3BEE18558369DA348AE5651756579C475260C74 (U3CU3Ec__DisplayClass28_0_t150D29E7B0A91B4429E8E03207C1D0B60D29C143 * __this, int32_t ___rc0, PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5 * ___stats1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m237B2A62251C7CD4622DF9B2504C1D25BA77CC6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mStats = stats;
		PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D * L_0 = __this->get_U3CU3E4__this_0();
		PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5 * L_1 = ___stats1;
		NullCheck(L_0);
		L_0->set_mStats_8(L_1);
		// callback(rc, stats);
		Action_2_t780FB18E67AC464A50B094492A06E11D0DF1D172 * L_2 = __this->get_callback_1();
		int32_t L_3 = ___rc0;
		PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5 * L_4 = ___stats1;
		NullCheck(L_2);
		Action_2_Invoke_m237B2A62251C7CD4622DF9B2504C1D25BA77CC6F(L_2, L_3, L_4, /*hidden argument*/Action_2_Invoke_m237B2A62251C7CD4622DF9B2504C1D25BA77CC6F_RuntimeMethod_var);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6648861D22CA9B6CACB07F84BB016D973C1D7D66 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C * L_0 = (U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C *)il2cpp_codegen_object_new(U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5FD324462D3F0470C8999EB5251AF0AE5ED7034A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5FD324462D3F0470C8999EB5251AF0AE5ED7034A (U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c::<Authenticate>b__34_0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAuthenticateU3Eb__34_0_m4AC218CCD9C2A0EEC567B13A89D784D9A989A3BD (U3CU3Ec_t200631AB2C50F5CA8778D01234B0A16A28B94B4C * __this, int32_t ___status0, const RuntimeMethod* method)
{
	{
		// callback = status => { };
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mC5AEBA858E3303B42A72A504ECDEA9BEC3689139 (U3CU3Ec__DisplayClass26_0_t684AD2B7D17BC4B3280BB0A8C56617AAE7FBE3F7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0::<InitializeNearby>b__0(GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3CInitializeNearbyU3Eb__0_m500A39FBDE308304986D5404DBC85C015DF3EB7E (U3CU3Ec__DisplayClass26_0_t684AD2B7D17BC4B3280BB0A8C56617AAE7FBE3F7 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m09A2BB65EE7BC55D17B7CA3B91507DC1E688A084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D57A629D6E7F8930979EC2AF07A919C72FEEE0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD066E42B63E30EFFD3D9F2C9C79629108906EC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Nearby Client Created!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9D57A629D6E7F8930979EC2AF07A919C72FEEE0E, /*hidden argument*/NULL);
		// sNearbyConnectionClient = client;
		RuntimeObject* L_0 = ___client0;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_il2cpp_TypeInfo_var);
		il2cpp_codegen_memory_barrier();
		((PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_il2cpp_TypeInfo_var))->set_sNearbyConnectionClient_2(L_0);
		// if (callback != null) {
		Action_1_tD4E3131F8801005BF06CEBA1838FA49CBB285172 * L_1 = __this->get_callback_0();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// callback.Invoke(client);
		Action_1_tD4E3131F8801005BF06CEBA1838FA49CBB285172 * L_2 = __this->get_callback_0();
		RuntimeObject* L_3 = ___client0;
		NullCheck(L_2);
		Action_1_Invoke_m09A2BB65EE7BC55D17B7CA3B91507DC1E688A084(L_2, L_3, /*hidden argument*/Action_1_Invoke_m09A2BB65EE7BC55D17B7CA3B91507DC1E688A084_RuntimeMethod_var);
		// }
		return;
	}

IL_0027:
	{
		// Debug.Log("Initialize Nearby callback is null");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBD066E42B63E30EFFD3D9F2C9C79629108906EC6, /*hidden argument*/NULL);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m33BEA0CC11B5B09B27B540D4E7DEEB0ADCF878C7 (U3CU3Ec__DisplayClass32_0_t6B06D770672F582CF8229A1F66B5E64B8280A64F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass32_0::<Authenticate>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0_U3CAuthenticateU3Eb__0_m2FE6A12EE66E180E018FA29B5CBF8CF28FEB874F (U3CU3Ec__DisplayClass32_0_t6B06D770672F582CF8229A1F66B5E64B8280A64F * __this, bool ___success0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Authenticate((bool success, string msg) => callback(success), silent);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_callback_0();
		bool L_1 = ___success0;
		NullCheck(L_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_0, L_1, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mF89557282FC61F2ABA9A766469425447A3183565 (U3CU3Ec__DisplayClass33_0_t7D78215E69AC13544E46050D9799EF7296ABDF75 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass33_0::<Authenticate>b__0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CAuthenticateU3Eb__0_mE6C73EEE24BB53F0733D628F5038DF579222761E (U3CU3Ec__DisplayClass33_0_t7D78215E69AC13544E46050D9799EF7296ABDF75 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F68AE3E326214C34B37D67806E67D572E7F9947);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F159651BB274F35A4016D49CAFAEFBF01496CB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C48774A0B59B21ACDD799A6675B25C3C8DDC51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF52A7F41AA0A7805139481921965C616D126D7F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (status == SignInStatus.Success)
		int32_t L_0 = ___status0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// callback(true, "Authentication succeeded");
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_1 = __this->get_callback_0();
		NullCheck(L_1);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(L_1, (bool)1, _stringLiteralF52A7F41AA0A7805139481921965C616D126D7F3, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		// }
		return;
	}

IL_0015:
	{
		// else if (status == SignInStatus.Canceled)
		int32_t L_2 = ___status0;
		if ((!(((uint32_t)L_2) == ((uint32_t)5))))
		{
			goto IL_0035;
		}
	}
	{
		// callback(false, "Authentication canceled");
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_3 = __this->get_callback_0();
		NullCheck(L_3);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(L_3, (bool)0, _stringLiteral2F68AE3E326214C34B37D67806E67D572E7F9947, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		// GooglePlayGames.OurUtils.Logger.d("Authentication canceled");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(_stringLiteral2F68AE3E326214C34B37D67806E67D572E7F9947, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0035:
	{
		// else if (status == SignInStatus.DeveloperError)
		int32_t L_4 = ___status0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0055;
		}
	}
	{
		// callback(false, "Authentication failed - developer error");
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_5 = __this->get_callback_0();
		NullCheck(L_5);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(L_5, (bool)0, _stringLiteral4F159651BB274F35A4016D49CAFAEFBF01496CB0, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		// GooglePlayGames.OurUtils.Logger.d("Authentication failed - developer error");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(_stringLiteral4F159651BB274F35A4016D49CAFAEFBF01496CB0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0055:
	{
		// callback(false, "Authentication failed");
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_6 = __this->get_callback_0();
		NullCheck(L_6);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(L_6, (bool)0, _stringLiteralC8C48774A0B59B21ACDD799A6675B25C3C8DDC51, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		// GooglePlayGames.OurUtils.Logger.d("Authentication failed");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(_stringLiteralC8C48774A0B59B21ACDD799A6675B25C3C8DDC51, /*hidden argument*/NULL);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m491C5DF474F1F9F94C9AB6509E8AD16CE1CA6B0F (U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0::<Authenticate>b__1(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CAuthenticateU3Eb__1_m68CE12D6A677A82C0F195376B8535BEC00C8747C (U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E * __this, int32_t ___code0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (code == SignInStatus.UiSignInRequired &&
		//     Application.internetReachability == NetworkReachability.NotReachable)
		int32_t L_0 = ___code0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_internetReachability_m039C30126BD989614BF2A4A3F33129177A95C61C(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// callback(SignInStatus.NetworkError);
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_2 = __this->get_callback_0();
		NullCheck(L_2);
		Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28(L_2, 3, /*hidden argument*/Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		// }
		return;
	}

IL_0018:
	{
		// callback(code);
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_3 = __this->get_callback_0();
		int32_t L_4 = ___code0;
		NullCheck(L_3);
		Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28(L_3, L_4, /*hidden argument*/Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0::<Authenticate>b__2(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CAuthenticateU3Eb__2_m1926C270CAD760690071CE0DFD6B144FA0FF888F (U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E * __this, int32_t ___code0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (code == SignInStatus.Canceled &&
		//     Application.internetReachability == NetworkReachability.NotReachable)
		int32_t L_0 = ___code0;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_internetReachability_m039C30126BD989614BF2A4A3F33129177A95C61C(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// callback(SignInStatus.NetworkError);
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_2 = __this->get_callback_0();
		NullCheck(L_2);
		Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28(L_2, 3, /*hidden argument*/Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		// }
		return;
	}

IL_0018:
	{
		// callback(code);
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_3 = __this->get_callback_0();
		int32_t L_4 = ___code0;
		NullCheck(L_3);
		Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28(L_3, L_4, /*hidden argument*/Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0::<Authenticate>b__3(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CAuthenticateU3Eb__3_mD84CDAF23D41662BC03B81C9C20F8E7069C9828A (U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E * __this, int32_t ___silentSignInResultCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4D22D4BF4A7C54B4ED2878B61E89577070B4866C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayGamesClient_tA36CDA40256B599478F8269F31F083BF577CD3C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CAuthenticateU3Eb__5_m86D14AB77710CF4EC079744202286778AD774F31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral561E871CE42CF20E1FB60AA8B6941D7D0B7B9466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB823F51FA08DCBD192B331D861F6AD3669FDFB59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1003F25B0B39EA0A70315465C29B77F91F1AA46);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * V_0 = NULL;
	Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	RuntimeObject* G_B8_2 = NULL;
	Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject* G_B7_2 = NULL;
	{
		// if (silentSignInResultCode == SignInStatus.Success)
		int32_t L_0 = ___silentSignInResultCode0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// OurUtils.Logger.d("Successful, triggering callback");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(_stringLiteralC1003F25B0B39EA0A70315465C29B77F91F1AA46, /*hidden argument*/NULL);
		// callback(silentSignInResultCode);
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_1 = __this->get_callback_0();
		int32_t L_2 = ___silentSignInResultCode0;
		NullCheck(L_1);
		Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28(L_1, L_2, /*hidden argument*/Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		// return;
		return;
	}

IL_001a:
	{
		// if (!SignInHelper.ShouldPromptUiSignIn())
		IL2CPP_RUNTIME_CLASS_INIT(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SignInHelper_ShouldPromptUiSignIn_m132C7EBDCF7F1F041F512D9CB846BA64DB7F4951(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		// OurUtils.Logger.d(
		//     "User cancelled sign in attempt in the previous attempt. Triggering callback with silentSignInResultCode");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(_stringLiteralB823F51FA08DCBD192B331D861F6AD3669FDFB59, /*hidden argument*/NULL);
		// callback(silentSignInResultCode);
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_4 = __this->get_callback_0();
		int32_t L_5 = ___silentSignInResultCode0;
		NullCheck(L_4);
		Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28(L_4, L_5, /*hidden argument*/Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		// return;
		return;
	}

IL_0038:
	{
		// if (Application.internetReachability == NetworkReachability.NotReachable)
		int32_t L_6;
		L_6 = Application_get_internetReachability_m039C30126BD989614BF2A4A3F33129177A95C61C(/*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		// OurUtils.Logger.d("No internet connection");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(_stringLiteral561E871CE42CF20E1FB60AA8B6941D7D0B7B9466, /*hidden argument*/NULL);
		// callback(SignInStatus.NetworkError);
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_7 = __this->get_callback_0();
		NullCheck(L_7);
		Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28(L_7, 3, /*hidden argument*/Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		// return;
		return;
	}

IL_0056:
	{
		// mClient.Authenticate( /* silent= */ false, interactiveSignInResultCode =>
		// {
		//     // 5. Save that the user has cancelled the interactive sign in.
		//     if (interactiveSignInResultCode == SignInStatus.Canceled)
		//     {
		//         OurUtils.Logger.d("Cancelled, saving this to a shared pref");
		//         SignInHelper.SetPromptUiSignIn(false);
		//     }
		// 
		//     callback(interactiveSignInResultCode);
		// });
		PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * L_8 = __this->get_U3CU3E4__this_1();
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->get_mClient_5();
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_10 = __this->get_U3CU3E9__5_2();
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_11 = L_10;
		G_B7_0 = L_11;
		G_B7_1 = 0;
		G_B7_2 = L_9;
		if (L_11)
		{
			G_B8_0 = L_11;
			G_B8_1 = 0;
			G_B8_2 = L_9;
			goto IL_0081;
		}
	}
	{
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_12 = (Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD *)il2cpp_codegen_object_new(Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD_il2cpp_TypeInfo_var);
		Action_1__ctor_m4D22D4BF4A7C54B4ED2878B61E89577070B4866C(L_12, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass34_0_U3CAuthenticateU3Eb__5_m86D14AB77710CF4EC079744202286778AD774F31_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4D22D4BF4A7C54B4ED2878B61E89577070B4866C_RuntimeMethod_var);
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_13 = L_12;
		V_0 = L_13;
		__this->set_U3CU3E9__5_2(L_13);
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_14 = V_0;
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_0081:
	{
		NullCheck(G_B8_2);
		InterfaceActionInvoker2< bool, Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::Authenticate(System.Boolean,System.Action`1<GooglePlayGames.BasicApi.SignInStatus>) */, IPlayGamesClient_tA36CDA40256B599478F8269F31F083BF577CD3C2_il2cpp_TypeInfo_var, G_B8_2, (bool)G_B8_1, G_B8_0);
		// });
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0::<Authenticate>b__5(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CAuthenticateU3Eb__5_m86D14AB77710CF4EC079744202286778AD774F31 (U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E * __this, int32_t ___interactiveSignInResultCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF16D4694D202A12DE193813F4FF291AA003B00DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interactiveSignInResultCode == SignInStatus.Canceled)
		int32_t L_0 = ___interactiveSignInResultCode0;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0014;
		}
	}
	{
		// OurUtils.Logger.d("Cancelled, saving this to a shared pref");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(_stringLiteralF16D4694D202A12DE193813F4FF291AA003B00DB, /*hidden argument*/NULL);
		// SignInHelper.SetPromptUiSignIn(false);
		IL2CPP_RUNTIME_CLASS_INIT(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_il2cpp_TypeInfo_var);
		SignInHelper_SetPromptUiSignIn_mBB5355FA97893E14DB63BB01AEC6C06A04570C13((bool)0, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// callback(interactiveSignInResultCode);
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_1 = __this->get_callback_0();
		int32_t L_2 = ___interactiveSignInResultCode0;
		NullCheck(L_1);
		Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28(L_1, L_2, /*hidden argument*/Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass34_0::<Authenticate>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CAuthenticateU3Eb__4_mAFDA6058E95AE23BB5CD9111522341C0F20DD0D1 (U3CU3Ec__DisplayClass34_0_t465ECE92CB9930232D66EBEB0BC9B9FC17FCFB1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => callback(SignInStatus.Failed));
		Action_1_t0084D2063B6BB7EFC417622D904815F358F0BCCD * L_0 = __this->get_callback_0();
		NullCheck(L_0);
		Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28(L_0, 7, /*hidden argument*/Action_1_Invoke_m7858D97CDAC7F2E16C7497A48E790B0B79CA4B28_RuntimeMethod_var);
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_mACBDAD4DC95AF11035C0308CCFB26DA79C6C5A2C (U3CU3Ec__DisplayClass43_0_tC90D0336F3B473DD7832FF49C6F7F28E44207057 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::<GetAnotherServerAuthCode>b__0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0_U3CGetAnotherServerAuthCodeU3Eb__0_m95A444F9A5542D1034CCAA67161641DCB71C1848 (U3CU3Ec__DisplayClass43_0_tC90D0336F3B473DD7832FF49C6F7F28E44207057 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayGamesClient_tA36CDA40256B599478F8269F31F083BF577CD3C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInStatus_t8AB2FD9416400CA43D65FC1F4217E509CE05D968_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B6669BAAD37B7226E250B52C3705FCEE60C26D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (status == SignInStatus.Success)
		int32_t L_0 = ___status0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		// callback(mClient.GetServerAuthCode());
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = __this->get_callback_0();
		PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * L_2 = __this->get_U3CU3E4__this_1();
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->get_mClient_5();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String GooglePlayGames.BasicApi.IPlayGamesClient::GetServerAuthCode() */, IPlayGamesClient_tA36CDA40256B599478F8269F31F083BF577CD3C2_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_1);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_1, L_4, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// }
		return;
	}

IL_001f:
	{
		// OurUtils.Logger.e("Re-authentication failed: " + status);
		RuntimeObject * L_5 = Box(SignInStatus_t8AB2FD9416400CA43D65FC1F4217E509CE05D968_il2cpp_TypeInfo_var, (&___status0));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		___status0 = *(int32_t*)UnBox(L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7B6669BAAD37B7226E250B52C3705FCEE60C26D8, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_e_mAD1FDCCD1269ED7775BF3B1770E052D7915929BC(L_7, /*hidden argument*/NULL);
		// callback(null);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8 = __this->get_callback_0();
		NullCheck(L_8);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_8, (String_t*)NULL, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m231317B15861A0CA93D0A4BAC429C416B322879F (U3CU3Ec__DisplayClass48_0_t293E38584D2A6B4BB58792D4BB9704AF87B46297 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass48_0::<ReportProgress>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0_U3CReportProgressU3Eb__0_mAAA85B6379CE4A6582B3575E37BFD53CA1E05037 (U3CU3Ec__DisplayClass48_0_t293E38584D2A6B4BB58792D4BB9704AF87B46297 * __this, AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayGamesClient_tA36CDA40256B599478F8269F31F083BF577CD3C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24278202528A13F91A7E8306203F176C630AAF51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC63555F5631A509A767F8CAE7C637344AE34C6D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC92578BDC42DAC206202E3F97935E34FD1106EAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4B0E2541EDBBB3C6491A2744BB22061C9DD7BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6BB44F4BC9F8D1D63EFDF77186766035805DAAF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < ach.Length; i++)
		V_0 = 0;
		goto IL_0139;
	}

IL_0007:
	{
		// if (ach[i].Id == achievementID)
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_0 = ___ach0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Achievement_get_Id_m5D158C02B91C51A14EEAEF34FA40189DA7D2AC78_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_achievementID_0();
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0135;
		}
	}
	{
		// if (ach[i].IsIncremental)
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_7 = ___ach0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		bool L_11;
		L_11 = Achievement_get_IsIncremental_m46F4FC2667A800F29D427BEFF0800269161F9A9B_inline(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00bc;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("Progress " + progress +
		//                                   " interpreted as incremental target (approximate).");
		double* L_12 = __this->get_address_of_progress_1();
		String_t* L_13;
		L_13 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71, L_13, _stringLiteralCE4B0E2541EDBBB3C6491A2744BB22061C9DD7BD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(L_14, /*hidden argument*/NULL);
		// if (progress >= 0.0 && progress <= 1.0)
		double L_15 = __this->get_progress_1();
		if ((!(((double)L_15) >= ((double)(0.0)))))
		{
			goto IL_008c;
		}
	}
	{
		double L_16 = __this->get_progress_1();
		if ((!(((double)L_16) <= ((double)(1.0)))))
		{
			goto IL_008c;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.w(
		//     "Progress " + progress +
		//     " is less than or equal to 1. You might be trying to use values in the range of [0,1], while values are expected to be within the range [0,100]. If you are using the latter, you can safely ignore this message.");
		double* L_17 = __this->get_address_of_progress_1();
		String_t* L_18;
		L_18 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71, L_18, _stringLiteralC92578BDC42DAC206202E3F97935E34FD1106EAC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_w_m414F13A48103BD802CE1644BC96C5879889468A8(L_19, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// mClient.SetStepsAtLeast(achievementID, progressToSteps(progress, ach[i].TotalSteps), callback);
		PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * L_20 = __this->get_U3CU3E4__this_2();
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->get_mClient_5();
		String_t* L_22 = __this->get_achievementID_0();
		double L_23 = __this->get_progress_1();
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_24 = ___ach0;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Achievement_get_TotalSteps_m298B96E8E8DC4240DA2F032A3D3327483B16C2A3_inline(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = PlayGamesPlatform_progressToSteps_mFBC6117228FF628B4194DF22DEC7EC2EA8A11A62(L_23, L_28, /*hidden argument*/NULL);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_30 = __this->get_callback_3();
		NullCheck(L_21);
		InterfaceActionInvoker3< String_t*, int32_t, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(17 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>) */, IPlayGamesClient_tA36CDA40256B599478F8269F31F083BF577CD3C2_il2cpp_TypeInfo_var, L_21, L_22, L_29, L_30);
		// }
		return;
	}

IL_00bc:
	{
		// if (progress >= 100)
		double L_31 = __this->get_progress_1();
		if ((!(((double)L_31) >= ((double)(100.0)))))
		{
			goto IL_0109;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("Progress " + progress + " interpreted as UNLOCK.");
		double* L_32 = __this->get_address_of_progress_1();
		String_t* L_33;
		L_33 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_32, /*hidden argument*/NULL);
		String_t* L_34;
		L_34 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71, L_33, _stringLiteralC63555F5631A509A767F8CAE7C637344AE34C6D2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(L_34, /*hidden argument*/NULL);
		// mClient.UnlockAchievement(achievementID, callback);
		PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		RuntimeObject* L_36 = L_35->get_mClient_5();
		String_t* L_37 = __this->get_achievementID_0();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_38 = __this->get_callback_3();
		NullCheck(L_36);
		InterfaceActionInvoker2< String_t*, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(14 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>) */, IPlayGamesClient_tA36CDA40256B599478F8269F31F083BF577CD3C2_il2cpp_TypeInfo_var, L_36, L_37, L_38);
		// }
		return;
	}

IL_0109:
	{
		// GooglePlayGames.OurUtils.Logger.d(
		//     "Progress " + progress + " not enough to unlock non-incremental achievement.");
		double* L_39 = __this->get_address_of_progress_1();
		String_t* L_40;
		L_40 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_39, /*hidden argument*/NULL);
		String_t* L_41;
		L_41 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71, L_40, _stringLiteral24278202528A13F91A7E8306203F176C630AAF51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_d_m350987175B36E8B1A5896367A32B197F73B0864A(L_41, /*hidden argument*/NULL);
		// callback.Invoke(false);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_42 = __this->get_callback_3();
		NullCheck(L_42);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_42, (bool)0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// return;
		return;
	}

IL_0135:
	{
		// for (int i = 0; i < ach.Length; i++)
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_0139:
	{
		// for (int i = 0; i < ach.Length; i++)
		int32_t L_44 = V_0;
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_45 = ___ach0;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("Unable to locate achievement " + achievementID);
		String_t* L_46 = __this->get_achievementID_0();
		String_t* L_47;
		L_47 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF6BB44F4BC9F8D1D63EFDF77186766035805DAAF, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_e_mAD1FDCCD1269ED7775BF3B1770E052D7915929BC(L_47, /*hidden argument*/NULL);
		// callback.Invoke(false);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_48 = __this->get_callback_3();
		NullCheck(L_48);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_48, (bool)0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass54_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_0__ctor_m24E85F41A9BA265F90DA578CEA8DFAA496D2045E (U3CU3Ec__DisplayClass54_0_t2C1C0AEB70F28FE12EB9AB1949982C5F687C7D8B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass54_0::<LoadAchievementDescriptions>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_0_U3CLoadAchievementDescriptionsU3Eb__0_mEF36CF303CC905E9E03B4EE76CE764A4B89A42E2 (U3CU3Ec__DisplayClass54_0_t2C1C0AEB70F28FE12EB9AB1949982C5F687C7D8B * __this, AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IAchievementDescription[] data = new IAchievementDescription[ach.Length];
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_0 = ___ach0;
		NullCheck(L_0);
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_1 = (IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*)(IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*)SZArrayNew(IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < data.Length; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		// data[i] = new PlayGamesAchievement(ach[i]);
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_2 = V_0;
		int32_t L_3 = V_1;
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_4 = ___ach0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC * L_8 = (PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC *)il2cpp_codegen_object_new(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_m1AADF536FEBBA8A0950FED687ED4566391355A95(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_10 = V_1;
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// callback.Invoke(data);
		Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * L_12 = __this->get_callback_0();
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_13 = V_0;
		NullCheck(L_12);
		Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F(L_12, L_13, /*hidden argument*/Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass55_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0__ctor_m2644FE9D35E2AE30736CB25C55D1E87FCDF26B9A (U3CU3Ec__DisplayClass55_0_tB601FA13744A693A4BDBA5571C84943748DF75E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass55_0::<LoadAchievements>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0_U3CLoadAchievementsU3Eb__0_m4551E6C4F6549CEBA6B01AAEB34BD01F15A086B1 (U3CU3Ec__DisplayClass55_0_tB601FA13744A693A4BDBA5571C84943748DF75E4 * __this, AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IAchievement[] data = new IAchievement[ach.Length];
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_0 = ___ach0;
		NullCheck(L_0);
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_1 = (IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*)(IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*)SZArrayNew(IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < data.Length; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		// data[i] = new PlayGamesAchievement(ach[i]);
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_2 = V_0;
		int32_t L_3 = V_1;
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_4 = ___ach0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC * L_8 = (PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC *)il2cpp_codegen_object_new(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_m1AADF536FEBBA8A0950FED687ED4566391355A95(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_10 = V_1;
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// callback.Invoke(data);
		Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * L_12 = __this->get_callback_0();
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_13 = V_0;
		NullCheck(L_12);
		Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3(L_12, L_13, /*hidden argument*/Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m424EAA0BBDAAF60FF2F829575E7BA9032899072B (U3CU3Ec__DisplayClass59_0_t9DFEEEB531D2C725E083DAEF4BF8420F7FC344DE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::<LoadScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0_U3CLoadScoresU3Eb__0_m8588A5F10BA3C39E0F427A2FE1E019364DED07DB (U3CU3Ec__DisplayClass59_0_t9DFEEEB531D2C725E083DAEF4BF8420F7FC344DE * __this, LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * ___scoreData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (scoreData) => callback(scoreData.Scores));
		Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * L_0 = __this->get_callback_0();
		LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * L_1 = ___scoreData0;
		NullCheck(L_1);
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_2;
		L_2 = LeaderboardScoreData_get_Scores_m0A69C71CC01A46E9E4B476A77A4B8B1785189F3D(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD(L_0, L_2, /*hidden argument*/Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var);
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass71_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0__ctor_m81792E1F40A4D9D471F2A8A59BEAED200C9C4108 (U3CU3Ec__DisplayClass71_0_t1813507FF5EADFCDC442ADB7974D4FEFB93D3D02 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass71_0::<LoadScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0_U3CLoadScoresU3Eb__0_m311ABA420EF7919BD0DDAB0EE5B538E401EFDC49 (U3CU3Ec__DisplayClass71_0_t1813507FF5EADFCDC442ADB7974D4FEFB93D3D02 * __this, LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * ___scoreData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (scoreData) => HandleLoadingScores(
		//     (PlayGamesLeaderboard) board, scoreData, callback));
		PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_board_1();
		LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * L_2 = ___scoreData0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = __this->get_callback_2();
		NullCheck(L_0);
		PlayGamesPlatform_HandleLoadingScores_m69FF25A7548F8E0E564F1DB56E3AB9B3BFB8AE45(L_0, ((PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B *)CastclassClass((RuntimeObject*)L_1, PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B_il2cpp_TypeInfo_var)), L_2, L_3, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass83_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass83_0__ctor_mE3B1BEFDCD8785292181AF80728154EC46BC6EBB (U3CU3Ec__DisplayClass83_0_tDA034E050CF988B317ECCBFECC6464B9A24B7FF8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass83_0::<HandleLoadingScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass83_0_U3CHandleLoadingScoresU3Eb__0_mCB88352C6B55A7839EBCB29A57832212416F8F08 (U3CU3Ec__DisplayClass83_0_tDA034E050CF988B317ECCBFECC6464B9A24B7FF8 * __this, LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * ___nextScoreData0, const RuntimeMethod* method)
{
	{
		// HandleLoadingScores(board, nextScoreData, callback));
		PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * L_0 = __this->get_U3CU3E4__this_0();
		PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B * L_1 = __this->get_board_1();
		LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * L_2 = ___nextScoreData0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = __this->get_callback_2();
		NullCheck(L_0);
		PlayGamesPlatform_HandleLoadingScores_m69FF25A7548F8E0E564F1DB56E3AB9B3BFB8AE45(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__23__ctor_mC35143F2F734BA0EC3775DCEB905494FD3BBDDEF (U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__23_System_IDisposable_Dispose_m973028F9B63140F8C19213AFDFA646E659617404 (U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadImageU3Ed__23_MoveNext_m5A4EA47510C7D0BE5E9F49AB4604BDCA9BA63B28 (U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3C7000ACF0EB48C1458817E59DD90219ED2B97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE92B3B0982727A84D8DF8E6115B5FCC5E335A33);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!string.IsNullOrEmpty(AvatarURL))
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = PlayGamesUserProfile_get_AvatarURL_m9B1156AA75A22DE0DE0961CE0D97D7DCE1154F46_inline(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_00c8;
		}
	}
	{
		// UnityWebRequest www = UnityWebRequestTexture.GetTexture(AvatarURL);
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = PlayGamesUserProfile_get_AvatarURL_m9B1156AA75A22DE0DE0961CE0D97D7DCE1154F46_inline(L_7, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9;
		L_9 = UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37(L_8, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_9);
		// www.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_10);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_11;
		L_11 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_10, /*hidden argument*/NULL);
		goto IL_0064;
	}

IL_004d:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0064:
	{
		// while (!www.isDone)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_12);
		bool L_13;
		L_13 = UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		// if (www.error == null)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0091;
		}
	}
	{
		// this.mImage = DownloadHandlerTexture.GetContent(www);
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_16 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CwwwU3E5__2_3();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18;
		L_18 = DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_mImage_5(L_18);
		// }
		goto IL_00b6;
	}

IL_0091:
	{
		// mImage = Texture2D.blackTexture;
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_19 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20;
		L_20 = Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE(/*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set_mImage_5(L_20);
		// OurUtils.Logger.e("Error downloading image: " + www.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_21 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_21);
		String_t* L_22;
		L_22 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCE92B3B0982727A84D8DF8E6115B5FCC5E335A33, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_e_mAD1FDCCD1269ED7775BF3B1770E052D7915929BC(L_23, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// mImageLoading = false;
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_24 = V_1;
		NullCheck(L_24);
		il2cpp_codegen_memory_barrier();
		L_24->set_mImageLoading_4(0);
		// }
		__this->set_U3CwwwU3E5__2_3((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		goto IL_00e6;
	}

IL_00c8:
	{
		// OurUtils.Logger.e("No URL found.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3CA8CDA0069054EEEB97286B98E898DEAF625207_il2cpp_TypeInfo_var);
		Logger_e_mAD1FDCCD1269ED7775BF3B1770E052D7915929BC(_stringLiteral1B3C7000ACF0EB48C1458817E59DD90219ED2B97, /*hidden argument*/NULL);
		// mImage = Texture2D.blackTexture;
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_25 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26;
		L_26 = Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE(/*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_mImage_5(L_26);
		// mImageLoading = false;
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_27 = V_1;
		NullCheck(L_27);
		il2cpp_codegen_memory_barrier();
		L_27->set_mImageLoading_4(0);
	}

IL_00e6:
	{
		// }
		return (bool)0;
	}
}
// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m38F1F3BA17FC6AB98A6F5FACF65C968E0F351B94 (U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mC2EAA89EB4670EF602DD77F282D50C38466E6E7B (U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mC2EAA89EB4670EF602DD77F282D50C38466E6E7B_RuntimeMethod_var)));
	}
}
// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__23_System_Collections_IEnumerator_get_Current_mE441401BB442FE111F29F9F940459D80B3E19A6D (U3CLoadImageU3Ed__23_t05F627614FCD7124E1C7FA7861DE2891A4219016 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayerNetwork/<DetectEnemy>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDetectEnemyU3Ed__35__ctor_m9E84784F4727789DCC5BA6BA204EF7ABFC46665C (U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerNetwork/<DetectEnemy>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDetectEnemyU3Ed__35_System_IDisposable_Dispose_m7A609461E7C3BF7E34ABECFBA2D1C00C73CE81A5 (U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerNetwork/<DetectEnemy>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDetectEnemyU3Ed__35_MoveNext_m6ED0666C43708CAC8DD9F20E289A5558544A9369 (U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// here_obj.SetActive(false);
		PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_here_obj_6();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// if (gameObject.GetComponent<Animator>().GetFloat("Speed") > 3f)
		PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8;
		L_8 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_7, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9;
		L_9 = Animator_GetFloat_m74C168FD46C780CD153838BDCE77F8B371456D46(L_8, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, /*hidden argument*/NULL);
		if ((!(((float)L_9) > ((float)(3.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		// here_obj.SetActive(true);
		PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_here_obj_6();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0072:
	{
		// }
		return (bool)0;
	}
}
// System.Object PlayerNetwork/<DetectEnemy>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDetectEnemyU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB8C28BECE5A71CAB5600ACD84D3633B1A2F82F80 (U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerNetwork/<DetectEnemy>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDetectEnemyU3Ed__35_System_Collections_IEnumerator_Reset_m708020D29DE4C92AAC2B6D2BC865525249F2D937 (U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDetectEnemyU3Ed__35_System_Collections_IEnumerator_Reset_m708020D29DE4C92AAC2B6D2BC865525249F2D937_RuntimeMethod_var)));
	}
}
// System.Object PlayerNetwork/<DetectEnemy>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDetectEnemyU3Ed__35_System_Collections_IEnumerator_get_Current_m2E4672F2591B3B0D3A7E8A21A2584704760844D8 (U3CDetectEnemyU3Ed__35_t9C012D9F502F5759030D6D7BB040926E372312E9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayerNetwork/<FogDelay>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFogDelayU3Ed__34__ctor_m262B844469FFFB7DA14254AD116DA1ED6EC85C8A (U3CFogDelayU3Ed__34_t92184A2A8B57330D7AB094270EB5B9E5DB09BAAB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerNetwork/<FogDelay>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFogDelayU3Ed__34_System_IDisposable_Dispose_mD7E399C2A3E8C27C1447ACDCA58812D2C47E58F5 (U3CFogDelayU3Ed__34_t92184A2A8B57330D7AB094270EB5B9E5DB09BAAB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerNetwork/<FogDelay>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFogDelayU3Ed__34_MoveNext_mEFF218EDC279C4AAC21F0AD2E51589F7E9DA8F94 (U3CFogDelayU3Ed__34_t92184A2A8B57330D7AB094270EB5B9E5DB09BAAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Fog.instance.LinearStart = -3f;
		Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172 * L_4 = ((Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172_StaticFields*)il2cpp_codegen_static_fields_for(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		L_4->set_LinearStart_9((-3.0f));
		// Fog.instance.LinearEnd = 1.3f;
		Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172 * L_5 = ((Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172_StaticFields*)il2cpp_codegen_static_fields_for(Fog_t543789B4E9C5F9B414DC46F2D496846EF15D0172_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_5);
		L_5->set_LinearEnd_10((1.29999995f));
		// }
		return (bool)0;
	}
}
// System.Object PlayerNetwork/<FogDelay>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFogDelayU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCF524EDC13BA2CF4FD295E928D71F19FF95EB8A8 (U3CFogDelayU3Ed__34_t92184A2A8B57330D7AB094270EB5B9E5DB09BAAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerNetwork/<FogDelay>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFogDelayU3Ed__34_System_Collections_IEnumerator_Reset_mCFDD3BFF2163BF1BD1B4FDECEE8CBA8BEF5289EA (U3CFogDelayU3Ed__34_t92184A2A8B57330D7AB094270EB5B9E5DB09BAAB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFogDelayU3Ed__34_System_Collections_IEnumerator_Reset_mCFDD3BFF2163BF1BD1B4FDECEE8CBA8BEF5289EA_RuntimeMethod_var)));
	}
}
// System.Object PlayerNetwork/<FogDelay>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFogDelayU3Ed__34_System_Collections_IEnumerator_get_Current_m8FA90C1EF1BAE34DD7A96E8DCCFD66BE2FC97E19 (U3CFogDelayU3Ed__34_t92184A2A8B57330D7AB094270EB5B9E5DB09BAAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayerNetwork/<HurtImg>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHurtImgU3Ed__28__ctor_m8E93E8CF1FF20B17AA839871735547BDEEC5C374 (U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerNetwork/<HurtImg>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHurtImgU3Ed__28_System_IDisposable_Dispose_m2F197135FEA79905EF75B406F493651731040E26 (U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerNetwork/<HurtImg>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHurtImgU3Ed__28_MoveNext_m326B014606B1E731AA88FC249CB60FC4A72784ED (U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// img_hurt.SetActive(true);
		PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_img_hurt_17();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// img_hurt.SetActive(false);
		PlayerNetwork_tD66B71CDB387946D828BF01550BF668886C7D724 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_img_hurt_17();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerNetwork/<HurtImg>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHurtImgU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD55216E2D7F983FDF47B98E213D7080688F2EFA (U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerNetwork/<HurtImg>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHurtImgU3Ed__28_System_Collections_IEnumerator_Reset_m80B0326F168D4EFE52099E358A0EBB87D81B2202 (U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHurtImgU3Ed__28_System_Collections_IEnumerator_Reset_m80B0326F168D4EFE52099E358A0EBB87D81B2202_RuntimeMethod_var)));
	}
}
// System.Object PlayerNetwork/<HurtImg>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHurtImgU3Ed__28_System_Collections_IEnumerator_get_Current_m2492E04243E763FAA90D5D1B3A08E8AE0C42963B (U3CHurtImgU3Ed__28_t6FCA7103606D904B4B1750DFA0CBE3361E5A8DB6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Ragdoll/<DropRagdoll_Co>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDropRagdoll_CoU3Ed__5__ctor_m16BD18E5EEF77A8AE68E7E5C3AFBFC28C1408FCB (U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ragdoll/<DropRagdoll_Co>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDropRagdoll_CoU3Ed__5_System_IDisposable_Dispose_mDCAEC41B7CC0B93C7180895550FC118C03EC9513 (U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ragdoll/<DropRagdoll_Co>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDropRagdoll_CoU3Ed__5_MoveNext_mB620BE641E0A67B7E15C9A93CC353E06FC635F7C (U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GetComponent<Animator>().enabled = false;
		Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * L_4 = V_1;
		NullCheck(L_4);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5;
		L_5 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_4, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)0, /*hidden argument*/NULL);
		// setRigidbodyState(false);
		Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * L_6 = V_1;
		NullCheck(L_6);
		Ragdoll_setRigidbodyState_m44FA1658B1B027702087BCC70544BCED66D23216(L_6, (bool)0, /*hidden argument*/NULL);
		// setColliderState(true);
		Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * L_7 = V_1;
		NullCheck(L_7);
		Ragdoll_setColliderState_m32EA40B4D7FE25C93E88585A5F57B599E591D3EB(L_7, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0051:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GetComponent<Animator>().enabled = true;
		Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * L_9 = V_1;
		NullCheck(L_9);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10;
		L_10 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_9, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		NullCheck(L_10);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_10, (bool)1, /*hidden argument*/NULL);
		// setRigidbodyState(true);
		Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * L_11 = V_1;
		NullCheck(L_11);
		Ragdoll_setRigidbodyState_m44FA1658B1B027702087BCC70544BCED66D23216(L_11, (bool)1, /*hidden argument*/NULL);
		// setColliderState(false);
		Ragdoll_tCF1716779BC76997C0B7AB01BA6FCB6DB3F9FA91 * L_12 = V_1;
		NullCheck(L_12);
		Ragdoll_setColliderState_m32EA40B4D7FE25C93E88585A5F57B599E591D3EB(L_12, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Ragdoll/<DropRagdoll_Co>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDropRagdoll_CoU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m09B4858C485B9BFD0F1FB3C5CF4707FD9926E72D (U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ragdoll/<DropRagdoll_Co>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDropRagdoll_CoU3Ed__5_System_Collections_IEnumerator_Reset_mAC84F3807FAC7409BCBF7F8F1C611355A920BC71 (U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDropRagdoll_CoU3Ed__5_System_Collections_IEnumerator_Reset_mAC84F3807FAC7409BCBF7F8F1C611355A920BC71_RuntimeMethod_var)));
	}
}
// System.Object Ragdoll/<DropRagdoll_Co>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDropRagdoll_CoU3Ed__5_System_Collections_IEnumerator_get_Current_m29B1954B97D53D95A1626E4C6CE39FC26C175023 (U3CDropRagdoll_CoU3Ed__5_t675D961986723D5B7A7669756E3195B8D5E1B354 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_pinvoke(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_pinvoke_back(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke& marshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_pinvoke_cleanup(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_com(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_com_back(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com& marshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_com_cleanup(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com& marshaled)
{
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, String_t* ___description0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mNewDescription = Misc.CheckNotNull(description);
		String_t* L_0 = ___description0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C(L_0, /*hidden argument*/Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		__this->set_mNewDescription_1(L_1);
		// mDescriptionUpdated = true;
		__this->set_mDescriptionUpdated_0((bool)1);
		// return this;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_2 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC_AdjustorThunk (RuntimeObject * __this, String_t* ___description0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  _returnValue;
	_returnValue = Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC(_thisAdjusted, ___description0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method)
{
	{
		// mCoverImageUpdated = true;
		__this->set_mCoverImageUpdated_2((bool)1);
		// mNewPngCoverImage = newPngCoverImage;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___newPngCoverImage0;
		__this->set_mNewPngCoverImage_3(L_0);
		// return this;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_1 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15_AdjustorThunk (RuntimeObject * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  _returnValue;
	_returnValue = Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15(_thisAdjusted, ___newPngCoverImage0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newPlayedTime.TotalMilliseconds > ulong.MaxValue)
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&___newPlayedTime0), /*hidden argument*/NULL);
		if ((!(((double)L_0) > ((double)(1.8446744073709552E+19)))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new InvalidOperationException("Timespans longer than ulong.MaxValue " +
		//                                     "milliseconds are not allowed");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9_RuntimeMethod_var)));
	}

IL_001d:
	{
		// mNewPlayedTime = newPlayedTime;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = ___newPlayedTime0;
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		__this->set_mNewPlayedTime_4(L_3);
		// return this;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_4 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9_AdjustorThunk (RuntimeObject * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  _returnValue;
	_returnValue = Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9(_thisAdjusted, ___newPlayedTime0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, const RuntimeMethod* method)
{
	{
		// return new SavedGameMetadataUpdate(this);
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_0 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_mA17CBE92DAB0E4914C2E090AF00210FF7143CB75((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  _returnValue;
	_returnValue = Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToolData/<ClearDestory_IE>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearDestory_IEU3Ed__34__ctor_m5A110A14871CDA487F0C05EBBF603BCB5FB417BF (U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ToolData/<ClearDestory_IE>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearDestory_IEU3Ed__34_System_IDisposable_Dispose_m3401D448FE6608271201BCC852BFCE3DB83CD4E6 (U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ToolData/<ClearDestory_IE>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearDestory_IEU3Ed__34_MoveNext_m1575A6C7DE93379F6AE82E72FCD8F82F5248905D (U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408_mE900AA8E8E7FF1B8B2F888CAF7143DFB6ADABCCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ParticlePlay(0);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_4 = V_1;
		NullCheck(L_4);
		ToolData_ParticlePlay_m151B9FD849EC52FB4C70EAC11D40611D84A228D7(L_4, 0, /*hidden argument*/NULL);
		// AudioPlay(1);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_5 = V_1;
		NullCheck(L_5);
		ToolData_AudioPlay_m77D477E08519C9B12EBDBACA178333CDCD79A3EE(L_5, 1, /*hidden argument*/NULL);
		// as_Score.loop = true;
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_6 = V_1;
		NullCheck(L_6);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = L_6->get_as_Score_13();
		NullCheck(L_7);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_7, (bool)1, /*hidden argument*/NULL);
		// GetComponent<Vibration>().isViOn = true;
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_8 = V_1;
		NullCheck(L_8);
		Vibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408 * L_9;
		L_9 = Component_GetComponent_TisVibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408_mE900AA8E8E7FF1B8B2F888CAF7143DFB6ADABCCC(L_8, /*hidden argument*/Component_GetComponent_TisVibration_t44A503F4398C20EF1F7FA6781B7209282FFCB408_mE900AA8E8E7FF1B8B2F888CAF7143DFB6ADABCCC_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_isViOn_4((bool)1);
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// as_Score.loop = false;
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_11 = V_1;
		NullCheck(L_11);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = L_11->get_as_Score_13();
		NullCheck(L_12);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_12, (bool)0, /*hidden argument*/NULL);
		// as_Score.Stop();
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_13 = V_1;
		NullCheck(L_13);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14 = L_13->get_as_Score_13();
		NullCheck(L_14);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_14, /*hidden argument*/NULL);
		// AudioPlay(3);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_15 = V_1;
		NullCheck(L_15);
		ToolData_AudioPlay_m77D477E08519C9B12EBDBACA178333CDCD79A3EE(L_15, 3, /*hidden argument*/NULL);
		// ParticlePlay(1);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_16 = V_1;
		NullCheck(L_16);
		ToolData_ParticlePlay_m151B9FD849EC52FB4C70EAC11D40611D84A228D7(L_16, 1, /*hidden argument*/NULL);
		// DeleteChilds();
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_17 = V_1;
		NullCheck(L_17);
		ToolData_DeleteChilds_mCFE16679DA2DA3C04DE7BDB2BFE02A3CB69F007C(L_17, /*hidden argument*/NULL);
		// Destroy(gameObject, 5f);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_18 = V_1;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_19, (5.0f), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ToolData/<ClearDestory_IE>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearDestory_IEU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA86443A170FF6CBE965C65FC6A5F8CFCA538676F (U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ToolData/<ClearDestory_IE>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearDestory_IEU3Ed__34_System_Collections_IEnumerator_Reset_m6CE1B63A1578B79AF7385F63F0C46EA7E2B49AA7 (U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearDestory_IEU3Ed__34_System_Collections_IEnumerator_Reset_m6CE1B63A1578B79AF7385F63F0C46EA7E2B49AA7_RuntimeMethod_var)));
	}
}
// System.Object ToolData/<ClearDestory_IE>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearDestory_IEU3Ed__34_System_Collections_IEnumerator_get_Current_mDEC50AD7BF28B4AD94FC6EE03529A81799A52F97 (U3CClearDestory_IEU3Ed__34_t13C3914B05BD194CB43ACAEF7B78090B77145CC2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void ToolData/<btnTimer>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbtnTimerU3Ed__28__ctor_mB9AE25E2FD8CFB3DAE90A27B7339A5031AA8BF93 (U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ToolData/<btnTimer>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbtnTimerU3Ed__28_System_IDisposable_Dispose_m45D4A9E5D69417A13BB05E9E07D32531029B50D6 (U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ToolData/<btnTimer>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CbtnTimerU3Ed__28_MoveNext_m11C89C2308A397C3F389CAD44A88A5FBD372847F (U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39A773B5E937C1EA9E92214B1255A7553498ED48);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_0091;
			}
			case 2:
			{
				goto IL_00bf;
			}
			case 3:
			{
				goto IL_00ed;
			}
			case 4:
			{
				goto IL_011b;
			}
			case 5:
			{
				goto IL_0149;
			}
			case 6:
			{
				goto IL_0177;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AudioPlay(0);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_3 = V_1;
		NullCheck(L_3);
		ToolData_AudioPlay_m77D477E08519C9B12EBDBACA178333CDCD79A3EE(L_3, 0, /*hidden argument*/NULL);
		// Baseball();
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_4 = V_1;
		NullCheck(L_4);
		ToolData_Baseball_m6310C520C14FA147CF1E73D801C3A4887F8C6B8F(L_4, /*hidden argument*/NULL);
		// button_ani.SetBool("isPressed", true);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_5 = V_1;
		NullCheck(L_5);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = L_5->get_button_ani_14();
		NullCheck(L_6);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteral39A773B5E937C1EA9E92214B1255A7553498ED48, (bool)1, /*hidden argument*/NULL);
		// StateNumChange(false);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_7 = V_1;
		NullCheck(L_7);
		ToolData_StateNumChange_mFB0C40D4D02B5CBC4E9512B0C8CC134F84E0FDEE(L_7, (bool)0, /*hidden argument*/NULL);
		// as_Score.loop = true;
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_8 = V_1;
		NullCheck(L_8);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = L_8->get_as_Score_13();
		NullCheck(L_9);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_9, (bool)1, /*hidden argument*/NULL);
		// AudioPlay(4);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_10 = V_1;
		NullCheck(L_10);
		ToolData_AudioPlay_m77D477E08519C9B12EBDBACA178333CDCD79A3EE(L_10, 4, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(buttonTimer/6f);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_buttonTimer_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_13 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_13, ((float)((float)L_12/(float)(6.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0091:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ChangeAllColor(3);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_14 = V_1;
		NullCheck(L_14);
		ToolData_ChangeAllColor_m6F7C042C9AA02853D1B185265F7AABE7200904EE(L_14, 3, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(buttonTimer / 6f);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get_buttonTimer_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_17 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_17, ((float)((float)L_16/(float)(6.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00bf:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ChangeAllColor(0);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_18 = V_1;
		NullCheck(L_18);
		ToolData_ChangeAllColor_m6F7C042C9AA02853D1B185265F7AABE7200904EE(L_18, 0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(buttonTimer / 6f);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->get_buttonTimer_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_21 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_21, ((float)((float)L_20/(float)(6.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00ed:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ChangeAllColor(3);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_22 = V_1;
		NullCheck(L_22);
		ToolData_ChangeAllColor_m6F7C042C9AA02853D1B185265F7AABE7200904EE(L_22, 3, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(buttonTimer / 6f);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->get_buttonTimer_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_25 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_25, ((float)((float)L_24/(float)(6.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_011b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ChangeAllColor(0);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_26 = V_1;
		NullCheck(L_26);
		ToolData_ChangeAllColor_m6F7C042C9AA02853D1B185265F7AABE7200904EE(L_26, 0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(buttonTimer / 6f);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->get_buttonTimer_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_29 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_29, ((float)((float)L_28/(float)(6.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_29);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_0149:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ChangeAllColor(3);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_30 = V_1;
		NullCheck(L_30);
		ToolData_ChangeAllColor_m6F7C042C9AA02853D1B185265F7AABE7200904EE(L_30, 3, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(buttonTimer / 6f);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_31 = V_1;
		NullCheck(L_31);
		float L_32 = L_31->get_buttonTimer_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_33 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_33, ((float)((float)L_32/(float)(6.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(6);
		return (bool)1;
	}

IL_0177:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ChangeAllColor(0);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_34 = V_1;
		NullCheck(L_34);
		ToolData_ChangeAllColor_m6F7C042C9AA02853D1B185265F7AABE7200904EE(L_34, 0, /*hidden argument*/NULL);
		// as_Score.loop = false;
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_35 = V_1;
		NullCheck(L_35);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_36 = L_35->get_as_Score_13();
		NullCheck(L_36);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_36, (bool)0, /*hidden argument*/NULL);
		// as_Score.Stop();
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_37 = V_1;
		NullCheck(L_37);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_38 = L_37->get_as_Score_13();
		NullCheck(L_38);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_38, /*hidden argument*/NULL);
		// AudioPlay(5);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_39 = V_1;
		NullCheck(L_39);
		ToolData_AudioPlay_m77D477E08519C9B12EBDBACA178333CDCD79A3EE(L_39, 5, /*hidden argument*/NULL);
		// button_ani.SetBool("isPressed", false);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_40 = V_1;
		NullCheck(L_40);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_41 = L_40->get_button_ani_14();
		NullCheck(L_41);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_41, _stringLiteral39A773B5E937C1EA9E92214B1255A7553498ED48, (bool)0, /*hidden argument*/NULL);
		// StateNumChange(true);
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_42 = V_1;
		NullCheck(L_42);
		ToolData_StateNumChange_mFB0C40D4D02B5CBC4E9512B0C8CC134F84E0FDEE(L_42, (bool)1, /*hidden argument*/NULL);
		// ResultColor();
		ToolData_tA77EF4A9E7E2DB849F11C97BB57D0590EA575C5D * L_43 = V_1;
		NullCheck(L_43);
		ToolData_ResultColor_m7FF3A6105B705C0FD417465E21F3A648AC6E41D8(L_43, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ToolData/<btnTimer>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CbtnTimerU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE4FF063A3E073D76EC1E913ECF527A7B199BD8FD (U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ToolData/<btnTimer>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbtnTimerU3Ed__28_System_Collections_IEnumerator_Reset_mD1F793DFB11A8795049843853D5DEC0EC46A4CE2 (U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CbtnTimerU3Ed__28_System_Collections_IEnumerator_Reset_mD1F793DFB11A8795049843853D5DEC0EC46A4CE2_RuntimeMethod_var)));
	}
}
// System.Object ToolData/<btnTimer>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CbtnTimerU3Ed__28_System_Collections_IEnumerator_get_Current_m47885D7E45E32E1EFB2D3B527BE43F96D82116F0 (U3CbtnTimerU3Ed__28_t665BC519AF3669521BD91FAD8905F651BBCCB9D4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m683C32BBAC83669BA2265894634CEAE70C4A6614 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * L_0 = (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 *)il2cpp_codegen_object_new(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_0_m45C8B082FF31EE226F60B7F07B8766144F9CDD0A (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, bool ___p0, const RuntimeMethod* method)
{
	{
		// string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		String_t* L_0;
		L_0 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___p0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_1_m3115B8DF5C3E736775205FD2203ACF06FBD6626B (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, bool ___p0, const RuntimeMethod* method)
{
	{
		// string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		String_t* L_0;
		L_0 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___p0), /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mE24B0887E2623712FCCA4EF87B9728F609B42108 (U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::<OnEndpointFound>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnEndpointFoundU3Eb__0_m2DB3FDDECA8DA92A58195C468509A86F914D082A (U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnEndpointFound(discoveredEndpoint));
		OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  L_2 = __this->get_discoveredEndpoint_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Nearby.IDiscoveryListener::OnEndpointFound(GooglePlayGames.BasicApi.Nearby.EndpointDetails) */, IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mCCF4976232FD650E5D5E6B85C778ADEAF8FBC206 (U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::<OnEndpointLost>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnEndpointLostU3Eb__0_m0200B31A4C0317224E90DA91C54A0A88F61D5915 (U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnEndpointLost(lostEndpointId));
		OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_lostEndpointId_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void GooglePlayGames.BasicApi.Nearby.IDiscoveryListener::OnEndpointLost(System.String) */, IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m851B27C38EB8C4C07C58C72AC524661732F2000B (U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::<OnMessageReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnMessageReceivedU3Eb__0_m9F0B1111C2474001B8FD55DA7F03FEB89E00A136 (U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnMessageReceived(
		//     remoteEndpointId, data, isReliableMessage));
		OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_remoteEndpointId_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_data_2();
		bool L_4 = __this->get_isReliableMessage_3();
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Nearby.IMessageListener::OnMessageReceived(System.String,System.Byte[],System.Boolean) */, IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
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
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m337C772A3D5E750E62ADCF2F9406DAD1417DEF8A (U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::<OnRemoteEndpointDisconnected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnRemoteEndpointDisconnectedU3Eb__0_mFD7A5DFB1A6BD79A2C67EC12D40F44193A6E5DBC (U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => mListener.OnRemoteEndpointDisconnected(remoteEndpointId));
		OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_remoteEndpointId_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void GooglePlayGames.BasicApi.Nearby.IMessageListener::OnRemoteEndpointDisconnected(System.String) */, IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m691E87427BDD761F9ECC8E2D53FC10E57EBDAC15 (U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::<onCaptureOverlayStateChanged>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3ConCaptureOverlayStateChangedU3Eb__0_m405AFBA874AEBECB1D3047BAEC93A1BE064C0BA9 (U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureOverlayStateListener_t9DE6C20BD115A79BA44E615E7255F06DB9E59E0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mListener.OnCaptureOverlayStateChanged(FromVideoCaptureOverlayState(overlayState))
		OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		int32_t L_2 = __this->get_overlayState_1();
		int32_t L_3;
		L_3 = OnCaptureOverlayStateListenerProxy_FromVideoCaptureOverlayState_m4C062F855CDDC03616E9A5B0863B52405DDDDD53(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener::OnCaptureOverlayStateChanged(GooglePlayGames.BasicApi.VideoCaptureOverlayState) */, CaptureOverlayStateListener_t9DE6C20BD115A79BA44E615E7255F06DB9E59E0F_il2cpp_TypeInfo_var, L_1, L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_m5D158C02B91C51A14EEAEF34FA40189DA7D2AC78_inline (Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * __this, const RuntimeMethod* method)
{
	{
		// get { return mId; }
		String_t* L_0 = __this->get_mId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_m46F4FC2667A800F29D427BEFF0800269161F9A9B_inline (Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsIncremental; }
		bool L_0 = __this->get_mIsIncremental_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_m298B96E8E8DC4240DA2F032A3D3327483B16C2A3_inline (Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * __this, const RuntimeMethod* method)
{
	{
		// get { return mTotalSteps; }
		int32_t L_0 = __this->get_mTotalSteps_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_m9B1156AA75A22DE0DE0961CE0D97D7DCE1154F46_inline (PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * __this, const RuntimeMethod* method)
{
	{
		// get { return mAvatarUrl; }
		String_t* L_0 = __this->get_mAvatarUrl_2();
		return L_0;
	}
}
