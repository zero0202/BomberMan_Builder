// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ILaberintoBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_BUILDER_ILaberintoBuilder_generated_h
#error "ILaberintoBuilder.generated.h already included, missing '#pragma once' in ILaberintoBuilder.h"
#endif
#define BOMBERMAN_BUILDER_ILaberintoBuilder_generated_h

#define FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_BUILDER_API UILaberintoBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UILaberintoBuilder(UILaberintoBuilder&&); \
	UILaberintoBuilder(const UILaberintoBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_BUILDER_API, UILaberintoBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UILaberintoBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UILaberintoBuilder) \
	BOMBERMAN_BUILDER_API virtual ~UILaberintoBuilder();


#define FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUILaberintoBuilder(); \
	friend struct Z_Construct_UClass_UILaberintoBuilder_Statics; \
public: \
	DECLARE_CLASS(UILaberintoBuilder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BomberMan_Builder"), BOMBERMAN_BUILDER_API) \
	DECLARE_SERIALIZER(UILaberintoBuilder)


#define FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_13_GENERATED_UINTERFACE_BODY() \
	FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IILaberintoBuilder() {} \
public: \
	typedef UILaberintoBuilder UClassType; \
	typedef IILaberintoBuilder ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_10_PROLOG
#define FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_BUILDER_API UClass* StaticClass<class UILaberintoBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan_Builder_Source_BomberMan_Builder_ILaberintoBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
