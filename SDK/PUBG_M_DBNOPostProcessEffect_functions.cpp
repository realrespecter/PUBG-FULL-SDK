// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_DBNOPostProcessEffect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function M_DBNOPostProcessEffect.M_DBNOPostProcessEffect_C.UserConstructionScript
// (Event)

void AM_DBNOPostProcessEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_DBNOPostProcessEffect.M_DBNOPostProcessEffect_C.UserConstructionScript");

	AM_DBNOPostProcessEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif