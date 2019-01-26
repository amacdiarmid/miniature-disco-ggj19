// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Duino/Private/Serial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerial() {}
// Cross Module References
	UE4DUINO_API UEnum* Z_Construct_UEnum_UE4Duino_ELineEnd();
	UPackage* Z_Construct_UPackage__Script_UE4Duino();
	UE4DUINO_API UClass* Z_Construct_UClass_USerial_NoRegister();
	UE4DUINO_API UClass* Z_Construct_UClass_USerial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_BytesToFloat();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_BytesToInt();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Close();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_FloatToBytes();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Flush();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_GetBaud();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_GetPort();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_IntToBytes();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_IsOpened();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_LineEndToStr();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Open();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_OpenComPort();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Print();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Println();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_ReadByte();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_ReadBytes();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_ReadFloat();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_ReadInt();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Readln();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_ReadString();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_WriteByte();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_WriteBytes();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_WriteFloat();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_WriteInt();
// End Cross Module References
	static UEnum* ELineEnd_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE4Duino_ELineEnd, Z_Construct_UPackage__Script_UE4Duino(), TEXT("ELineEnd"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELineEnd(ELineEnd_StaticEnum, TEXT("/Script/UE4Duino"), TEXT("ELineEnd"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE4Duino_ELineEnd_CRC() { return 975330914U; }
	UEnum* Z_Construct_UEnum_UE4Duino_ELineEnd()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE4Duino();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELineEnd"), 0, Get_Z_Construct_UEnum_UE4Duino_ELineEnd_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELineEnd::rn", (int64)ELineEnd::rn },
				{ "ELineEnd::n", (int64)ELineEnd::n },
				{ "ELineEnd::r", (int64)ELineEnd::r },
				{ "ELineEnd::nr", (int64)ELineEnd::nr },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "UE4Duino" },
				{ "ModuleRelativePath", "Private/Serial.h" },
				{ "n.DisplayName", "\\n" },
				{ "nr.DisplayName", "\\n\\r" },
				{ "r.DisplayName", "\\r" },
				{ "rn.DisplayName", "\\r\\n" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE4Duino,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELineEnd",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELineEnd",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USerial::StaticRegisterNativesUSerial()
	{
		UClass* Class = USerial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BytesToFloat", &USerial::execBytesToFloat },
			{ "BytesToInt", &USerial::execBytesToInt },
			{ "Close", &USerial::execClose },
			{ "FloatToBytes", &USerial::execFloatToBytes },
			{ "Flush", &USerial::execFlush },
			{ "GetBaud", &USerial::execGetBaud },
			{ "GetPort", &USerial::execGetPort },
			{ "IntToBytes", &USerial::execIntToBytes },
			{ "IsOpened", &USerial::execIsOpened },
			{ "LineEndToStr", &USerial::execLineEndToStr },
			{ "Open", &USerial::execOpen },
			{ "OpenComPort", &USerial::execOpenComPort },
			{ "Print", &USerial::execPrint },
			{ "Println", &USerial::execPrintln },
			{ "ReadByte", &USerial::execReadByte },
			{ "ReadBytes", &USerial::execReadBytes },
			{ "ReadFloat", &USerial::execReadFloat },
			{ "ReadInt", &USerial::execReadInt },
			{ "Readln", &USerial::execReadln },
			{ "ReadString", &USerial::execReadString },
			{ "WriteByte", &USerial::execWriteByte },
			{ "WriteBytes", &USerial::execWriteBytes },
			{ "WriteFloat", &USerial::execWriteFloat },
			{ "WriteInt", &USerial::execWriteInt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USerial_BytesToFloat_Statics
	{
		struct Serial_eventBytesToFloat_Parms
		{
			TArray<uint8> Bytes;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USerial_BytesToFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventBytesToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerial_BytesToFloat_Statics::NewProp_Bytes = { UE4CodeGen_Private::EPropertyClass::Array, "Bytes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventBytesToFloat_Parms, Bytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerial_BytesToFloat_Statics::NewProp_Bytes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Bytes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_BytesToFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_BytesToFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_BytesToFloat_Statics::NewProp_Bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_BytesToFloat_Statics::NewProp_Bytes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_BytesToFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Bytes to Float" },
		{ "Keywords", "cast concatenate group bit bitwise" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Utility function to convert 4 bytes into a float. If the input array's length is not 4, returns 0.0.\n\n@param Bytes A byte array with 4 values representing the float in IEEE 754 standard format.\n@return The final float value or 0.0 for an invalid array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_BytesToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "BytesToFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(Serial_eventBytesToFloat_Parms), Z_Construct_UFunction_USerial_BytesToFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_BytesToFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_BytesToFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_BytesToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_BytesToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_BytesToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_BytesToInt_Statics
	{
		struct Serial_eventBytesToInt_Parms
		{
			TArray<uint8> Bytes;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_BytesToInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventBytesToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerial_BytesToInt_Statics::NewProp_Bytes = { UE4CodeGen_Private::EPropertyClass::Array, "Bytes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventBytesToInt_Parms, Bytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerial_BytesToInt_Statics::NewProp_Bytes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Bytes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_BytesToInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_BytesToInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_BytesToInt_Statics::NewProp_Bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_BytesToInt_Statics::NewProp_Bytes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_BytesToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Bytes to Int" },
		{ "Keywords", "cast concatenate group bit bitwise" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Utility function to convert 4 bytes into an Integer. If the input array's length is not 4, returns 0.\n\n@param Bytes A byte array with 4 values representing the integer in little-endian format.\n@return The final integer value or 0 for an invalid array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_BytesToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "BytesToInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(Serial_eventBytesToInt_Parms), Z_Construct_UFunction_USerial_BytesToInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_BytesToInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_BytesToInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_BytesToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_BytesToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_BytesToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Close Port" },
		{ "Keywords", "com end finish release" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Close and end the communication with the serial port. If not open, do nothing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "Close", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_Close_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_FloatToBytes_Statics
	{
		struct Serial_eventFloatToBytes_Parms
		{
			float Float;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerial_FloatToBytes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventFloatToBytes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerial_FloatToBytes_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_FloatToBytes_Statics::NewProp_Float_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USerial_FloatToBytes_Statics::NewProp_Float = { UE4CodeGen_Private::EPropertyClass::Float, "Float", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Serial_eventFloatToBytes_Parms, Float), METADATA_PARAMS(Z_Construct_UFunction_USerial_FloatToBytes_Statics::NewProp_Float_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerial_FloatToBytes_Statics::NewProp_Float_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_FloatToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_FloatToBytes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_FloatToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_FloatToBytes_Statics::NewProp_Float,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_FloatToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Float to Bytes" },
		{ "Keywords", "cast separate bit bitwise" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Utility function to get the 4 bytes that make a float.\n\n@param Float The float value to be converted.\n@return A byte array containing the 4 bytes that make the float, in IEEE 754 standard format." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_FloatToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "FloatToBytes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(Serial_eventFloatToBytes_Parms), Z_Construct_UFunction_USerial_FloatToBytes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_FloatToBytes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_FloatToBytes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_FloatToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_FloatToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_FloatToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_Flush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_Flush_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Flush Port" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Clean the serial port by reading everything left to be read." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_Flush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "Flush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_Flush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_Flush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_Flush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_Flush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_GetBaud_Statics
	{
		struct Serial_eventGetBaud_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_GetBaud_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventGetBaud_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_GetBaud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_GetBaud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_GetBaud_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Get Baud Rate" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Read the selected BaudRate for this Serial instance.\n@return The baud rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_GetBaud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "GetBaud", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Serial_eventGetBaud_Parms), Z_Construct_UFunction_USerial_GetBaud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_GetBaud_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_GetBaud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_GetBaud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_GetBaud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_GetBaud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_GetPort_Statics
	{
		struct Serial_eventGetPort_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_GetPort_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventGetPort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_GetPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_GetPort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_GetPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Get Port Number" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Read the number of the serial port selected for this Serial instance.\n@return The number of the serial port." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_GetPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "GetPort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Serial_eventGetPort_Parms), Z_Construct_UFunction_USerial_GetPort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_GetPort_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_GetPort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_GetPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_GetPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_GetPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_IntToBytes_Statics
	{
		struct Serial_eventIntToBytes_Parms
		{
			int32 Int;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerial_IntToBytes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventIntToBytes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerial_IntToBytes_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_IntToBytes_Statics::NewProp_Int_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_IntToBytes_Statics::NewProp_Int = { UE4CodeGen_Private::EPropertyClass::Int, "Int", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Serial_eventIntToBytes_Parms, Int), METADATA_PARAMS(Z_Construct_UFunction_USerial_IntToBytes_Statics::NewProp_Int_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerial_IntToBytes_Statics::NewProp_Int_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_IntToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_IntToBytes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_IntToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_IntToBytes_Statics::NewProp_Int,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_IntToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Int to Bytes" },
		{ "Keywords", "cast separate bit bitwise" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Utility function to get the 4 bytes that make an integer.\n\n@param Int The integer value to be converted.\n@return A byte array containing the 4 bytes that make the integer, starting from the least significant one (little endian)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_IntToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "IntToBytes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(Serial_eventIntToBytes_Parms), Z_Construct_UFunction_USerial_IntToBytes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_IntToBytes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_IntToBytes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_IntToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_IntToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_IntToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_IsOpened_Statics
	{
		struct Serial_eventIsOpened_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USerial_IsOpened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Serial_eventIsOpened_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_IsOpened_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventIsOpened_Parms), &Z_Construct_UFunction_USerial_IsOpened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_IsOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_IsOpened_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_IsOpened_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Is Port Open" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Check if the serial port is open.\n@return True if the serial port is open." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_IsOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "IsOpened", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Serial_eventIsOpened_Parms), Z_Construct_UFunction_USerial_IsOpened_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_IsOpened_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_IsOpened_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_IsOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_IsOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_IsOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_LineEndToStr_Statics
	{
		struct Serial_eventLineEndToStr_Parms
		{
			ELineEnd LineEnd;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LineEnd;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LineEnd_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerial_LineEndToStr_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventLineEndToStr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USerial_LineEndToStr_Statics::NewProp_LineEnd = { UE4CodeGen_Private::EPropertyClass::Enum, "LineEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventLineEndToStr_Parms, LineEnd), Z_Construct_UEnum_UE4Duino_ELineEnd, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerial_LineEndToStr_Statics::NewProp_LineEnd_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_LineEndToStr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_LineEndToStr_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_LineEndToStr_Statics::NewProp_LineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_LineEndToStr_Statics::NewProp_LineEnd_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_LineEndToStr_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Line End to String" },
		{ "keywords", "cast convert" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Converts a LineEnd enum value to String.\n@param LineEnd LineEnd enum value.\n@return The LineEnd value in string format." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_LineEndToStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "LineEndToStr", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Serial_eventLineEndToStr_Parms), Z_Construct_UFunction_USerial_LineEndToStr_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_LineEndToStr_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_LineEndToStr_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_LineEndToStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_LineEndToStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_LineEndToStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_Open_Statics
	{
		struct Serial_eventOpen_Parms
		{
			int32 Port;
			int32 BaudRate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaudRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USerial_Open_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Serial_eventOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_Open_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventOpen_Parms), &Z_Construct_UFunction_USerial_Open_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_Open_Statics::NewProp_BaudRate = { UE4CodeGen_Private::EPropertyClass::Int, "BaudRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventOpen_Parms, BaudRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_Open_Statics::NewProp_Port = { UE4CodeGen_Private::EPropertyClass::Int, "Port", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventOpen_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_Open_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_Open_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_Open_Statics::NewProp_BaudRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_Open_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "CPP_Default_BaudRate", "9600" },
		{ "CPP_Default_Port", "2" },
		{ "DisplayName", "Open Port" },
		{ "Keywords", "com start init" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Open a serial port. Don't forget to close the port before exiting the game.\nIf this Serial instance has already an opened port,\nreturn false and doesn't change the opened port number.\n\n@param Port The serial port to open.\n@param BaudRate BaudRate to open the serial port with.\n@return If the serial port was successfully opened." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "Open", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Serial_eventOpen_Parms), Z_Construct_UFunction_USerial_Open_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_Open_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_Open_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_OpenComPort_Statics
	{
		struct Serial_eventOpenComPort_Parms
		{
			bool bOpened;
			int32 Port;
			int32 BaudRate;
			USerial* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaudRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static void NewProp_bOpened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpened;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventOpenComPort_Parms, ReturnValue), Z_Construct_UClass_USerial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_BaudRate = { UE4CodeGen_Private::EPropertyClass::Int, "BaudRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventOpenComPort_Parms, BaudRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_Port = { UE4CodeGen_Private::EPropertyClass::Int, "Port", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventOpenComPort_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_bOpened_SetBit(void* Obj)
	{
		((Serial_eventOpenComPort_Parms*)Obj)->bOpened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_bOpened = { UE4CodeGen_Private::EPropertyClass::Bool, "bOpened", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventOpenComPort_Parms), &Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_bOpened_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_OpenComPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_BaudRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_bOpened,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_OpenComPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "CPP_Default_BaudRate", "9600" },
		{ "CPP_Default_Port", "1" },
		{ "DisplayName", "Open Serial Port" },
		{ "Keywords", "com arduino serial start" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Open a serial port and return the created Serial instance.\nDon't forget to close the port before exiting the game.\n\n@param bOpened If the serial port was successfully opened.\n@param Port The serial port to open.\n@param BaudRate BaudRate to open the serial port with.\n@return A Serial instance to work with the opened port." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_OpenComPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "OpenComPort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(Serial_eventOpenComPort_Parms), Z_Construct_UFunction_USerial_OpenComPort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_OpenComPort_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_OpenComPort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_OpenComPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_OpenComPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_OpenComPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_Print_Statics
	{
		struct Serial_eventPrint_Parms
		{
			FString String;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USerial_Print_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Serial_eventPrint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_Print_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventPrint_Parms), &Z_Construct_UFunction_USerial_Print_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerial_Print_Statics::NewProp_String = { UE4CodeGen_Private::EPropertyClass::Str, "String", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventPrint_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_Print_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_Print_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_Print_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_Print_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Print" },
		{ "keywords", "send write string words text characters" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Writes a string without newline to the serial port.\n@param String The string to be sent to the serial port.\n@return True if the string was sent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_Print_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "Print", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Serial_eventPrint_Parms), Z_Construct_UFunction_USerial_Print_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_Print_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_Print_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_Print_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_Print()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_Print_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_Println_Statics
	{
		struct Serial_eventPrintln_Parms
		{
			FString String;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USerial_Println_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Serial_eventPrintln_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_Println_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventPrintln_Parms), &Z_Construct_UFunction_USerial_Println_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerial_Println_Statics::NewProp_String = { UE4CodeGen_Private::EPropertyClass::Str, "String", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventPrintln_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_Println_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_Println_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_Println_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_Println_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Print Line" },
		{ "keywords", "send write string words text characters" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Writes a string with newline (\\n) appended at the end to the serial port.\n@param String The string to be sent to the serial port.\n@return True if the string was sent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_Println_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "Println", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Serial_eventPrintln_Parms), Z_Construct_UFunction_USerial_Println_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_Println_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_Println_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_Println_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_Println()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_Println_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_ReadByte_Statics
	{
		struct Serial_eventReadByte_Parms
		{
			bool bSuccess;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerial_ReadByte_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventReadByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USerial_ReadByte_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((Serial_eventReadByte_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_ReadByte_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventReadByte_Parms), &Z_Construct_UFunction_USerial_ReadByte_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_ReadByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadByte_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadByte_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_ReadByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Read a Byte" },
		{ "keywords", "get read receive" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Reads a byte from the serial port.\n@param bSuccess True if there were 4 bytes to read.\n@return The read value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_ReadByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "ReadByte", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Serial_eventReadByte_Parms), Z_Construct_UFunction_USerial_ReadByte_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_ReadByte_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_ReadByte_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_ReadByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_ReadByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_ReadByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_ReadBytes_Statics
	{
		struct Serial_eventReadBytes_Parms
		{
			int32 Limit;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerial_ReadBytes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventReadBytes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerial_ReadBytes_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_ReadBytes_Statics::NewProp_Limit = { UE4CodeGen_Private::EPropertyClass::Int, "Limit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventReadBytes_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_ReadBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadBytes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadBytes_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_ReadBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "CPP_Default_Limit", "256" },
		{ "DisplayName", "Read Bytes" },
		{ "keywords", "get read receive" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Reads up to Limit bytes from the serial port. If there are less than Limit,\nreads all of them and return True.\n@param bSuccess True if there was at least 1 byte to read.\n@return An array containing the read bytes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_ReadBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "ReadBytes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Serial_eventReadBytes_Parms), Z_Construct_UFunction_USerial_ReadBytes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_ReadBytes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_ReadBytes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_ReadBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_ReadBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_ReadBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_ReadFloat_Statics
	{
		struct Serial_eventReadFloat_Parms
		{
			bool bSuccess;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USerial_ReadFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventReadFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USerial_ReadFloat_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((Serial_eventReadFloat_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_ReadFloat_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventReadFloat_Parms), &Z_Construct_UFunction_USerial_ReadFloat_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_ReadFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadFloat_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_ReadFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Read a Float" },
		{ "keywords", "get read receive" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Reads a float from the serial port (sent as 4 bytes).\n@param bSuccess True if there were 4 bytes to read.\n@return The read value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_ReadFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "ReadFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Serial_eventReadFloat_Parms), Z_Construct_UFunction_USerial_ReadFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_ReadFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_ReadFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_ReadFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_ReadFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_ReadFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_ReadInt_Statics
	{
		struct Serial_eventReadInt_Parms
		{
			bool bSuccess;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_ReadInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventReadInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USerial_ReadInt_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((Serial_eventReadInt_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_ReadInt_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventReadInt_Parms), &Z_Construct_UFunction_USerial_ReadInt_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_ReadInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadInt_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_ReadInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Read an Int" },
		{ "keywords", "get read receive integer" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Reads an integer from the serial port (sent as 4 bytes).\n@param bSuccess True if there were 4 bytes to read.\n@return The read value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_ReadInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "ReadInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Serial_eventReadInt_Parms), Z_Construct_UFunction_USerial_ReadInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_ReadInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_ReadInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_ReadInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_ReadInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_ReadInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_Readln_Statics
	{
		struct Serial_eventReadln_Parms
		{
			bool bSuccess;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerial_Readln_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventReadln_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USerial_Readln_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((Serial_eventReadln_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_Readln_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventReadln_Parms), &Z_Construct_UFunction_USerial_Readln_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_Readln_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_Readln_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_Readln_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_Readln_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Read Line" },
		{ "keywords", "get read receive string words text characters" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Will read characters from Serial port until \\r\\n (Arduino println line end) is found.\n\n@param bSuccess If there was anything to read.\n@return The read string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_Readln_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "Readln", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Serial_eventReadln_Parms), Z_Construct_UFunction_USerial_Readln_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_Readln_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_Readln_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_Readln_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_Readln()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_Readln_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_ReadString_Statics
	{
		struct Serial_eventReadString_Parms
		{
			bool bSuccess;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerial_ReadString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventReadString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USerial_ReadString_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((Serial_eventReadString_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_ReadString_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventReadString_Parms), &Z_Construct_UFunction_USerial_ReadString_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_ReadString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_ReadString_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_ReadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Read String" },
		{ "keywords", "get read receive string words text characters" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Will read characters from Serial port until \\0 (null char) is found or there are no\ncharacters left to read.\n\n@param bSuccess If there was anything to read.\n@return The read string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_ReadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "ReadString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Serial_eventReadString_Parms), Z_Construct_UFunction_USerial_ReadString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_ReadString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_ReadString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_ReadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_ReadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_ReadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_WriteByte_Statics
	{
		struct Serial_eventWriteByte_Parms
		{
			uint8 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USerial_WriteByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Serial_eventWriteByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_WriteByte_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventWriteByte_Parms), &Z_Construct_UFunction_USerial_WriteByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerial_WriteByte_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventWriteByte_Parms, Value), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_WriteByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_WriteByte_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_WriteByte_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_WriteByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Write a Byte" },
		{ "keywords", "send" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Writes a byte value to the serial port.\n@param Value The value to be sent to the serial port.\n@return True if the byte was sent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_WriteByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "WriteByte", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Serial_eventWriteByte_Parms), Z_Construct_UFunction_USerial_WriteByte_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_WriteByte_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_WriteByte_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_WriteByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_WriteByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_WriteByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_WriteBytes_Statics
	{
		struct Serial_eventWriteBytes_Parms
		{
			TArray<uint8> Buffer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USerial_WriteBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Serial_eventWriteBytes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_WriteBytes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventWriteBytes_Parms), &Z_Construct_UFunction_USerial_WriteBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerial_WriteBytes_Statics::NewProp_Buffer = { UE4CodeGen_Private::EPropertyClass::Array, "Buffer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventWriteBytes_Parms, Buffer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USerial_WriteBytes_Statics::NewProp_Buffer_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Buffer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_WriteBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_WriteBytes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_WriteBytes_Statics::NewProp_Buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_WriteBytes_Statics::NewProp_Buffer_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_WriteBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Write Bytes" },
		{ "keywords", "send" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Writes a byte array as a sequence of bytes to the serial port.\n@param Buffer The byte array to be sent to the serial port.\n@return True if the bytes were sent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_WriteBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "WriteBytes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Serial_eventWriteBytes_Parms), Z_Construct_UFunction_USerial_WriteBytes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_WriteBytes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_WriteBytes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_WriteBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_WriteBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_WriteBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_WriteFloat_Statics
	{
		struct Serial_eventWriteFloat_Parms
		{
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USerial_WriteFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Serial_eventWriteFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_WriteFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventWriteFloat_Parms), &Z_Construct_UFunction_USerial_WriteFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USerial_WriteFloat_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventWriteFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_WriteFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_WriteFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_WriteFloat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_WriteFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Write a Float" },
		{ "keywords", "send" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Writes a float value to the serial port as 4 bytes.\n@param Value The value to be sent to the serial port.\n@return True if the bytes were sent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_WriteFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "WriteFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Serial_eventWriteFloat_Parms), Z_Construct_UFunction_USerial_WriteFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_WriteFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_WriteFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_WriteFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_WriteFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_WriteFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_WriteInt_Statics
	{
		struct Serial_eventWriteInt_Parms
		{
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USerial_WriteInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Serial_eventWriteInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_WriteInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventWriteInt_Parms), &Z_Construct_UFunction_USerial_WriteInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USerial_WriteInt_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventWriteInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_WriteInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_WriteInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_WriteInt_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_WriteInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE4Duino" },
		{ "DisplayName", "Write an Int" },
		{ "keywords", "integer send" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Writes an integer value to the serial port as 4 bytes.\n@param Value The value to be sent to the serial port.\n@return True if the bytes were sent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_WriteInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "WriteInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Serial_eventWriteInt_Parms), Z_Construct_UFunction_USerial_WriteInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_WriteInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_WriteInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_WriteInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_WriteInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_WriteInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USerial_NoRegister()
	{
		return USerial::StaticClass();
	}
	struct Z_Construct_UClass_USerial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WriteLineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WriteLineEnd;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WriteLineEnd_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USerial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Duino,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USerial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USerial_BytesToFloat, "BytesToFloat" }, // 583425048
		{ &Z_Construct_UFunction_USerial_BytesToInt, "BytesToInt" }, // 3260298593
		{ &Z_Construct_UFunction_USerial_Close, "Close" }, // 3772422500
		{ &Z_Construct_UFunction_USerial_FloatToBytes, "FloatToBytes" }, // 2495894020
		{ &Z_Construct_UFunction_USerial_Flush, "Flush" }, // 136654202
		{ &Z_Construct_UFunction_USerial_GetBaud, "GetBaud" }, // 89690114
		{ &Z_Construct_UFunction_USerial_GetPort, "GetPort" }, // 1890726136
		{ &Z_Construct_UFunction_USerial_IntToBytes, "IntToBytes" }, // 2300453075
		{ &Z_Construct_UFunction_USerial_IsOpened, "IsOpened" }, // 39963793
		{ &Z_Construct_UFunction_USerial_LineEndToStr, "LineEndToStr" }, // 1892331010
		{ &Z_Construct_UFunction_USerial_Open, "Open" }, // 1652185391
		{ &Z_Construct_UFunction_USerial_OpenComPort, "OpenComPort" }, // 1693899592
		{ &Z_Construct_UFunction_USerial_Print, "Print" }, // 1537187569
		{ &Z_Construct_UFunction_USerial_Println, "Println" }, // 3158911783
		{ &Z_Construct_UFunction_USerial_ReadByte, "ReadByte" }, // 3559756807
		{ &Z_Construct_UFunction_USerial_ReadBytes, "ReadBytes" }, // 1326547004
		{ &Z_Construct_UFunction_USerial_ReadFloat, "ReadFloat" }, // 178573001
		{ &Z_Construct_UFunction_USerial_ReadInt, "ReadInt" }, // 658308896
		{ &Z_Construct_UFunction_USerial_Readln, "Readln" }, // 1834625830
		{ &Z_Construct_UFunction_USerial_ReadString, "ReadString" }, // 2333222882
		{ &Z_Construct_UFunction_USerial_WriteByte, "WriteByte" }, // 2651089599
		{ &Z_Construct_UFunction_USerial_WriteBytes, "WriteBytes" }, // 404579368
		{ &Z_Construct_UFunction_USerial_WriteFloat, "WriteFloat" }, // 2736644523
		{ &Z_Construct_UFunction_USerial_WriteInt, "WriteInt" }, // 2247680076
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UE4Duino" },
		{ "IncludePath", "Serial.h" },
		{ "Keywords", "com arduino serial" },
		{ "ModuleRelativePath", "Private/Serial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd_MetaData[] = {
		{ "Category", "UE4Duino | String" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Determines the line ending used when writing lines to serial port with PrintLine." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd = { UE4CodeGen_Private::EPropertyClass::Enum, "WriteLineEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(USerial, WriteLineEnd), Z_Construct_UEnum_UE4Duino_ELineEnd, METADATA_PARAMS(Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USerial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USerial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USerial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USerial_Statics::ClassParams = {
		&USerial::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USerial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USerial_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USerial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USerial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USerial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USerial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USerial, 2778617178);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USerial(Z_Construct_UClass_USerial, &USerial::StaticClass, TEXT("/Script/UE4Duino"), TEXT("USerial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USerial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
