#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_AR_AKM_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslParticle.SetParticleParameter
struct AP_AR_AKM_BP_C_SetParticleParameter_Params
{
	class FString*                                     Name;                                                     // (Parm, ZeroConstructor)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnableRTPC;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslParticle.OnParticleFinish
struct AP_AR_AKM_BP_C_OnParticleFinish_Params
{
	class UParticleSystemComponent**                   PSystem;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslParticle.OnParticleCollide
struct AP_AR_AKM_BP_C_OnParticleCollide_Params
{
	struct FName*                                      EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ParticleTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, IsPlainOldData)
	struct FVector*                                    Velocity;                                                 // (Parm, IsPlainOldData)
	struct FVector*                                    Direction;                                                // (Parm, IsPlainOldData)
	struct FVector*                                    Normal;                                                   // (Parm, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial**                          PhysMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslParticle.OnParameterUpdated
struct AP_AR_AKM_BP_C_OnParameterUpdated_Params
{
};

// Function TslGame.TslParticle.GetParticleParamter
struct AP_AR_AKM_BP_C_GetParticleParamter_Params
{
	class FString*                                     Name;                                                     // (Parm, ZeroConstructor)
	float*                                             DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale
struct AP_AR_AKM_BP_C_GetEmitterGlobalSpawnRateScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslParticle.ForceSpawn
struct AP_AR_AKM_BP_C_ForceSpawn_Params
{
	int*                                               emitterIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    InLocation;                                               // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslParticle.AttachToParent
struct AP_AR_AKM_BP_C_AttachToParent_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
