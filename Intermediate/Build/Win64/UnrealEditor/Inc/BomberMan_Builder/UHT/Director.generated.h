// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Director.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_BUILDER_Director_generated_h
#error "Director.generated.h already included, missing '#pragma once' in Director.h"
#endif
#define BOMBERMAN_BUILDER_Director_generated_h

#define FID_BomberMan_Builder_Source_BomberMan_Builder_Director_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADirector(); \
	friend struct Z_Construct_UClass_ADirector_Statics; \
public: \
	DECLARE_CLASS(ADirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_Builder"), NO_API) \
	DECLARE_SERIALIZER(ADirector)


#define FID_BomberMan_Builder_Source_BomberMan_Builder_Director_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADirector(ADirector&&); \
	ADirector(const ADirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADirector) \
	NO_API virtual ~ADirector();


#define FID_BomberMan_Builder_Source_BomberMan_Builder_Director_h_11_PROLOG
#define FID_BomberMan_Builder_Source_BomberMan_Builder_Director_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan_Builder_Source_BomberMan_Builder_Director_h_14_INCLASS_NO_PURE_DECLS \
	FID_BomberMan_Builder_Source_BomberMan_Builder_Director_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_BUILDER_API UClass* StaticClass<class ADirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan_Builder_Source_BomberMan_Builder_Director_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
