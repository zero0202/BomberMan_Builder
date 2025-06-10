// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_Builder/LaberintoConcreto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoConcreto() {}

// Begin Cross Module References
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_ABloqueAcero_NoRegister();
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_ABloqueMadera_NoRegister();
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_ALaberinto_NoRegister();
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_ALaberintoConcreto();
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_ALaberintoConcreto_NoRegister();
BOMBERMAN_BUILDER_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_Builder();
// End Cross Module References

// Begin Class ALaberintoConcreto
void ALaberintoConcreto::StaticRegisterNativesALaberintoConcreto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoConcreto);
UClass* Z_Construct_UClass_ALaberintoConcreto_NoRegister()
{
	return ALaberintoConcreto::StaticClass();
}
struct Z_Construct_UClass_ALaberintoConcreto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoConcreto.h" },
		{ "ModuleRelativePath", "LaberintoConcreto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueA_MetaData[] = {
		{ "Category", "LaberintoConcreto" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clases para instanciar objetos\n" },
#endif
		{ "ModuleRelativePath", "LaberintoConcreto.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clases para instanciar objetos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueM_MetaData[] = {
		{ "Category", "LaberintoConcreto" },
		{ "ModuleRelativePath", "LaberintoConcreto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Laberinto_MetaData[] = {
		{ "ModuleRelativePath", "LaberintoConcreto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BloqueA;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BloqueM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Laberinto;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoConcreto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberintoConcreto_Statics::NewProp_BloqueA = { "BloqueA", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoConcreto, BloqueA), Z_Construct_UClass_UClass, Z_Construct_UClass_ABloqueAcero_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueA_MetaData), NewProp_BloqueA_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberintoConcreto_Statics::NewProp_BloqueM = { "BloqueM", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoConcreto, BloqueM), Z_Construct_UClass_UClass, Z_Construct_UClass_ABloqueMadera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueM_MetaData), NewProp_BloqueM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberintoConcreto_Statics::NewProp_Laberinto = { "Laberinto", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoConcreto, Laberinto), Z_Construct_UClass_ALaberinto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Laberinto_MetaData), NewProp_Laberinto_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaberintoConcreto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoConcreto_Statics::NewProp_BloqueA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoConcreto_Statics::NewProp_BloqueM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoConcreto_Statics::NewProp_Laberinto,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALaberintoConcreto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoConcreto_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UILaberintoBuilder_NoRegister, (int32)VTABLE_OFFSET(ALaberintoConcreto, IILaberintoBuilder), false },  // 42071191
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoConcreto_Statics::ClassParams = {
	&ALaberintoConcreto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALaberintoConcreto_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoConcreto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoConcreto()
{
	if (!Z_Registration_Info_UClass_ALaberintoConcreto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoConcreto.OuterSingleton, Z_Construct_UClass_ALaberintoConcreto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoConcreto.OuterSingleton;
}
template<> BOMBERMAN_BUILDER_API UClass* StaticClass<ALaberintoConcreto>()
{
	return ALaberintoConcreto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoConcreto);
ALaberintoConcreto::~ALaberintoConcreto() {}
// End Class ALaberintoConcreto

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_LaberintoConcreto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoConcreto, ALaberintoConcreto::StaticClass, TEXT("ALaberintoConcreto"), &Z_Registration_Info_UClass_ALaberintoConcreto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoConcreto), 3653123997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_LaberintoConcreto_h_794732184(TEXT("/Script/BomberMan_Builder"),
	Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_LaberintoConcreto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_Builder_Source_BomberMan_Builder_LaberintoConcreto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
