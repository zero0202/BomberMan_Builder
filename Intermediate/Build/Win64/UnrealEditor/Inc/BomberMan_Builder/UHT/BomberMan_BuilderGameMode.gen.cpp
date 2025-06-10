// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Builder/BomberMan_BuilderGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_BuilderGameMode() {}

// Begin Cross Module References
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_ABomberMan_BuilderGameMode();
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_ABomberMan_BuilderGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_Builder();
// End Cross Module References

// Begin Class ABomberMan_BuilderGameMode
void ABomberMan_BuilderGameMode::StaticRegisterNativesABomberMan_BuilderGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_BuilderGameMode);
UClass* Z_Construct_UClass_ABomberMan_BuilderGameMode_NoRegister()
{
	return ABomberMan_BuilderGameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_BuilderGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_BuilderGameMode.h" },
		{ "ModuleRelativePath", "BomberMan_BuilderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_BuilderGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABomberMan_BuilderGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_BuilderGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_BuilderGameMode_Statics::ClassParams = {
	&ABomberMan_BuilderGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_BuilderGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_BuilderGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_BuilderGameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_BuilderGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_BuilderGameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_BuilderGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_BuilderGameMode.OuterSingleton;
}
template<> BOMBERMAN_BUILDER_API UClass* StaticClass<ABomberMan_BuilderGameMode>()
{
	return ABomberMan_BuilderGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_BuilderGameMode);
ABomberMan_BuilderGameMode::~ABomberMan_BuilderGameMode() {}
// End Class ABomberMan_BuilderGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_BomberMan_BuilderGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_BuilderGameMode, ABomberMan_BuilderGameMode::StaticClass, TEXT("ABomberMan_BuilderGameMode"), &Z_Registration_Info_UClass_ABomberMan_BuilderGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_BuilderGameMode), 503188090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_BomberMan_BuilderGameMode_h_1106174840(TEXT("/Script/BomberMan_Builder"),
	Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_BomberMan_BuilderGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_BomberMan_BuilderGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
