// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/ObstacleAssaultGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacleAssaultGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AObstacleAssaultGameMode();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AObstacleAssaultGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// End Cross Module References

// Begin Class AObstacleAssaultGameMode
void AObstacleAssaultGameMode::StaticRegisterNativesAObstacleAssaultGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacleAssaultGameMode);
UClass* Z_Construct_UClass_AObstacleAssaultGameMode_NoRegister()
{
	return AObstacleAssaultGameMode::StaticClass();
}
struct Z_Construct_UClass_AObstacleAssaultGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ObstacleAssaultGameMode.h" },
		{ "ModuleRelativePath", "ObstacleAssaultGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacleAssaultGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AObstacleAssaultGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleAssaultGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacleAssaultGameMode_Statics::ClassParams = {
	&AObstacleAssaultGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleAssaultGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstacleAssaultGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstacleAssaultGameMode()
{
	if (!Z_Registration_Info_UClass_AObstacleAssaultGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacleAssaultGameMode.OuterSingleton, Z_Construct_UClass_AObstacleAssaultGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstacleAssaultGameMode.OuterSingleton;
}
template<> OBSTACLEASSAULT_API UClass* StaticClass<AObstacleAssaultGameMode>()
{
	return AObstacleAssaultGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacleAssaultGameMode);
AObstacleAssaultGameMode::~AObstacleAssaultGameMode() {}
// End Class AObstacleAssaultGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Udemy_obstacle_assault_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstacleAssaultGameMode, AObstacleAssaultGameMode::StaticClass, TEXT("AObstacleAssaultGameMode"), &Z_Registration_Info_UClass_AObstacleAssaultGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacleAssaultGameMode), 3472239719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Udemy_obstacle_assault_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h_2331031887(TEXT("/Script/ObstacleAssault"),
	Z_CompiledInDeferFile_FID_Unreal_Udemy_obstacle_assault_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Udemy_obstacle_assault_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
