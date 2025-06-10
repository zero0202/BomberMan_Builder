// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Builder/ILaberintoBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILaberintoBuilder() {}

// Begin Cross Module References
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_UILaberintoBuilder();
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_Builder();
// End Cross Module References

// Begin Interface UILaberintoBuilder
void UILaberintoBuilder::StaticRegisterNativesUILaberintoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UILaberintoBuilder);
UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister()
{
	return UILaberintoBuilder::StaticClass();
}
struct Z_Construct_UClass_UILaberintoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ILaberintoBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IILaberintoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UILaberintoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UILaberintoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UILaberintoBuilder_Statics::ClassParams = {
	&UILaberintoBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UILaberintoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UILaberintoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UILaberintoBuilder()
{
	if (!Z_Registration_Info_UClass_UILaberintoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UILaberintoBuilder.OuterSingleton, Z_Construct_UClass_UILaberintoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UILaberintoBuilder.OuterSingleton;
}
template<> BOMBERMAN_BUILDER_API UClass* StaticClass<UILaberintoBuilder>()
{
	return UILaberintoBuilder::StaticClass();
}
UILaberintoBuilder::UILaberintoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UILaberintoBuilder);
UILaberintoBuilder::~UILaberintoBuilder() {}
// End Interface UILaberintoBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UILaberintoBuilder, UILaberintoBuilder::StaticClass, TEXT("UILaberintoBuilder"), &Z_Registration_Info_UClass_UILaberintoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UILaberintoBuilder), 42071191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_872331264(TEXT("/Script/BomberMan_Builder"),
	Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
