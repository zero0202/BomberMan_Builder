// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Builder/IPlanosLaberinto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPlanosLaberinto() {}

// Begin Cross Module References
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_UIPlanosLaberinto();
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_UIPlanosLaberinto_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_Builder();
// End Cross Module References

// Begin Interface UIPlanosLaberinto
void UIPlanosLaberinto::StaticRegisterNativesUIPlanosLaberinto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIPlanosLaberinto);
UClass* Z_Construct_UClass_UIPlanosLaberinto_NoRegister()
{
	return UIPlanosLaberinto::StaticClass();
}
struct Z_Construct_UClass_UIPlanosLaberinto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IPlanosLaberinto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIPlanosLaberinto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIPlanosLaberinto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPlanosLaberinto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPlanosLaberinto_Statics::ClassParams = {
	&UIPlanosLaberinto::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPlanosLaberinto_Statics::Class_MetaDataParams), Z_Construct_UClass_UIPlanosLaberinto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIPlanosLaberinto()
{
	if (!Z_Registration_Info_UClass_UIPlanosLaberinto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPlanosLaberinto.OuterSingleton, Z_Construct_UClass_UIPlanosLaberinto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIPlanosLaberinto.OuterSingleton;
}
template<> BOMBERMAN_BUILDER_API UClass* StaticClass<UIPlanosLaberinto>()
{
	return UIPlanosLaberinto::StaticClass();
}
UIPlanosLaberinto::UIPlanosLaberinto(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIPlanosLaberinto);
UIPlanosLaberinto::~UIPlanosLaberinto() {}
// End Interface UIPlanosLaberinto

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_IPlanosLaberinto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIPlanosLaberinto, UIPlanosLaberinto::StaticClass, TEXT("UIPlanosLaberinto"), &Z_Registration_Info_UClass_UIPlanosLaberinto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPlanosLaberinto), 2267700769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_IPlanosLaberinto_h_149644300(TEXT("/Script/BomberMan_Builder"),
	Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_IPlanosLaberinto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_IPlanosLaberinto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
