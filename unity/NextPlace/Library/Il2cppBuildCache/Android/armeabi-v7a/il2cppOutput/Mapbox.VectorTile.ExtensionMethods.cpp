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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>>
struct Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB;
// System.Func`2<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>
struct Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2;
// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.Object>
struct Func_2_t1341F92563D28DA03B960748741D5EFE00C1E96F;
// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String>
struct Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>>
struct Func_2_tF9B5B64E04BF11C76892309A642E464738AD0F9A;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>
struct IEnumerable_1_t4C9B4B87186072435759F9F5203D0C311DB48030;
// System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>
struct IEnumerable_1_t44AAF74B3AF37AE78C003A6A483860C8EAAFC355;
// System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>
struct IEnumerable_1_t7542B0557B1A2537DD0A8AE8534524745B8C4A16;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>
struct List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>
struct List_1_t864126488BD235D7FC1938836FF23251AECF00BC;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>
struct List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>
struct List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>[]
struct List_1U5BU5D_t743C766158AF75EC916759A77166EBC4C673BDFA;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>[]
struct List_1U5BU5D_t34B10A806B9E2F44D5CDFFD008C919F9AE021ADD;
// Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>[]
struct Point2d_1U5BU5D_t75F1BB355DEE45EE77CF23151A0BCE4D21834D25;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Mapbox.VectorTile.Geometry.LatLng[]
struct LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Mapbox.VectorTile.VectorTile
struct VectorTile_t2CBC2740299E824E41F58F582421C5151D383E62;
// Mapbox.VectorTile.VectorTileFeature
struct VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C;
// Mapbox.VectorTile.VectorTileLayer
struct VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348;
// Mapbox.VectorTile.VectorTileReader
struct VectorTileReader_tAC1DB79E9C5F176CF759A30E132FDAE16CDAF59D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c
struct U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B;
// Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E;

IL2CPP_EXTERN_C RuntimeClass* DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeomType_tDA68E5055D5185EB6DBF85826BAA2C45E0E62693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t864126488BD235D7FC1938836FF23251AECF00BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F28FF8AD33779DEC9680F0321D01D22563ED0E8;
IL2CPP_EXTERN_C String_t* _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8;
IL2CPP_EXTERN_C String_t* _stringLiteral47B9D1A03C2619F57397110F3FEB5C073256602F;
IL2CPP_EXTERN_C String_t* _stringLiteral73BC0851F103FF61FD390EE5A6BE84F09E79E9EE;
IL2CPP_EXTERN_C String_t* _stringLiteral7562CA79A392F95A04509C56C6B4D0A7FD10AFD3;
IL2CPP_EXTERN_C String_t* _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A;
IL2CPP_EXTERN_C String_t* _stringLiteralB490A8FC9FDC7D671618986EFE4E28F9995B263F;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCB24758B8281580D9CE13BCDDFE5C7584D4DCD;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralEF1E28BFC288C71D7FA87622A964DC8831E8A820;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisList_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_mEF661A9BBD9CFDFCFB6C66DCB6D5F1DE41F10DB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisPoint2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m887A440806FE6F0BB2B5914728090FB5CE292B81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m6CD8DADFA05092732DFE7529AB128BE6CA8CCF26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC6C771E9F7D6936551984AE11F6232AD6984A666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE88353C69A9EED242538BA295BF3EBEE29F4714E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m51082007159BEDD13B73E59F070660CCDDF9BDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5C749F1BBF63E21AD2C55D486F070FE552B6C102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m295F1A1539E66E394F811765DE3EFCB34D330693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCE869D1F4F2D1614E8FADE49CB83A006E5BD6DA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m439A356168E2C9CD6F797C20CBE8F42FC4251AB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB03D9F112384A78D7D7EA8DB65C42A5B8D97320A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m909D2631877480001FD3C4AEF5770B8AEED6FF61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2A88907876E6A5A976E6F5BC14C36E8A02F71569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m70472509C2A019F3D4DD3E18E05992C8CD01C24B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m873A7F813E1C77320CF622AB434AEF8FEE552AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m59F9FEB2E7BB0E297F4DB65165F504890906FA5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m55A26C1B2DC743B0E263C1016119B774E7F1299A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Point2d_1_ToLngLat_m67FE1D4C23430721EE7D617F8DF8C77D4E67BE77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m1FA681403E2FD9C041CFF53EFCCDFD217B46ED55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_0_mD9B02B7EC29EB7A825229FB863BE1A546CB89AE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_1_mE275BF869242B701EAEED7F9B4C4C8513390FEAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_2_m2ADA9F39FF5F3E62870216937162DCCB323EE141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_3_m238F45482614FD7A2B32252DE056084B3EB5046A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_4_mDE4098C4ABA6F3B1DEF945A64559FFA656E2F3F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_5_m1DF0A45751A2A313BD6178EE8FCD36ED0B152D0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGeometryAsWgs84U3Eb__0_m65A4DC3F37546D3E1CEFB00252928C04A30456FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorTileFeature_Geometry_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m845DBFEF293DFB8837D8A0B200A3496E4B16FCF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8EE850926AC2FD9D4E02B97CA1F36212BD1B5686 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>
struct List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t743C766158AF75EC916759A77166EBC4C673BDFA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710, ____items_1)); }
	inline List_1U5BU5D_t743C766158AF75EC916759A77166EBC4C673BDFA* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t743C766158AF75EC916759A77166EBC4C673BDFA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t743C766158AF75EC916759A77166EBC4C673BDFA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_t743C766158AF75EC916759A77166EBC4C673BDFA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_t743C766158AF75EC916759A77166EBC4C673BDFA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_t743C766158AF75EC916759A77166EBC4C673BDFA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_t743C766158AF75EC916759A77166EBC4C673BDFA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>
struct List_1_t864126488BD235D7FC1938836FF23251AECF00BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t34B10A806B9E2F44D5CDFFD008C919F9AE021ADD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t864126488BD235D7FC1938836FF23251AECF00BC, ____items_1)); }
	inline List_1U5BU5D_t34B10A806B9E2F44D5CDFFD008C919F9AE021ADD* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t34B10A806B9E2F44D5CDFFD008C919F9AE021ADD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t34B10A806B9E2F44D5CDFFD008C919F9AE021ADD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t864126488BD235D7FC1938836FF23251AECF00BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t864126488BD235D7FC1938836FF23251AECF00BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t864126488BD235D7FC1938836FF23251AECF00BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t864126488BD235D7FC1938836FF23251AECF00BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_t34B10A806B9E2F44D5CDFFD008C919F9AE021ADD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t864126488BD235D7FC1938836FF23251AECF00BC_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_t34B10A806B9E2F44D5CDFFD008C919F9AE021ADD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_t34B10A806B9E2F44D5CDFFD008C919F9AE021ADD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_t34B10A806B9E2F44D5CDFFD008C919F9AE021ADD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>
struct List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Point2d_1U5BU5D_t75F1BB355DEE45EE77CF23151A0BCE4D21834D25* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5, ____items_1)); }
	inline Point2d_1U5BU5D_t75F1BB355DEE45EE77CF23151A0BCE4D21834D25* get__items_1() const { return ____items_1; }
	inline Point2d_1U5BU5D_t75F1BB355DEE45EE77CF23151A0BCE4D21834D25** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Point2d_1U5BU5D_t75F1BB355DEE45EE77CF23151A0BCE4D21834D25* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Point2d_1U5BU5D_t75F1BB355DEE45EE77CF23151A0BCE4D21834D25* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5_StaticFields, ____emptyArray_5)); }
	inline Point2d_1U5BU5D_t75F1BB355DEE45EE77CF23151A0BCE4D21834D25* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Point2d_1U5BU5D_t75F1BB355DEE45EE77CF23151A0BCE4D21834D25** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Point2d_1U5BU5D_t75F1BB355DEE45EE77CF23151A0BCE4D21834D25* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>
struct List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9, ____items_1)); }
	inline LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6* get__items_1() const { return ____items_1; }
	inline LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9_StaticFields, ____emptyArray_5)); }
	inline LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Mapbox.VectorTile.ExtensionMethods.EnumExtensions
struct EnumExtensions_t6E4EB21865FB8A7787CD2EDCEFF2209FBBDE2B82  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// Mapbox.VectorTile.VectorTile
struct VectorTile_t2CBC2740299E824E41F58F582421C5151D383E62  : public RuntimeObject
{
public:
	// Mapbox.VectorTile.VectorTileReader Mapbox.VectorTile.VectorTile::_VTR
	VectorTileReader_tAC1DB79E9C5F176CF759A30E132FDAE16CDAF59D * ____VTR_0;

public:
	inline static int32_t get_offset_of__VTR_0() { return static_cast<int32_t>(offsetof(VectorTile_t2CBC2740299E824E41F58F582421C5151D383E62, ____VTR_0)); }
	inline VectorTileReader_tAC1DB79E9C5F176CF759A30E132FDAE16CDAF59D * get__VTR_0() const { return ____VTR_0; }
	inline VectorTileReader_tAC1DB79E9C5F176CF759A30E132FDAE16CDAF59D ** get_address_of__VTR_0() { return &____VTR_0; }
	inline void set__VTR_0(VectorTileReader_tAC1DB79E9C5F176CF759A30E132FDAE16CDAF59D * value)
	{
		____VTR_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____VTR_0), (void*)value);
	}
};


// Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions
struct VectorTileExtensions_t62F8069405D037FCF509056CCDA1FF1CB87F81E3  : public RuntimeObject
{
public:

public:
};


// Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions
struct VectorTileFeatureExtensions_tF2CC3DB7A6C2DDB3FFD32A08D0B77F7B76CC28E1  : public RuntimeObject
{
public:

public:
};


// Mapbox.VectorTile.VectorTileLayer
struct VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.VectorTile.VectorTileLayer::<Data>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CDataU3Ek__BackingField_0;
	// System.String Mapbox.VectorTile.VectorTileLayer::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt64 Mapbox.VectorTile.VectorTileLayer::<Version>k__BackingField
	uint64_t ___U3CVersionU3Ek__BackingField_2;
	// System.UInt64 Mapbox.VectorTile.VectorTileLayer::<Extent>k__BackingField
	uint64_t ___U3CExtentU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.Byte[]> Mapbox.VectorTile.VectorTileLayer::<_FeaturesData>k__BackingField
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___U3C_FeaturesDataU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Object> Mapbox.VectorTile.VectorTileLayer::<Values>k__BackingField
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___U3CValuesU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.String> Mapbox.VectorTile.VectorTileLayer::<Keys>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CKeysU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348, ___U3CDataU3Ek__BackingField_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CDataU3Ek__BackingField_0() const { return ___U3CDataU3Ek__BackingField_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CDataU3Ek__BackingField_0() { return &___U3CDataU3Ek__BackingField_0; }
	inline void set_U3CDataU3Ek__BackingField_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CDataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348, ___U3CVersionU3Ek__BackingField_2)); }
	inline uint64_t get_U3CVersionU3Ek__BackingField_2() const { return ___U3CVersionU3Ek__BackingField_2; }
	inline uint64_t* get_address_of_U3CVersionU3Ek__BackingField_2() { return &___U3CVersionU3Ek__BackingField_2; }
	inline void set_U3CVersionU3Ek__BackingField_2(uint64_t value)
	{
		___U3CVersionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CExtentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348, ___U3CExtentU3Ek__BackingField_3)); }
	inline uint64_t get_U3CExtentU3Ek__BackingField_3() const { return ___U3CExtentU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CExtentU3Ek__BackingField_3() { return &___U3CExtentU3Ek__BackingField_3; }
	inline void set_U3CExtentU3Ek__BackingField_3(uint64_t value)
	{
		___U3CExtentU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3C_FeaturesDataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348, ___U3C_FeaturesDataU3Ek__BackingField_4)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_U3C_FeaturesDataU3Ek__BackingField_4() const { return ___U3C_FeaturesDataU3Ek__BackingField_4; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_U3C_FeaturesDataU3Ek__BackingField_4() { return &___U3C_FeaturesDataU3Ek__BackingField_4; }
	inline void set_U3C_FeaturesDataU3Ek__BackingField_4(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___U3C_FeaturesDataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_FeaturesDataU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValuesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348, ___U3CValuesU3Ek__BackingField_5)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_U3CValuesU3Ek__BackingField_5() const { return ___U3CValuesU3Ek__BackingField_5; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_U3CValuesU3Ek__BackingField_5() { return &___U3CValuesU3Ek__BackingField_5; }
	inline void set_U3CValuesU3Ek__BackingField_5(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___U3CValuesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValuesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeysU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348, ___U3CKeysU3Ek__BackingField_6)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CKeysU3Ek__BackingField_6() const { return ___U3CKeysU3Ek__BackingField_6; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CKeysU3Ek__BackingField_6() { return &___U3CKeysU3Ek__BackingField_6; }
	inline void set_U3CKeysU3Ek__BackingField_6(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CKeysU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeysU3Ek__BackingField_6), (void*)value);
	}
};


// Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c
struct U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields
{
public:
	// Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9
	U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_2
	Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * ___U3CU3E9__0_2_1;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_3
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * ___U3CU3E9__0_3_2;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_4
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * ___U3CU3E9__0_4_3;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_5
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * ___U3CU3E9__0_5_4;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_0
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * ___U3CU3E9__0_0_5;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_1
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * ___U3CU3E9__0_1_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields, ___U3CU3E9__0_2_1)); }
	inline Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * get_U3CU3E9__0_2_1() const { return ___U3CU3E9__0_2_1; }
	inline Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB ** get_address_of_U3CU3E9__0_2_1() { return &___U3CU3E9__0_2_1; }
	inline void set_U3CU3E9__0_2_1(Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * value)
	{
		___U3CU3E9__0_2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_2_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_3_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields, ___U3CU3E9__0_3_2)); }
	inline Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * get_U3CU3E9__0_3_2() const { return ___U3CU3E9__0_3_2; }
	inline Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B ** get_address_of_U3CU3E9__0_3_2() { return &___U3CU3E9__0_3_2; }
	inline void set_U3CU3E9__0_3_2(Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * value)
	{
		___U3CU3E9__0_3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_3_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_4_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields, ___U3CU3E9__0_4_3)); }
	inline Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * get_U3CU3E9__0_4_3() const { return ___U3CU3E9__0_4_3; }
	inline Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B ** get_address_of_U3CU3E9__0_4_3() { return &___U3CU3E9__0_4_3; }
	inline void set_U3CU3E9__0_4_3(Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * value)
	{
		___U3CU3E9__0_4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_4_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_5_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields, ___U3CU3E9__0_5_4)); }
	inline Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * get_U3CU3E9__0_5_4() const { return ___U3CU3E9__0_5_4; }
	inline Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B ** get_address_of_U3CU3E9__0_5_4() { return &___U3CU3E9__0_5_4; }
	inline void set_U3CU3E9__0_5_4(Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * value)
	{
		___U3CU3E9__0_5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_5_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields, ___U3CU3E9__0_0_5)); }
	inline Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * get_U3CU3E9__0_0_5() const { return ___U3CU3E9__0_0_5; }
	inline Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B ** get_address_of_U3CU3E9__0_0_5() { return &___U3CU3E9__0_0_5; }
	inline void set_U3CU3E9__0_0_5(Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * value)
	{
		___U3CU3E9__0_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields, ___U3CU3E9__0_1_6)); }
	inline Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * get_U3CU3E9__0_1_6() const { return ___U3CU3E9__0_1_6; }
	inline Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B ** get_address_of_U3CU3E9__0_1_6() { return &___U3CU3E9__0_1_6; }
	inline void set_U3CU3E9__0_1_6(Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * value)
	{
		___U3CU3E9__0_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_6), (void*)value);
	}
};


// Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E  : public RuntimeObject
{
public:
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::zoom
	uint64_t ___zoom_0;
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::tileColumn
	uint64_t ___tileColumn_1;
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::tileRow
	uint64_t ___tileRow_2;
	// Mapbox.VectorTile.VectorTileFeature Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::feature
	VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * ___feature_3;
	// System.Func`2<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng> Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::<>9__0
	Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * ___U3CU3E9__0_4;

public:
	inline static int32_t get_offset_of_zoom_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E, ___zoom_0)); }
	inline uint64_t get_zoom_0() const { return ___zoom_0; }
	inline uint64_t* get_address_of_zoom_0() { return &___zoom_0; }
	inline void set_zoom_0(uint64_t value)
	{
		___zoom_0 = value;
	}

	inline static int32_t get_offset_of_tileColumn_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E, ___tileColumn_1)); }
	inline uint64_t get_tileColumn_1() const { return ___tileColumn_1; }
	inline uint64_t* get_address_of_tileColumn_1() { return &___tileColumn_1; }
	inline void set_tileColumn_1(uint64_t value)
	{
		___tileColumn_1 = value;
	}

	inline static int32_t get_offset_of_tileRow_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E, ___tileRow_2)); }
	inline uint64_t get_tileRow_2() const { return ___tileRow_2; }
	inline uint64_t* get_address_of_tileRow_2() { return &___tileRow_2; }
	inline void set_tileRow_2(uint64_t value)
	{
		___tileRow_2 = value;
	}

	inline static int32_t get_offset_of_feature_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E, ___feature_3)); }
	inline VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * get_feature_3() const { return ___feature_3; }
	inline VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C ** get_address_of_feature_3() { return &___feature_3; }
	inline void set_feature_3(VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * value)
	{
		___feature_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feature_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E, ___U3CU3E9__0_4)); }
	inline Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * get_U3CU3E9__0_4() const { return ___U3CU3E9__0_4; }
	inline Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 ** get_address_of_U3CU3E9__0_4() { return &___U3CU3E9__0_4; }
	inline void set_U3CU3E9__0_4(Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * value)
	{
		___U3CU3E9__0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_4), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>
struct Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362, ___list_0)); }
	inline List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710 * get_list_0() const { return ___list_0; }
	inline List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362, ___current_3)); }
	inline List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 * get_current_3() const { return ___current_3; }
	inline List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>
struct Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t864126488BD235D7FC1938836FF23251AECF00BC * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606, ___list_0)); }
	inline List_1_t864126488BD235D7FC1938836FF23251AECF00BC * get_list_0() const { return ___list_0; }
	inline List_1_t864126488BD235D7FC1938836FF23251AECF00BC ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t864126488BD235D7FC1938836FF23251AECF00BC * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606, ___current_3)); }
	inline List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * get_current_3() const { return ___current_3; }
	inline List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.UInt32>
struct Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 
{
public:
	// T System.Nullable`1::value
	uint32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9, ___value_0)); }
	inline uint32_t get_value_0() const { return ___value_0; }
	inline uint32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>
struct Point2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB 
{
public:
	// T Mapbox.VectorTile.Geometry.Point2d`1::X
	int64_t ___X_0;
	// T Mapbox.VectorTile.Geometry.Point2d`1::Y
	int64_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB, ___X_0)); }
	inline int64_t get_X_0() const { return ___X_0; }
	inline int64_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int64_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB, ___Y_1)); }
	inline int64_t get_Y_1() const { return ___Y_1; }
	inline int64_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int64_t value)
	{
		___Y_1 = value;
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


// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}
};

struct DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_StaticFields, ___Default_0)); }
	inline DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * get_Default_0() const { return ___Default_0; }
	inline DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
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


// Mapbox.VectorTile.Geometry.LatLng
struct LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 
{
public:
	// System.Double Mapbox.VectorTile.Geometry.LatLng::<Lat>k__BackingField
	double ___U3CLatU3Ek__BackingField_0;
	// System.Double Mapbox.VectorTile.Geometry.LatLng::<Lng>k__BackingField
	double ___U3CLngU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLatU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221, ___U3CLatU3Ek__BackingField_0)); }
	inline double get_U3CLatU3Ek__BackingField_0() const { return ___U3CLatU3Ek__BackingField_0; }
	inline double* get_address_of_U3CLatU3Ek__BackingField_0() { return &___U3CLatU3Ek__BackingField_0; }
	inline void set_U3CLatU3Ek__BackingField_0(double value)
	{
		___U3CLatU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLngU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221, ___U3CLngU3Ek__BackingField_1)); }
	inline double get_U3CLngU3Ek__BackingField_1() const { return ___U3CLngU3Ek__BackingField_1; }
	inline double* get_address_of_U3CLngU3Ek__BackingField_1() { return &___U3CLngU3Ek__BackingField_1; }
	inline void set_U3CLngU3Ek__BackingField_1(double value)
	{
		___U3CLngU3Ek__BackingField_1 = value;
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


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Mapbox.VectorTile.Geometry.GeomType
struct GeomType_tDA68E5055D5185EB6DBF85826BAA2C45E0E62693 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.GeomType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GeomType_tDA68E5055D5185EB6DBF85826BAA2C45E0E62693, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Mapbox.VectorTile.VectorTileFeature
struct VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C  : public RuntimeObject
{
public:
	// Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileFeature::_layer
	VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * ____layer_0;
	// System.Object Mapbox.VectorTile.VectorTileFeature::_cachedGeometry
	RuntimeObject * ____cachedGeometry_1;
	// System.Nullable`1<System.UInt32> Mapbox.VectorTile.VectorTileFeature::_clipBuffer
	Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ____clipBuffer_2;
	// System.Nullable`1<System.Single> Mapbox.VectorTile.VectorTileFeature::_scale
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ____scale_3;
	// System.Nullable`1<System.Single> Mapbox.VectorTile.VectorTileFeature::_previousScale
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ____previousScale_4;
	// System.UInt64 Mapbox.VectorTile.VectorTileFeature::<Id>k__BackingField
	uint64_t ___U3CIdU3Ek__BackingField_5;
	// Mapbox.VectorTile.Geometry.GeomType Mapbox.VectorTile.VectorTileFeature::<GeometryType>k__BackingField
	int32_t ___U3CGeometryTypeU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<System.UInt32> Mapbox.VectorTile.VectorTileFeature::<GeometryCommands>k__BackingField
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___U3CGeometryCommandsU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.Int32> Mapbox.VectorTile.VectorTileFeature::<Tags>k__BackingField
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CTagsU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__layer_0() { return static_cast<int32_t>(offsetof(VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C, ____layer_0)); }
	inline VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * get__layer_0() const { return ____layer_0; }
	inline VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 ** get_address_of__layer_0() { return &____layer_0; }
	inline void set__layer_0(VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * value)
	{
		____layer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____layer_0), (void*)value);
	}

	inline static int32_t get_offset_of__cachedGeometry_1() { return static_cast<int32_t>(offsetof(VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C, ____cachedGeometry_1)); }
	inline RuntimeObject * get__cachedGeometry_1() const { return ____cachedGeometry_1; }
	inline RuntimeObject ** get_address_of__cachedGeometry_1() { return &____cachedGeometry_1; }
	inline void set__cachedGeometry_1(RuntimeObject * value)
	{
		____cachedGeometry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedGeometry_1), (void*)value);
	}

	inline static int32_t get_offset_of__clipBuffer_2() { return static_cast<int32_t>(offsetof(VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C, ____clipBuffer_2)); }
	inline Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  get__clipBuffer_2() const { return ____clipBuffer_2; }
	inline Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 * get_address_of__clipBuffer_2() { return &____clipBuffer_2; }
	inline void set__clipBuffer_2(Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  value)
	{
		____clipBuffer_2 = value;
	}

	inline static int32_t get_offset_of__scale_3() { return static_cast<int32_t>(offsetof(VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C, ____scale_3)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get__scale_3() const { return ____scale_3; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of__scale_3() { return &____scale_3; }
	inline void set__scale_3(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		____scale_3 = value;
	}

	inline static int32_t get_offset_of__previousScale_4() { return static_cast<int32_t>(offsetof(VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C, ____previousScale_4)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get__previousScale_4() const { return ____previousScale_4; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of__previousScale_4() { return &____previousScale_4; }
	inline void set__previousScale_4(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		____previousScale_4 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C, ___U3CIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGeometryTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C, ___U3CGeometryTypeU3Ek__BackingField_6)); }
	inline int32_t get_U3CGeometryTypeU3Ek__BackingField_6() const { return ___U3CGeometryTypeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CGeometryTypeU3Ek__BackingField_6() { return &___U3CGeometryTypeU3Ek__BackingField_6; }
	inline void set_U3CGeometryTypeU3Ek__BackingField_6(int32_t value)
	{
		___U3CGeometryTypeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CGeometryCommandsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C, ___U3CGeometryCommandsU3Ek__BackingField_7)); }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * get_U3CGeometryCommandsU3Ek__BackingField_7() const { return ___U3CGeometryCommandsU3Ek__BackingField_7; }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 ** get_address_of_U3CGeometryCommandsU3Ek__BackingField_7() { return &___U3CGeometryCommandsU3Ek__BackingField_7; }
	inline void set_U3CGeometryCommandsU3Ek__BackingField_7(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * value)
	{
		___U3CGeometryCommandsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGeometryCommandsU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTagsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C, ___U3CTagsU3Ek__BackingField_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CTagsU3Ek__BackingField_8() const { return ___U3CTagsU3Ek__BackingField_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CTagsU3Ek__BackingField_8() { return &___U3CTagsU3Ek__BackingField_8; }
	inline void set_U3CTagsU3Ek__BackingField_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CTagsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTagsU3Ek__BackingField_8), (void*)value);
	}
};


// System.Func`2<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>>
struct Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>
struct Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String>
struct Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// Mapbox.VectorTile.Geometry.LatLng[]
struct LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  m_Items[1];

public:
	inline LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Object,Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_mAB8536692BA3A62667948D20804AB1174BC210D0_gshared (RuntimeObject* ___source0, Func_2_tF9B5B64E04BF11C76892309A642E464738AD0F9A * ___selector1, const RuntimeMethod* method);
// System.Void System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7BB80249DF50BF2365FBF4BD2E6AC14DAE3EBB04_gshared (Func_2_t1341F92563D28DA03B960748741D5EFE00C1E96F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Mapbox.VectorTile.Geometry.LatLng,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisRuntimeObject_m6BF0B77CF8E9F2D540D04FDBEEAD89DEDEBDF785_gshared (RuntimeObject* ___source0, Func_2_t1341F92563D28DA03B960748741D5EFE00C1E96F * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  List_1_get_Item_m55A26C1B2DC743B0E263C1016119B774E7F1299A_gshared_inline (List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<!!0>>> Mapbox.VectorTile.VectorTileFeature::Geometry<System.Int64>(System.Nullable`1<System.UInt32>,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710 * VectorTileFeature_Geometry_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m845DBFEF293DFB8837D8A0B200A3496E4B16FCF5_gshared (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * __this, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ___clipBuffer0, Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___scale1, const RuntimeMethod* method);
// System.Void System.Func`2<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mB03D9F112384A78D7D7EA8DB65C42A5B8D97320A_gshared (Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisPoint2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m887A440806FE6F0BB2B5914728090FB5CE292B81_gshared (RuntimeObject* ___source0, Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * ___selector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * Enumerable_ToList_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m6CD8DADFA05092732DFE7529AB128BE6CA8CCF26_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.LatLng Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>::ToLngLat(System.UInt64,System.UInt64,System.UInt64,System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  Point2d_1_ToLngLat_m67FE1D4C23430721EE7D617F8DF8C77D4E67BE77_gshared (Point2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB * __this, uint64_t ___z0, uint64_t ___x1, uint64_t ___y2, uint64_t ___extent3, bool ___checkLatLngMax4, const RuntimeMethod* method);

// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Mapbox.VectorTile.VectorTile::LayerNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * VectorTile_LayerNames_m2E2A6075C6D915B618FC07EFD7B8D382AC35B342 (VectorTile_t2CBC2740299E824E41F58F582421C5151D383E62 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m1FA681403E2FD9C041CFF53EFCCDFD217B46ED55 (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared)(__this, method);
}
// Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTile::GetLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * VectorTile_GetLayer_m55D253A5627652967839D607A9D564C762EBA229 (VectorTile_t2CBC2740299E824E41F58F582421C5151D383E62 * __this, String_t* ___layerName0, const RuntimeMethod* method);
// Mapbox.VectorTile.VectorTileFeature Mapbox.VectorTile.VectorTileLayer::GetFeature(System.Int32,System.Nullable`1<System.UInt32>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * VectorTileLayer_GetFeature_m8A4AA9B7219A317ABAD1B0BE9FAF96BDABA57D26 (VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * __this, int32_t ___feature0, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ___clipBuffer1, float ___scale2, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.GeomType Mapbox.VectorTile.VectorTileFeature::get_GeometryType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VectorTileFeature_get_GeometryType_m7CBCBCA6E1341251BA767C99DA2B88C8DE824516_inline (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Int32> Mapbox.VectorTile.VectorTileFeature::get_Tags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * VectorTileFeature_get_Tags_mEF7037B43334DB825E5DA1DB2D5CD3EC92A580E3_inline (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<System.String> Mapbox.VectorTile.VectorTileLayer::get_Keys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * VectorTileLayer_get_Keys_m2F236213D3CB8A78FFA5C080CB9B1FE4F428D880_inline (VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Collections.Generic.List`1<System.Object> Mapbox.VectorTile.VectorTileLayer::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * VectorTileLayer_get_Values_mF6E5B39CB3146E45113B0F8793A4F00B06CDE4CB_inline (VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F (const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.UInt64 Mapbox.VectorTile.VectorTileFeature::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t VectorTileFeature_get_Id_m1DB6068513457604D8652549AF604FD620F9B7BA_inline (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * __this, const RuntimeMethod* method);
// System.String Mapbox.VectorTile.VectorTileLayer::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VectorTileLayer_get_Name_mA3A4EF6032A60FB77379CC8AC740D8F5110FC9D2_inline (VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.String Mapbox.VectorTile.ExtensionMethods.EnumExtensions::Description(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumExtensions_Description_mE75198D6FCECAB886D44F59F582F9073587FBFA5 (Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>> Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions::GeometryAsWgs84(Mapbox.VectorTile.VectorTileFeature,System.UInt64,System.UInt64,System.UInt64,System.Nullable`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t864126488BD235D7FC1938836FF23251AECF00BC * VectorTileFeatureExtensions_GeometryAsWgs84_m346AA4777C7A2521C5465106ECBF3506CDC636AB (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * ___feature0, uint64_t ___zoom1, uint64_t ___tileColumn2, uint64_t ___tileRow3, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ___clipBuffer4, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::get_Count()
inline int32_t List_1_get_Count_m59F9FEB2E7BB0E297F4DB65165F504890906FA5F_inline (List_1_t864126488BD235D7FC1938836FF23251AECF00BC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t864126488BD235D7FC1938836FF23251AECF00BC *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m439A356168E2C9CD6F797C20CBE8F42FC4251AB0 (Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
inline RuntimeObject* Enumerable_SelectMany_TisList_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_mEF661A9BBD9CFDFCFB6C66DCB6D5F1DE41F10DB2 (RuntimeObject* ___source0, Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB *, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_mAB8536692BA3A62667948D20804AB1174BC210D0_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8 (Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m7BB80249DF50BF2365FBF4BD2E6AC14DAE3EBB04_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Mapbox.VectorTile.Geometry.LatLng,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2 (RuntimeObject* ___source0, Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B *, const RuntimeMethod*))Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisRuntimeObject_m6BF0B77CF8E9F2D540D04FDBEEAD89DEDEBDF785_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::GetEnumerator()
inline Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606  List_1_GetEnumerator_m70472509C2A019F3D4DD3E18E05992C8CD01C24B (List_1_t864126488BD235D7FC1938836FF23251AECF00BC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606  (*) (List_1_t864126488BD235D7FC1938836FF23251AECF00BC *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::get_Current()
inline List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * Enumerator_get_Current_mCE869D1F4F2D1614E8FADE49CB83A006E5BD6DA5_inline (Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * (*) (Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::MoveNext()
inline bool Enumerator_MoveNext_m5C749F1BBF63E21AD2C55D486F070FE552B6C102 (Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::Dispose()
inline void Enumerator_Dispose_mC6C771E9F7D6936551984AE11F6232AD6984A666 (Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::get_Item(System.Int32)
inline List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_inline (List_1_t864126488BD235D7FC1938836FF23251AECF00BC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * (*) (List_1_t864126488BD235D7FC1938836FF23251AECF00BC *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>::get_Item(System.Int32)
inline LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  List_1_get_Item_m55A26C1B2DC743B0E263C1016119B774E7F1299A_inline (List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  (*) (List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 *, int32_t, const RuntimeMethod*))List_1_get_Item_m55A26C1B2DC743B0E263C1016119B774E7F1299A_gshared_inline)(__this, ___index0, method);
}
// System.Double Mapbox.VectorTile.Geometry.LatLng::get_Lng()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double LatLng_get_Lng_mA59541CE35A8EB5935C73D56D23776D6D2A1CB62_inline (LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 * __this, const RuntimeMethod* method);
// System.Double Mapbox.VectorTile.Geometry.LatLng::get_Lat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double LatLng_get_Lat_m86DDB36FD3FDFB56FE421BDC60E6FCB26B236133_inline (LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.VectorTile.VectorTileLayer::FeatureCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VectorTileLayer_FeatureCount_m24BDB73D5F17CA1499FEB88DE34B1A2734336F6B (VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * __this, const RuntimeMethod* method);
// System.Void Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m57EB58EDDACA08E1E09F66E95A755E02787449C8 (U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::.ctor()
inline void List_1__ctor_m873A7F813E1C77320CF622AB434AEF8FEE552AAC (List_1_t864126488BD235D7FC1938836FF23251AECF00BC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t864126488BD235D7FC1938836FF23251AECF00BC *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, float, const RuntimeMethod*))Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<!!0>>> Mapbox.VectorTile.VectorTileFeature::Geometry<System.Int64>(System.Nullable`1<System.UInt32>,System.Nullable`1<System.Single>)
inline List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710 * VectorTileFeature_Geometry_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m845DBFEF293DFB8837D8A0B200A3496E4B16FCF5 (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * __this, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ___clipBuffer0, Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___scale1, const RuntimeMethod* method)
{
	return ((  List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710 * (*) (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C *, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 , Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A , const RuntimeMethod*))VectorTileFeature_Geometry_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m845DBFEF293DFB8837D8A0B200A3496E4B16FCF5_gshared)(__this, ___clipBuffer0, ___scale1, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::GetEnumerator()
inline Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362  List_1_GetEnumerator_m2A88907876E6A5A976E6F5BC14C36E8A02F71569 (List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362  (*) (List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::get_Current()
inline List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 * Enumerator_get_Current_m295F1A1539E66E394F811765DE3EFCB34D330693_inline (Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362 * __this, const RuntimeMethod* method)
{
	return ((  List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 * (*) (Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Func`2<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB03D9F112384A78D7D7EA8DB65C42A5B8D97320A (Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mB03D9F112384A78D7D7EA8DB65C42A5B8D97320A_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisPoint2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m887A440806FE6F0BB2B5914728090FB5CE292B81 (RuntimeObject* ___source0, Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 *, const RuntimeMethod*))Enumerable_Select_TisPoint2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m887A440806FE6F0BB2B5914728090FB5CE292B81_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * Enumerable_ToList_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m6CD8DADFA05092732DFE7529AB128BE6CA8CCF26 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m6CD8DADFA05092732DFE7529AB128BE6CA8CCF26_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::Add(!0)
inline void List_1_Add_m909D2631877480001FD3C4AEF5770B8AEED6FF61 (List_1_t864126488BD235D7FC1938836FF23251AECF00BC * __this, List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t864126488BD235D7FC1938836FF23251AECF00BC *, List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::MoveNext()
inline bool Enumerator_MoveNext_m51082007159BEDD13B73E59F070660CCDDF9BDB4 (Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::Dispose()
inline void Enumerator_Dispose_mE88353C69A9EED242538BA295BF3EBEE29F4714E (Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC9AF5FCAEEBCD6A8B78A8D79E784A0F7FC0DD79E (U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileFeature::get_Layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * VectorTileFeature_get_Layer_mE3607EB62EF3FB27CB6A25A1F39A737E21E8CCC1 (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * __this, const RuntimeMethod* method);
// System.UInt64 Mapbox.VectorTile.VectorTileLayer::get_Extent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t VectorTileLayer_get_Extent_m5D602FC9A2CE0BE0E29ED4AFB4A1D3C5E572BAED_inline (VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * __this, const RuntimeMethod* method);
// Mapbox.VectorTile.Geometry.LatLng Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>::ToLngLat(System.UInt64,System.UInt64,System.UInt64,System.UInt64,System.Boolean)
inline LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  Point2d_1_ToLngLat_m67FE1D4C23430721EE7D617F8DF8C77D4E67BE77 (Point2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB * __this, uint64_t ___z0, uint64_t ___x1, uint64_t ___y2, uint64_t ___extent3, bool ___checkLatLngMax4, const RuntimeMethod* method)
{
	return ((  LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  (*) (Point2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB *, uint64_t, uint64_t, uint64_t, uint64_t, bool, const RuntimeMethod*))Point2d_1_ToLngLat_m67FE1D4C23430721EE7D617F8DF8C77D4E67BE77_gshared)(__this, ___z0, ___x1, ___y2, ___extent3, ___checkLatLngMax4, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.String Mapbox.VectorTile.ExtensionMethods.EnumExtensions::Description(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumExtensions_Description_mE75198D6FCECAB886D44F59F582F9073587FBFA5 (Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	FieldInfo_t * V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* G_B3_0 = NULL;
	{
		Enum_t23B90B40F60E677A8025267341651C94AE079CDA * L_0 = ___value0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		Enum_t23B90B40F60E677A8025267341651C94AE079CDA * L_3 = ___value0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		FieldInfo_t * L_5;
		L_5 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		FieldInfo_t * L_6 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9;
		L_9 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_6, L_8, (bool)0);
		V_2 = L_9;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = V_2;
		NullCheck(L_10);
		if (!(((RuntimeArray*)L_10)->max_length))
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = 0;
		RuntimeObject * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(((DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)CastclassClass((RuntimeObject*)L_13, DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_il2cpp_TypeInfo_var)));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, ((DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)CastclassClass((RuntimeObject*)L_13, DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_il2cpp_TypeInfo_var)));
		G_B3_0 = L_14;
		goto IL_0040;
	}

IL_003a:
	{
		Enum_t23B90B40F60E677A8025267341651C94AE079CDA * L_15 = ___value0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		G_B3_0 = L_16;
	}

IL_0040:
	{
		V_3 = G_B3_0;
		goto IL_0043;
	}

IL_0043:
	{
		String_t* L_17 = V_3;
		return L_17;
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
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions::ToGeoJson(Mapbox.VectorTile.VectorTile,System.UInt64,System.UInt64,System.UInt64,System.Nullable`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VectorTileExtensions_ToGeoJson_m0D9938BCC3E41652B4A2F372F284AC5C5420688A (VectorTile_t2CBC2740299E824E41F58F582421C5151D383E62 * ___tile0, uint64_t ___zoom1, uint64_t ___tileColumn2, uint64_t ___tileRow3, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ___clipBuffer4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisList_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_mEF661A9BBD9CFDFCFB6C66DCB6D5F1DE41F10DB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC6C771E9F7D6936551984AE11F6232AD6984A666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5C749F1BBF63E21AD2C55D486F070FE552B6C102_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCE869D1F4F2D1614E8FADE49CB83A006E5BD6DA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m439A356168E2C9CD6F797C20CBE8F42FC4251AB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeomType_tDA68E5055D5185EB6DBF85826BAA2C45E0E62693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m70472509C2A019F3D4DD3E18E05992C8CD01C24B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m59F9FEB2E7BB0E297F4DB65165F504890906FA5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m55A26C1B2DC743B0E263C1016119B774E7F1299A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m1FA681403E2FD9C041CFF53EFCCDFD217B46ED55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_0_mD9B02B7EC29EB7A825229FB863BE1A546CB89AE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_1_mE275BF869242B701EAEED7F9B4C4C8513390FEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_2_m2ADA9F39FF5F3E62870216937162DCCB323EE141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_3_m238F45482614FD7A2B32252DE056084B3EB5046A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_4_mDE4098C4ABA6F3B1DEF945A64559FFA656E2F3F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_5_m1DF0A45751A2A313BD6178EE8FCD36ED0B152D0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F28FF8AD33779DEC9680F0321D01D22563ED0E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47B9D1A03C2619F57397110F3FEB5C073256602F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73BC0851F103FF61FD390EE5A6BE84F09E79E9EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7562CA79A392F95A04509C56C6B4D0A7FD10AFD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB490A8FC9FDC7D671618986EFE4E28F9995B263F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCB24758B8281580D9CE13BCDDFE5C7584D4DCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF1E28BFC288C71D7FA87622A964DC8831E8A820);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * V_6 = NULL;
	int32_t V_7 = 0;
	VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * V_8 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_9 = NULL;
	int32_t V_10 = 0;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	String_t* V_13 = NULL;
	List_1_t864126488BD235D7FC1938836FF23251AECF00BC * V_14 = NULL;
	bool V_15 = false;
	int32_t V_16 = 0;
	String_t* V_17 = NULL;
	RuntimeObject * V_18 = NULL;
	bool V_19 = false;
	Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	int32_t V_22 = 0;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_23 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_24 = NULL;
	Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606  V_25;
	memset((&V_25), 0, sizeof(V_25));
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * V_26 = NULL;
	Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606  V_27;
	memset((&V_27), 0, sizeof(V_27));
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * V_28 = NULL;
	bool V_29 = false;
	int32_t V_30 = 0;
	LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  V_31;
	memset((&V_31), 0, sizeof(V_31));
	bool V_32 = false;
	String_t* V_33 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B10_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B10_2 = NULL;
	String_t* G_B10_3 = NULL;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * G_B10_4 = NULL;
	int32_t G_B9_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B9_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B9_2 = NULL;
	String_t* G_B9_3 = NULL;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * G_B9_4 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B11_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B11_3 = NULL;
	String_t* G_B11_4 = NULL;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * G_B11_5 = NULL;
	Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * G_B16_0 = NULL;
	List_1_t864126488BD235D7FC1938836FF23251AECF00BC * G_B16_1 = NULL;
	String_t* G_B16_2 = NULL;
	Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * G_B15_0 = NULL;
	List_1_t864126488BD235D7FC1938836FF23251AECF00BC * G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	String_t* G_B18_2 = NULL;
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * G_B23_0 = NULL;
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * G_B23_1 = NULL;
	String_t* G_B23_2 = NULL;
	String_t* G_B23_3 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B23_4 = NULL;
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * G_B22_0 = NULL;
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * G_B22_1 = NULL;
	String_t* G_B22_2 = NULL;
	String_t* G_B22_3 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B22_4 = NULL;
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * G_B32_0 = NULL;
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * G_B32_1 = NULL;
	String_t* G_B32_2 = NULL;
	String_t* G_B32_3 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B32_4 = NULL;
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * G_B31_0 = NULL;
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * G_B31_1 = NULL;
	String_t* G_B31_2 = NULL;
	String_t* G_B31_3 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B31_4 = NULL;
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * G_B45_0 = NULL;
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * G_B45_1 = NULL;
	String_t* G_B45_2 = NULL;
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * G_B44_0 = NULL;
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * G_B44_1 = NULL;
	String_t* G_B44_2 = NULL;
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * G_B48_0 = NULL;
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * G_B48_1 = NULL;
	String_t* G_B48_2 = NULL;
	String_t* G_B48_3 = NULL;
	Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * G_B47_0 = NULL;
	List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * G_B47_1 = NULL;
	String_t* G_B47_2 = NULL;
	String_t* G_B47_3 = NULL;
	{
		V_0 = _stringLiteral73BC0851F103FF61FD390EE5A6BE84F09E79E9EE;
		V_1 = _stringLiteralB490A8FC9FDC7D671618986EFE4E28F9995B263F;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_2 = L_0;
		VectorTile_t2CBC2740299E824E41F58F582421C5151D383E62 * L_1 = ___tile0;
		NullCheck(L_1);
		ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * L_2;
		L_2 = VectorTile_LayerNames_m2E2A6075C6D915B618FC07EFD7B8D382AC35B342(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ReadOnlyCollection_1_GetEnumerator_m1FA681403E2FD9C041CFF53EFCCDFD217B46ED55(L_2, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_m1FA681403E2FD9C041CFF53EFCCDFD217B46ED55_RuntimeMethod_var);
		V_4 = L_3;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_04e8;
		}

IL_0026:
		{
			RuntimeObject* L_4 = V_4;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var, L_4);
			V_5 = L_5;
			VectorTile_t2CBC2740299E824E41F58F582421C5151D383E62 * L_6 = ___tile0;
			String_t* L_7 = V_5;
			NullCheck(L_6);
			VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * L_8;
			L_8 = VectorTile_GetLayer_m55D253A5627652967839D607A9D564C762EBA229(L_6, L_7, /*hidden argument*/NULL);
			V_6 = L_8;
			V_7 = 0;
			goto IL_04d3;
		}

IL_0042:
		{
			VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * L_9 = V_6;
			int32_t L_10 = V_7;
			Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  L_11 = ___clipBuffer4;
			NullCheck(L_9);
			VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_12;
			L_12 = VectorTileLayer_GetFeature_m8A4AA9B7219A317ABAD1B0BE9FAF96BDABA57D26(L_9, L_10, L_11, (1.0f), /*hidden argument*/NULL);
			V_8 = L_12;
			VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_13 = V_8;
			NullCheck(L_13);
			int32_t L_14;
			L_14 = VectorTileFeature_get_GeometryType_m7CBCBCA6E1341251BA767C99DA2B88C8DE824516_inline(L_13, /*hidden argument*/NULL);
			V_15 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			bool L_15 = V_15;
			if (!L_15)
			{
				goto IL_006b;
			}
		}

IL_0065:
		{
			goto IL_04cd;
		}

IL_006b:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_16, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			V_9 = L_16;
			VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_17 = V_8;
			NullCheck(L_17);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_18;
			L_18 = VectorTileFeature_get_Tags_mEF7037B43334DB825E5DA1DB2D5CD3EC92A580E3_inline(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			int32_t L_19;
			L_19 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_18, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
			V_10 = L_19;
			V_16 = 0;
			goto IL_00ee;
		}

IL_0085:
		{
			VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * L_20 = V_6;
			NullCheck(L_20);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_21;
			L_21 = VectorTileLayer_get_Keys_m2F236213D3CB8A78FFA5C080CB9B1FE4F428D880_inline(L_20, /*hidden argument*/NULL);
			VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_22 = V_8;
			NullCheck(L_22);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_23;
			L_23 = VectorTileFeature_get_Tags_mEF7037B43334DB825E5DA1DB2D5CD3EC92A580E3_inline(L_22, /*hidden argument*/NULL);
			int32_t L_24 = V_16;
			NullCheck(L_23);
			int32_t L_25;
			L_25 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
			NullCheck(L_21);
			String_t* L_26;
			L_26 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_21, L_25, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
			V_17 = L_26;
			VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * L_27 = V_6;
			NullCheck(L_27);
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_28;
			L_28 = VectorTileLayer_get_Values_mF6E5B39CB3146E45113B0F8793A4F00B06CDE4CB_inline(L_27, /*hidden argument*/NULL);
			VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_29 = V_8;
			NullCheck(L_29);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_30;
			L_30 = VectorTileFeature_get_Tags_mEF7037B43334DB825E5DA1DB2D5CD3EC92A580E3_inline(L_29, /*hidden argument*/NULL);
			int32_t L_31 = V_16;
			NullCheck(L_30);
			int32_t L_32;
			L_32 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_30, ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)), /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
			NullCheck(L_28);
			RuntimeObject * L_33;
			L_33 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_28, L_32, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
			V_18 = L_33;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_34 = V_9;
			NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_35;
			L_35 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_36;
			String_t* L_38 = V_17;
			NullCheck(L_37);
			ArrayElementTypeCheck (L_37, L_38);
			(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_38);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = L_37;
			RuntimeObject * L_40 = V_18;
			NullCheck(L_39);
			ArrayElementTypeCheck (L_39, L_40);
			(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_40);
			String_t* L_41;
			L_41 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_35, _stringLiteralCCCB24758B8281580D9CE13BCDDFE5C7584D4DCD, L_39, /*hidden argument*/NULL);
			NullCheck(L_34);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_34, L_41, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			int32_t L_42 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)2));
		}

IL_00ee:
		{
			int32_t L_43 = V_16;
			int32_t L_44 = V_10;
			V_19 = (bool)((((int32_t)L_43) < ((int32_t)L_44))? 1 : 0);
			bool L_45 = V_19;
			if (L_45)
			{
				goto IL_0085;
			}
		}

IL_00fa:
		{
			NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_46;
			L_46 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_47 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_48 = L_47;
			VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_49 = V_8;
			NullCheck(L_49);
			uint64_t L_50;
			L_50 = VectorTileFeature_get_Id_m1DB6068513457604D8652549AF604FD620F9B7BA_inline(L_49, /*hidden argument*/NULL);
			uint64_t L_51 = L_50;
			RuntimeObject * L_52 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_51);
			NullCheck(L_48);
			ArrayElementTypeCheck (L_48, L_52);
			(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_52);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_53 = L_48;
			VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * L_54 = V_6;
			NullCheck(L_54);
			String_t* L_55;
			L_55 = VectorTileLayer_get_Name_mA3A4EF6032A60FB77379CC8AC740D8F5110FC9D2_inline(L_54, /*hidden argument*/NULL);
			NullCheck(L_53);
			ArrayElementTypeCheck (L_53, L_55);
			(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_55);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_56 = L_53;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_57 = V_9;
			NullCheck(L_57);
			int32_t L_58;
			L_58 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_57, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
			G_B9_0 = 2;
			G_B9_1 = L_56;
			G_B9_2 = L_56;
			G_B9_3 = _stringLiteral47B9D1A03C2619F57397110F3FEB5C073256602F;
			G_B9_4 = L_46;
			if ((((int32_t)L_58) > ((int32_t)0)))
			{
				G_B10_0 = 2;
				G_B10_1 = L_56;
				G_B10_2 = L_56;
				G_B10_3 = _stringLiteral47B9D1A03C2619F57397110F3FEB5C073256602F;
				G_B10_4 = L_46;
				goto IL_0136;
			}
		}

IL_012f:
		{
			G_B11_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B11_1 = G_B9_0;
			G_B11_2 = G_B9_1;
			G_B11_3 = G_B9_2;
			G_B11_4 = G_B9_3;
			G_B11_5 = G_B9_4;
			goto IL_013b;
		}

IL_0136:
		{
			G_B11_0 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B11_1 = G_B10_0;
			G_B11_2 = G_B10_1;
			G_B11_3 = G_B10_2;
			G_B11_4 = G_B10_3;
			G_B11_5 = G_B10_4;
		}

IL_013b:
		{
			NullCheck(G_B11_2);
			ArrayElementTypeCheck (G_B11_2, G_B11_0);
			(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (RuntimeObject *)G_B11_0);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = G_B11_3;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_60 = V_9;
			NullCheck(L_60);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61;
			L_61 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_60, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
			String_t* L_62;
			L_62 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_61, /*hidden argument*/NULL);
			NullCheck(L_59);
			ArrayElementTypeCheck (L_59, L_62);
			(L_59)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_62);
			String_t* L_63;
			L_63 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(G_B11_5, G_B11_4, L_59, /*hidden argument*/NULL);
			V_11 = L_63;
			V_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_64 = V_8;
			NullCheck(L_64);
			int32_t L_65;
			L_65 = VectorTileFeature_get_GeometryType_m7CBCBCA6E1341251BA767C99DA2B88C8DE824516_inline(L_64, /*hidden argument*/NULL);
			int32_t L_66 = L_65;
			RuntimeObject * L_67 = Box(GeomType_tDA68E5055D5185EB6DBF85826BAA2C45E0E62693_il2cpp_TypeInfo_var, &L_66);
			String_t* L_68;
			L_68 = EnumExtensions_Description_mE75198D6FCECAB886D44F59F582F9073587FBFA5((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_67, /*hidden argument*/NULL);
			V_13 = L_68;
			VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_69 = V_8;
			uint64_t L_70 = ___zoom1;
			uint64_t L_71 = ___tileColumn2;
			uint64_t L_72 = ___tileRow3;
			il2cpp_codegen_initobj((&V_20), sizeof(Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 ));
			Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  L_73 = V_20;
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_74;
			L_74 = VectorTileFeatureExtensions_GeometryAsWgs84_m346AA4777C7A2521C5465106ECBF3506CDC636AB(L_69, L_70, L_71, L_72, L_73, /*hidden argument*/NULL);
			V_14 = L_74;
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_75 = V_14;
			NullCheck(L_75);
			int32_t L_76;
			L_76 = List_1_get_Count_m59F9FEB2E7BB0E297F4DB65165F504890906FA5F_inline(L_75, /*hidden argument*/List_1_get_Count_m59F9FEB2E7BB0E297F4DB65165F504890906FA5F_RuntimeMethod_var);
			V_21 = (bool)((((int32_t)L_76) > ((int32_t)1))? 1 : 0);
			bool L_77 = V_21;
			if (!L_77)
			{
				goto IL_037f;
			}
		}

IL_019a:
		{
			VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_78 = V_8;
			NullCheck(L_78);
			int32_t L_79;
			L_79 = VectorTileFeature_get_GeometryType_m7CBCBCA6E1341251BA767C99DA2B88C8DE824516_inline(L_78, /*hidden argument*/NULL);
			V_22 = L_79;
			int32_t L_80 = V_22;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)1)))
			{
				case 0:
				{
					goto IL_01be;
				}
				case 1:
				{
					goto IL_0225;
				}
				case 2:
				{
					goto IL_02c8;
				}
			}
		}

IL_01b9:
		{
			goto IL_0377;
		}

IL_01be:
		{
			V_13 = _stringLiteral7562CA79A392F95A04509C56C6B4D0A7FD10AFD3;
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_81 = V_14;
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
			Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * L_82 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9__0_2_1();
			Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * L_83 = L_82;
			G_B15_0 = L_83;
			G_B15_1 = L_81;
			G_B15_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			if (L_83)
			{
				G_B16_0 = L_83;
				G_B16_1 = L_81;
				G_B16_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
				goto IL_01eb;
			}
		}

IL_01d4:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
			U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * L_84 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * L_85 = (Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB *)il2cpp_codegen_object_new(Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB_il2cpp_TypeInfo_var);
			Func_2__ctor_m439A356168E2C9CD6F797C20CBE8F42FC4251AB0(L_85, L_84, (intptr_t)((intptr_t)U3CU3Ec_U3CToGeoJsonU3Eb__0_2_m2ADA9F39FF5F3E62870216937162DCCB323EE141_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m439A356168E2C9CD6F797C20CBE8F42FC4251AB0_RuntimeMethod_var);
			Func_2_tF252698C3A91832EB99D7479737EC76BC52B79AB * L_86 = L_85;
			((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->set_U3CU3E9__0_2_1(L_86);
			G_B16_0 = L_86;
			G_B16_1 = G_B15_1;
			G_B16_2 = G_B15_2;
		}

IL_01eb:
		{
			RuntimeObject* L_87;
			L_87 = Enumerable_SelectMany_TisList_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_mEF661A9BBD9CFDFCFB6C66DCB6D5F1DE41F10DB2(G_B16_1, G_B16_0, /*hidden argument*/Enumerable_SelectMany_TisList_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_mEF661A9BBD9CFDFCFB6C66DCB6D5F1DE41F10DB2_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_88 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9__0_3_2();
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_89 = L_88;
			G_B17_0 = L_89;
			G_B17_1 = L_87;
			G_B17_2 = G_B16_2;
			if (L_89)
			{
				G_B18_0 = L_89;
				G_B18_1 = L_87;
				G_B18_2 = G_B16_2;
				goto IL_020f;
			}
		}

IL_01f8:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
			U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * L_90 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_91 = (Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B *)il2cpp_codegen_object_new(Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B_il2cpp_TypeInfo_var);
			Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8(L_91, L_90, (intptr_t)((intptr_t)U3CU3Ec_U3CToGeoJsonU3Eb__0_3_m238F45482614FD7A2B32252DE056084B3EB5046A_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8_RuntimeMethod_var);
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_92 = L_91;
			((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->set_U3CU3E9__0_3_2(L_92);
			G_B18_0 = L_92;
			G_B18_1 = G_B17_1;
			G_B18_2 = G_B17_2;
		}

IL_020f:
		{
			RuntimeObject* L_93;
			L_93 = Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2(G_B18_1, G_B18_0, /*hidden argument*/Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2_RuntimeMethod_var);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_94;
			L_94 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_93, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
			String_t* L_95;
			L_95 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(G_B18_2, L_94, /*hidden argument*/NULL);
			V_12 = L_95;
			goto IL_0379;
		}

IL_0225:
		{
			V_13 = _stringLiteralEF1E28BFC288C71D7FA87622A964DC8831E8A820;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_96 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_96, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			V_23 = L_96;
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_97 = V_14;
			NullCheck(L_97);
			Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606  L_98;
			L_98 = List_1_GetEnumerator_m70472509C2A019F3D4DD3E18E05992C8CD01C24B(L_97, /*hidden argument*/List_1_GetEnumerator_m70472509C2A019F3D4DD3E18E05992C8CD01C24B_RuntimeMethod_var);
			V_25 = L_98;
		}

IL_023d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0296;
			}

IL_023f:
			{
				List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * L_99;
				L_99 = Enumerator_get_Current_mCE869D1F4F2D1614E8FADE49CB83A006E5BD6DA5_inline((Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 *)(&V_25), /*hidden argument*/Enumerator_get_Current_mCE869D1F4F2D1614E8FADE49CB83A006E5BD6DA5_RuntimeMethod_var);
				V_26 = L_99;
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_100 = V_23;
				List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * L_101 = V_26;
				IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
				Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_102 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9__0_4_3();
				Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_103 = L_102;
				G_B22_0 = L_103;
				G_B22_1 = L_101;
				G_B22_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
				G_B22_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
				G_B22_4 = L_100;
				if (L_103)
				{
					G_B23_0 = L_103;
					G_B23_1 = L_101;
					G_B23_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
					G_B23_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
					G_B23_4 = L_100;
					goto IL_0276;
				}
			}

IL_025f:
			{
				IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
				U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * L_104 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
				Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_105 = (Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B *)il2cpp_codegen_object_new(Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B_il2cpp_TypeInfo_var);
				Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8(L_105, L_104, (intptr_t)((intptr_t)U3CU3Ec_U3CToGeoJsonU3Eb__0_4_mDE4098C4ABA6F3B1DEF945A64559FFA656E2F3F6_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8_RuntimeMethod_var);
				Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_106 = L_105;
				((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->set_U3CU3E9__0_4_3(L_106);
				G_B23_0 = L_106;
				G_B23_1 = G_B22_1;
				G_B23_2 = G_B22_2;
				G_B23_3 = G_B22_3;
				G_B23_4 = G_B22_4;
			}

IL_0276:
			{
				RuntimeObject* L_107;
				L_107 = Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2(G_B23_1, G_B23_0, /*hidden argument*/Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2_RuntimeMethod_var);
				StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_108;
				L_108 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_107, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
				String_t* L_109;
				L_109 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(G_B23_2, L_108, /*hidden argument*/NULL);
				String_t* L_110;
				L_110 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B23_3, L_109, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
				NullCheck(G_B23_4);
				List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(G_B23_4, L_110, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			}

IL_0296:
			{
				bool L_111;
				L_111 = Enumerator_MoveNext_m5C749F1BBF63E21AD2C55D486F070FE552B6C102((Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 *)(&V_25), /*hidden argument*/Enumerator_MoveNext_m5C749F1BBF63E21AD2C55D486F070FE552B6C102_RuntimeMethod_var);
				if (L_111)
				{
					goto IL_023f;
				}
			}

IL_029f:
			{
				IL2CPP_LEAVE(0x2B0, FINALLY_02a1);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_02a1;
		}

FINALLY_02a1:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mC6C771E9F7D6936551984AE11F6232AD6984A666((Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 *)(&V_25), /*hidden argument*/Enumerator_Dispose_mC6C771E9F7D6936551984AE11F6232AD6984A666_RuntimeMethod_var);
			IL2CPP_END_FINALLY(673)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(673)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
		}

IL_02b0:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_112 = V_23;
			NullCheck(L_112);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113;
			L_113 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_112, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
			String_t* L_114;
			L_114 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_113, /*hidden argument*/NULL);
			V_12 = L_114;
			goto IL_0379;
		}

IL_02c8:
		{
			V_13 = _stringLiteral1F28FF8AD33779DEC9680F0321D01D22563ED0E8;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_115 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_115, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			V_24 = L_115;
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_116 = V_14;
			NullCheck(L_116);
			Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606  L_117;
			L_117 = List_1_GetEnumerator_m70472509C2A019F3D4DD3E18E05992C8CD01C24B(L_116, /*hidden argument*/List_1_GetEnumerator_m70472509C2A019F3D4DD3E18E05992C8CD01C24B_RuntimeMethod_var);
			V_27 = L_117;
		}

IL_02e0:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0339;
			}

IL_02e2:
			{
				List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * L_118;
				L_118 = Enumerator_get_Current_mCE869D1F4F2D1614E8FADE49CB83A006E5BD6DA5_inline((Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 *)(&V_27), /*hidden argument*/Enumerator_get_Current_mCE869D1F4F2D1614E8FADE49CB83A006E5BD6DA5_RuntimeMethod_var);
				V_28 = L_118;
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_119 = V_24;
				List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * L_120 = V_28;
				IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
				Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_121 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9__0_5_4();
				Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_122 = L_121;
				G_B31_0 = L_122;
				G_B31_1 = L_120;
				G_B31_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
				G_B31_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
				G_B31_4 = L_119;
				if (L_122)
				{
					G_B32_0 = L_122;
					G_B32_1 = L_120;
					G_B32_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
					G_B32_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
					G_B32_4 = L_119;
					goto IL_0319;
				}
			}

IL_0302:
			{
				IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
				U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * L_123 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
				Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_124 = (Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B *)il2cpp_codegen_object_new(Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B_il2cpp_TypeInfo_var);
				Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8(L_124, L_123, (intptr_t)((intptr_t)U3CU3Ec_U3CToGeoJsonU3Eb__0_5_m1DF0A45751A2A313BD6178EE8FCD36ED0B152D0B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8_RuntimeMethod_var);
				Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_125 = L_124;
				((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->set_U3CU3E9__0_5_4(L_125);
				G_B32_0 = L_125;
				G_B32_1 = G_B31_1;
				G_B32_2 = G_B31_2;
				G_B32_3 = G_B31_3;
				G_B32_4 = G_B31_4;
			}

IL_0319:
			{
				RuntimeObject* L_126;
				L_126 = Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2(G_B32_1, G_B32_0, /*hidden argument*/Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2_RuntimeMethod_var);
				StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_127;
				L_127 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_126, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
				String_t* L_128;
				L_128 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(G_B32_2, L_127, /*hidden argument*/NULL);
				String_t* L_129;
				L_129 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B32_3, L_128, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
				NullCheck(G_B32_4);
				List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(G_B32_4, L_129, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			}

IL_0339:
			{
				bool L_130;
				L_130 = Enumerator_MoveNext_m5C749F1BBF63E21AD2C55D486F070FE552B6C102((Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 *)(&V_27), /*hidden argument*/Enumerator_MoveNext_m5C749F1BBF63E21AD2C55D486F070FE552B6C102_RuntimeMethod_var);
				if (L_130)
				{
					goto IL_02e2;
				}
			}

IL_0342:
			{
				IL2CPP_LEAVE(0x353, FINALLY_0344);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0344;
		}

FINALLY_0344:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mC6C771E9F7D6936551984AE11F6232AD6984A666((Enumerator_tD13CA6D0D91C1341328A4F0E15EF4EE501A77606 *)(&V_27), /*hidden argument*/Enumerator_Dispose_mC6C771E9F7D6936551984AE11F6232AD6984A666_RuntimeMethod_var);
			IL2CPP_END_FINALLY(836)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(836)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x353, IL_0353)
		}

IL_0353:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_131 = V_24;
			NullCheck(L_131);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_132;
			L_132 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_131, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
			String_t* L_133;
			L_133 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_132, /*hidden argument*/NULL);
			String_t* L_134;
			L_134 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_133, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
			V_12 = L_134;
			goto IL_0379;
		}

IL_0377:
		{
			goto IL_0379;
		}

IL_0379:
		{
			goto IL_04a5;
		}

IL_037f:
		{
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_135 = V_14;
			NullCheck(L_135);
			int32_t L_136;
			L_136 = List_1_get_Count_m59F9FEB2E7BB0E297F4DB65165F504890906FA5F_inline(L_135, /*hidden argument*/List_1_get_Count_m59F9FEB2E7BB0E297F4DB65165F504890906FA5F_RuntimeMethod_var);
			V_29 = (bool)((((int32_t)L_136) == ((int32_t)1))? 1 : 0);
			bool L_137 = V_29;
			if (!L_137)
			{
				goto IL_04a2;
			}
		}

IL_0392:
		{
			VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_138 = V_8;
			NullCheck(L_138);
			int32_t L_139;
			L_139 = VectorTileFeature_get_GeometryType_m7CBCBCA6E1341251BA767C99DA2B88C8DE824516_inline(L_138, /*hidden argument*/NULL);
			V_30 = L_139;
			int32_t L_140 = V_30;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)1)))
			{
				case 0:
				{
					goto IL_03b6;
				}
				case 1:
				{
					goto IL_0410;
				}
				case 2:
				{
					goto IL_044f;
				}
			}
		}

IL_03b1:
		{
			goto IL_049d;
		}

IL_03b6:
		{
			NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_141;
			L_141 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_142 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_143 = L_142;
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_144 = V_14;
			NullCheck(L_144);
			List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * L_145;
			L_145 = List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_inline(L_144, 0, /*hidden argument*/List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_RuntimeMethod_var);
			NullCheck(L_145);
			LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  L_146;
			L_146 = List_1_get_Item_m55A26C1B2DC743B0E263C1016119B774E7F1299A_inline(L_145, 0, /*hidden argument*/List_1_get_Item_m55A26C1B2DC743B0E263C1016119B774E7F1299A_RuntimeMethod_var);
			V_31 = L_146;
			double L_147;
			L_147 = LatLng_get_Lng_mA59541CE35A8EB5935C73D56D23776D6D2A1CB62_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&V_31), /*hidden argument*/NULL);
			double L_148 = L_147;
			RuntimeObject * L_149 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_148);
			NullCheck(L_143);
			ArrayElementTypeCheck (L_143, L_149);
			(L_143)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_149);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_150 = L_143;
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_151 = V_14;
			NullCheck(L_151);
			List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * L_152;
			L_152 = List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_inline(L_151, 0, /*hidden argument*/List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_RuntimeMethod_var);
			NullCheck(L_152);
			LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  L_153;
			L_153 = List_1_get_Item_m55A26C1B2DC743B0E263C1016119B774E7F1299A_inline(L_152, 0, /*hidden argument*/List_1_get_Item_m55A26C1B2DC743B0E263C1016119B774E7F1299A_RuntimeMethod_var);
			V_31 = L_153;
			double L_154;
			L_154 = LatLng_get_Lat_m86DDB36FD3FDFB56FE421BDC60E6FCB26B236133_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&V_31), /*hidden argument*/NULL);
			double L_155 = L_154;
			RuntimeObject * L_156 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_155);
			NullCheck(L_150);
			ArrayElementTypeCheck (L_150, L_156);
			(L_150)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_156);
			String_t* L_157;
			L_157 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_141, _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_150, /*hidden argument*/NULL);
			V_12 = L_157;
			goto IL_049f;
		}

IL_0410:
		{
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_158 = V_14;
			NullCheck(L_158);
			List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * L_159;
			L_159 = List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_inline(L_158, 0, /*hidden argument*/List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_160 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_5();
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_161 = L_160;
			G_B44_0 = L_161;
			G_B44_1 = L_159;
			G_B44_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			if (L_161)
			{
				G_B45_0 = L_161;
				G_B45_1 = L_159;
				G_B45_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
				goto IL_043c;
			}
		}

IL_0425:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
			U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * L_162 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_163 = (Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B *)il2cpp_codegen_object_new(Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B_il2cpp_TypeInfo_var);
			Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8(L_163, L_162, (intptr_t)((intptr_t)U3CU3Ec_U3CToGeoJsonU3Eb__0_0_mD9B02B7EC29EB7A825229FB863BE1A546CB89AE8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8_RuntimeMethod_var);
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_164 = L_163;
			((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_5(L_164);
			G_B45_0 = L_164;
			G_B45_1 = G_B44_1;
			G_B45_2 = G_B44_2;
		}

IL_043c:
		{
			RuntimeObject* L_165;
			L_165 = Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2(G_B45_1, G_B45_0, /*hidden argument*/Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2_RuntimeMethod_var);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_166;
			L_166 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_165, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
			String_t* L_167;
			L_167 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(G_B45_2, L_166, /*hidden argument*/NULL);
			V_12 = L_167;
			goto IL_049f;
		}

IL_044f:
		{
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_168 = V_14;
			NullCheck(L_168);
			List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * L_169;
			L_169 = List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_inline(L_168, 0, /*hidden argument*/List_1_get_Item_m61A1AC067F58058413D30EB57063CDACA533AB59_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_170 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_6();
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_171 = L_170;
			G_B47_0 = L_171;
			G_B47_1 = L_169;
			G_B47_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B47_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
			if (L_171)
			{
				G_B48_0 = L_171;
				G_B48_1 = L_169;
				G_B48_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
				G_B48_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
				goto IL_0480;
			}
		}

IL_0469:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
			U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * L_172 = ((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_173 = (Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B *)il2cpp_codegen_object_new(Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B_il2cpp_TypeInfo_var);
			Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8(L_173, L_172, (intptr_t)((intptr_t)U3CU3Ec_U3CToGeoJsonU3Eb__0_1_mE275BF869242B701EAEED7F9B4C4C8513390FEAA_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m70F6B4508F1C1F487A71644F92DF73864F4E11B8_RuntimeMethod_var);
			Func_2_tE1F413C4B72FB53E49495D86606BBB0315C66A8B * L_174 = L_173;
			((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_6(L_174);
			G_B48_0 = L_174;
			G_B48_1 = G_B47_1;
			G_B48_2 = G_B47_2;
			G_B48_3 = G_B47_3;
		}

IL_0480:
		{
			RuntimeObject* L_175;
			L_175 = Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2(G_B48_1, G_B48_0, /*hidden argument*/Enumerable_Select_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_TisString_t_m580F21BCA1A60B61922860713E046831C5271AD2_RuntimeMethod_var);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_176;
			L_176 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_175, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
			String_t* L_177;
			L_177 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(G_B48_2, L_176, /*hidden argument*/NULL);
			String_t* L_178;
			L_178 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B48_3, L_177, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
			V_12 = L_178;
			goto IL_049f;
		}

IL_049d:
		{
			goto IL_049f;
		}

IL_049f:
		{
			goto IL_04a5;
		}

IL_04a2:
		{
			goto IL_04cd;
		}

IL_04a5:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_179 = V_2;
			NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_180;
			L_180 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
			String_t* L_181 = V_1;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_182 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_183 = L_182;
			String_t* L_184 = V_13;
			NullCheck(L_183);
			ArrayElementTypeCheck (L_183, L_184);
			(L_183)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_184);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_185 = L_183;
			String_t* L_186 = V_12;
			NullCheck(L_185);
			ArrayElementTypeCheck (L_185, L_186);
			(L_185)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_186);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_187 = L_185;
			String_t* L_188 = V_11;
			NullCheck(L_187);
			ArrayElementTypeCheck (L_187, L_188);
			(L_187)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_188);
			String_t* L_189;
			L_189 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_180, L_181, L_187, /*hidden argument*/NULL);
			NullCheck(L_179);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_179, L_189, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_04cd:
		{
			int32_t L_190 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_190, (int32_t)1));
		}

IL_04d3:
		{
			int32_t L_191 = V_7;
			VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * L_192 = V_6;
			NullCheck(L_192);
			int32_t L_193;
			L_193 = VectorTileLayer_FeatureCount_m24BDB73D5F17CA1499FEB88DE34B1A2734336F6B(L_192, /*hidden argument*/NULL);
			V_32 = (bool)((((int32_t)L_191) < ((int32_t)L_193))? 1 : 0);
			bool L_194 = V_32;
			if (L_194)
			{
				goto IL_0042;
			}
		}

IL_04e7:
		{
		}

IL_04e8:
		{
			RuntimeObject* L_195 = V_4;
			NullCheck(L_195);
			bool L_196;
			L_196 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_195);
			if (L_196)
			{
				goto IL_0026;
			}
		}

IL_04f4:
		{
			IL2CPP_LEAVE(0x503, FINALLY_04f6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_04f6;
	}

FINALLY_04f6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_197 = V_4;
			if (!L_197)
			{
				goto IL_0502;
			}
		}

IL_04fa:
		{
			RuntimeObject* L_198 = V_4;
			NullCheck(L_198);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_198);
		}

IL_0502:
		{
			IL2CPP_END_FINALLY(1270)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1270)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x503, IL_0503)
	}

IL_0503:
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_199;
		L_199 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		String_t* L_200 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_201 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_202 = L_201;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_203 = V_2;
		NullCheck(L_203);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_204;
		L_204 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_203, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		String_t* L_205;
		L_205 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_204, /*hidden argument*/NULL);
		NullCheck(L_202);
		ArrayElementTypeCheck (L_202, L_205);
		(L_202)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_205);
		String_t* L_206;
		L_206 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_199, L_200, L_202, /*hidden argument*/NULL);
		V_3 = L_206;
		String_t* L_207 = V_3;
		V_33 = L_207;
		goto IL_052d;
	}

IL_052d:
	{
		String_t* L_208 = V_33;
		return L_208;
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
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>> Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions::GeometryAsWgs84(Mapbox.VectorTile.VectorTileFeature,System.UInt64,System.UInt64,System.UInt64,System.Nullable`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t864126488BD235D7FC1938836FF23251AECF00BC * VectorTileFeatureExtensions_GeometryAsWgs84_m346AA4777C7A2521C5465106ECBF3506CDC636AB (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * ___feature0, uint64_t ___zoom1, uint64_t ___tileColumn2, uint64_t ___tileRow3, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ___clipBuffer4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPoint2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m887A440806FE6F0BB2B5914728090FB5CE292B81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m6CD8DADFA05092732DFE7529AB128BE6CA8CCF26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE88353C69A9EED242538BA295BF3EBEE29F4714E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m51082007159BEDD13B73E59F070660CCDDF9BDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m295F1A1539E66E394F811765DE3EFCB34D330693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mB03D9F112384A78D7D7EA8DB65C42A5B8D97320A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m909D2631877480001FD3C4AEF5770B8AEED6FF61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2A88907876E6A5A976E6F5BC14C36E8A02F71569_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m873A7F813E1C77320CF622AB434AEF8FEE552AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t864126488BD235D7FC1938836FF23251AECF00BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGeometryAsWgs84U3Eb__0_m65A4DC3F37546D3E1CEFB00252928C04A30456FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorTileFeature_Geometry_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m845DBFEF293DFB8837D8A0B200A3496E4B16FCF5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * V_0 = NULL;
	List_1_t864126488BD235D7FC1938836FF23251AECF00BC * V_1 = NULL;
	Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362  V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 * V_3 = NULL;
	Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * V_4 = NULL;
	List_1_t864126488BD235D7FC1938836FF23251AECF00BC * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * G_B4_0 = NULL;
	List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 * G_B4_1 = NULL;
	List_1_t864126488BD235D7FC1938836FF23251AECF00BC * G_B4_2 = NULL;
	Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * G_B3_0 = NULL;
	List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 * G_B3_1 = NULL;
	List_1_t864126488BD235D7FC1938836FF23251AECF00BC * G_B3_2 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * L_0 = (U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m57EB58EDDACA08E1E09F66E95A755E02787449C8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * L_1 = V_0;
		uint64_t L_2 = ___zoom1;
		NullCheck(L_1);
		L_1->set_zoom_0(L_2);
		U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * L_3 = V_0;
		uint64_t L_4 = ___tileColumn2;
		NullCheck(L_3);
		L_3->set_tileColumn_1(L_4);
		U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * L_5 = V_0;
		uint64_t L_6 = ___tileRow3;
		NullCheck(L_5);
		L_5->set_tileRow_2(L_6);
		U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * L_7 = V_0;
		VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_8 = ___feature0;
		NullCheck(L_7);
		L_7->set_feature_3(L_8);
		List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_9 = (List_1_t864126488BD235D7FC1938836FF23251AECF00BC *)il2cpp_codegen_object_new(List_1_t864126488BD235D7FC1938836FF23251AECF00BC_il2cpp_TypeInfo_var);
		List_1__ctor_m873A7F813E1C77320CF622AB434AEF8FEE552AAC(L_9, /*hidden argument*/List_1__ctor_m873A7F813E1C77320CF622AB434AEF8FEE552AAC_RuntimeMethod_var);
		V_1 = L_9;
		U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * L_10 = V_0;
		NullCheck(L_10);
		VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_11 = L_10->get_feature_3();
		Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  L_12 = ___clipBuffer4;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_13), (1.0f), /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_tF7471F103BAEF38A7112E3F536DCD6D3CA1CA710 * L_14;
		L_14 = VectorTileFeature_Geometry_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m845DBFEF293DFB8837D8A0B200A3496E4B16FCF5(L_11, L_12, L_13, /*hidden argument*/VectorTileFeature_Geometry_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m845DBFEF293DFB8837D8A0B200A3496E4B16FCF5_RuntimeMethod_var);
		NullCheck(L_14);
		Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362  L_15;
		L_15 = List_1_GetEnumerator_m2A88907876E6A5A976E6F5BC14C36E8A02F71569(L_14, /*hidden argument*/List_1_GetEnumerator_m2A88907876E6A5A976E6F5BC14C36E8A02F71569_RuntimeMethod_var);
		V_2 = L_15;
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0086;
		}

IL_0049:
		{
			List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 * L_16;
			L_16 = Enumerator_get_Current_m295F1A1539E66E394F811765DE3EFCB34D330693_inline((Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m295F1A1539E66E394F811765DE3EFCB34D330693_RuntimeMethod_var);
			V_3 = L_16;
			List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_17 = V_1;
			List_1_tF118F9F646E86BDFEA01788320EF2D9B7FAA74C5 * L_18 = V_3;
			U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * L_19 = V_0;
			NullCheck(L_19);
			Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * L_20 = L_19->get_U3CU3E9__0_4();
			Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * L_21 = L_20;
			G_B3_0 = L_21;
			G_B3_1 = L_18;
			G_B3_2 = L_17;
			if (L_21)
			{
				G_B4_0 = L_21;
				G_B4_1 = L_18;
				G_B4_2 = L_17;
				goto IL_0075;
			}
		}

IL_005d:
		{
			U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * L_22 = V_0;
			U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * L_23 = V_0;
			Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * L_24 = (Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 *)il2cpp_codegen_object_new(Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2_il2cpp_TypeInfo_var);
			Func_2__ctor_mB03D9F112384A78D7D7EA8DB65C42A5B8D97320A(L_24, L_23, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CGeometryAsWgs84U3Eb__0_m65A4DC3F37546D3E1CEFB00252928C04A30456FD_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB03D9F112384A78D7D7EA8DB65C42A5B8D97320A_RuntimeMethod_var);
			Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * L_25 = L_24;
			V_4 = L_25;
			NullCheck(L_22);
			L_22->set_U3CU3E9__0_4(L_25);
			Func_2_tE92A3E4C499B1ACEC2E098E53E2FA36E943B8AF2 * L_26 = V_4;
			G_B4_0 = L_26;
			G_B4_1 = G_B3_1;
			G_B4_2 = G_B3_2;
		}

IL_0075:
		{
			RuntimeObject* L_27;
			L_27 = Enumerable_Select_TisPoint2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m887A440806FE6F0BB2B5914728090FB5CE292B81(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisPoint2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m887A440806FE6F0BB2B5914728090FB5CE292B81_RuntimeMethod_var);
			List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * L_28;
			L_28 = Enumerable_ToList_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m6CD8DADFA05092732DFE7529AB128BE6CA8CCF26(L_27, /*hidden argument*/Enumerable_ToList_TisLatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221_m6CD8DADFA05092732DFE7529AB128BE6CA8CCF26_RuntimeMethod_var);
			NullCheck(G_B4_2);
			List_1_Add_m909D2631877480001FD3C4AEF5770B8AEED6FF61(G_B4_2, L_28, /*hidden argument*/List_1_Add_m909D2631877480001FD3C4AEF5770B8AEED6FF61_RuntimeMethod_var);
		}

IL_0086:
		{
			bool L_29;
			L_29 = Enumerator_MoveNext_m51082007159BEDD13B73E59F070660CCDDF9BDB4((Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m51082007159BEDD13B73E59F070660CCDDF9BDB4_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_0049;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0xA0, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE88353C69A9EED242538BA295BF3EBEE29F4714E((Enumerator_t7F65ED14758320ED411954F4A84ACAE331E95362 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mE88353C69A9EED242538BA295BF3EBEE29F4714E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(145)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA0, IL_00a0)
	}

IL_00a0:
	{
		List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_30 = V_1;
		V_5 = L_30;
		goto IL_00a5;
	}

IL_00a5:
	{
		List_1_t864126488BD235D7FC1938836FF23251AECF00BC * L_31 = V_5;
		return L_31;
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
// System.Void Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m716EF315074396B979C76BD2E3BC4548E45FBDDD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * L_0 = (U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B *)il2cpp_codegen_object_new(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC9AF5FCAEEBCD6A8B78A8D79E784A0F7FC0DD79E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC9AF5FCAEEBCD6A8B78A8D79E784A0F7FC0DD79E (U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_2(System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CToGeoJsonU3Eb__0_2_m2ADA9F39FF5F3E62870216937162DCCB323EE141 (U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * __this, List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * ___g0, const RuntimeMethod* method)
{
	{
		List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * L_0 = ___g0;
		return L_0;
	}
}
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_3(Mapbox.VectorTile.Geometry.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToGeoJsonU3Eb__0_3_m238F45482614FD7A2B32252DE056084B3EB5046A (U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * __this, LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  ___g0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		double L_3;
		L_3 = LatLng_get_Lng_mA59541CE35A8EB5935C73D56D23776D6D2A1CB62_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&___g0), /*hidden argument*/NULL);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		double L_7;
		L_7 = LatLng_get_Lat_m86DDB36FD3FDFB56FE421BDC60E6FCB26B236133_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&___g0), /*hidden argument*/NULL);
		double L_8 = L_7;
		RuntimeObject * L_9 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		String_t* L_10;
		L_10 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_0, _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_6, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_4(Mapbox.VectorTile.Geometry.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToGeoJsonU3Eb__0_4_mDE4098C4ABA6F3B1DEF945A64559FFA656E2F3F6 (U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * __this, LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  ___g0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		double L_3;
		L_3 = LatLng_get_Lng_mA59541CE35A8EB5935C73D56D23776D6D2A1CB62_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&___g0), /*hidden argument*/NULL);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		double L_7;
		L_7 = LatLng_get_Lat_m86DDB36FD3FDFB56FE421BDC60E6FCB26B236133_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&___g0), /*hidden argument*/NULL);
		double L_8 = L_7;
		RuntimeObject * L_9 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		String_t* L_10;
		L_10 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_0, _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_6, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_5(Mapbox.VectorTile.Geometry.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToGeoJsonU3Eb__0_5_m1DF0A45751A2A313BD6178EE8FCD36ED0B152D0B (U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * __this, LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  ___g0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		double L_3;
		L_3 = LatLng_get_Lng_mA59541CE35A8EB5935C73D56D23776D6D2A1CB62_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&___g0), /*hidden argument*/NULL);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		double L_7;
		L_7 = LatLng_get_Lat_m86DDB36FD3FDFB56FE421BDC60E6FCB26B236133_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&___g0), /*hidden argument*/NULL);
		double L_8 = L_7;
		RuntimeObject * L_9 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		String_t* L_10;
		L_10 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_0, _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_6, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_0(Mapbox.VectorTile.Geometry.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToGeoJsonU3Eb__0_0_mD9B02B7EC29EB7A825229FB863BE1A546CB89AE8 (U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * __this, LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  ___g0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		double L_3;
		L_3 = LatLng_get_Lng_mA59541CE35A8EB5935C73D56D23776D6D2A1CB62_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&___g0), /*hidden argument*/NULL);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		double L_7;
		L_7 = LatLng_get_Lat_m86DDB36FD3FDFB56FE421BDC60E6FCB26B236133_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&___g0), /*hidden argument*/NULL);
		double L_8 = L_7;
		RuntimeObject * L_9 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		String_t* L_10;
		L_10 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_0, _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_6, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_1(Mapbox.VectorTile.Geometry.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToGeoJsonU3Eb__0_1_mE275BF869242B701EAEED7F9B4C4C8513390FEAA (U3CU3Ec_tB0D310E171131074C8CCD8A453D150716D8D554B * __this, LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  ___g0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		double L_3;
		L_3 = LatLng_get_Lng_mA59541CE35A8EB5935C73D56D23776D6D2A1CB62_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&___g0), /*hidden argument*/NULL);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		double L_7;
		L_7 = LatLng_get_Lat_m86DDB36FD3FDFB56FE421BDC60E6FCB26B236133_inline((LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 *)(&___g0), /*hidden argument*/NULL);
		double L_8 = L_7;
		RuntimeObject * L_9 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		String_t* L_10;
		L_10 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_0, _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_6, /*hidden argument*/NULL);
		return L_10;
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
// System.Void Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m57EB58EDDACA08E1E09F66E95A755E02787449C8 (U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Mapbox.VectorTile.Geometry.LatLng Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::<GeometryAsWgs84>b__0(Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  U3CU3Ec__DisplayClass0_0_U3CGeometryAsWgs84U3Eb__0_m65A4DC3F37546D3E1CEFB00252928C04A30456FD (U3CU3Ec__DisplayClass0_0_t82D2C05BADD97DE1FB5BA10C2716A735FACD1B6E * __this, Point2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB  ___g0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point2d_1_ToLngLat_m67FE1D4C23430721EE7D617F8DF8C77D4E67BE77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = __this->get_zoom_0();
		uint64_t L_1 = __this->get_tileColumn_1();
		uint64_t L_2 = __this->get_tileRow_2();
		VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * L_3 = __this->get_feature_3();
		NullCheck(L_3);
		VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * L_4;
		L_4 = VectorTileFeature_get_Layer_mE3607EB62EF3FB27CB6A25A1F39A737E21E8CCC1(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		uint64_t L_5;
		L_5 = VectorTileLayer_get_Extent_m5D602FC9A2CE0BE0E29ED4AFB4A1D3C5E572BAED_inline(L_4, /*hidden argument*/NULL);
		LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  L_6;
		L_6 = Point2d_1_ToLngLat_m67FE1D4C23430721EE7D617F8DF8C77D4E67BE77((Point2d_1_tEDB76CC2BA96FAE46E880F49331A50773E619DCB *)(&___g0), L_0, L_1, L_2, L_5, (bool)0, /*hidden argument*/Point2d_1_ToLngLat_m67FE1D4C23430721EE7D617F8DF8C77D4E67BE77_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VectorTileFeature_get_GeometryType_m7CBCBCA6E1341251BA767C99DA2B88C8DE824516_inline (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CGeometryTypeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * VectorTileFeature_get_Tags_mEF7037B43334DB825E5DA1DB2D5CD3EC92A580E3_inline (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_U3CTagsU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * VectorTileLayer_get_Keys_m2F236213D3CB8A78FFA5C080CB9B1FE4F428D880_inline (VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * __this, const RuntimeMethod* method)
{
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CKeysU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * VectorTileLayer_get_Values_mF6E5B39CB3146E45113B0F8793A4F00B06CDE4CB_inline (VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get_U3CValuesU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t VectorTileFeature_get_Id_m1DB6068513457604D8652549AF604FD620F9B7BA_inline (VectorTileFeature_t0CCC6996540AD088DC409A6F4AF045FF5342222C * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3CIdU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VectorTileLayer_get_Name_mA3A4EF6032A60FB77379CC8AC740D8F5110FC9D2_inline (VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double LatLng_get_Lng_mA59541CE35A8EB5935C73D56D23776D6D2A1CB62_inline (LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CLngU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double LatLng_get_Lat_m86DDB36FD3FDFB56FE421BDC60E6FCB26B236133_inline (LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CLatU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t VectorTileLayer_get_Extent_m5D602FC9A2CE0BE0E29ED4AFB4A1D3C5E572BAED_inline (VectorTileLayer_tB475F777C8E4978902DFE3284B66EF514F390348 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3CExtentU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  List_1_get_Item_m55A26C1B2DC743B0E263C1016119B774E7F1299A_gshared_inline (List_1_t90DFBC1B25ADB979E569FDCC39AAF79E14210CC9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6* L_2 = (LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6*)__this->get__items_1();
		int32_t L_3 = ___index0;
		LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((LatLngU5BU5D_tAE2C2C8483158201EE0180EB3B14F4691EC7ACA6*)L_2, (int32_t)L_3);
		return (LatLng_t87CC943B9B0AE32CC3E6A2B52CB03516F6752221 )L_4;
	}
}
