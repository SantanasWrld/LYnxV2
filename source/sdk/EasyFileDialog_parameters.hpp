﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EasyFileDialog

#include "Basic.hpp"

#include "EasyFileDialog_structs.hpp"


namespace SDK::Params
{

// Function EasyFileDialog.EasyFileDialogBPLibrary.EasyFileDialogSampleFunction
// 0x0008 (0x0008 - 0x0000)
struct EasyFileDialogBPLibrary_EasyFileDialogSampleFunction final
{
public:
	float                                         Param;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EasyFileDialogBPLibrary_EasyFileDialogSampleFunction) == 0x000004, "Wrong alignment on EasyFileDialogBPLibrary_EasyFileDialogSampleFunction");
static_assert(sizeof(EasyFileDialogBPLibrary_EasyFileDialogSampleFunction) == 0x000008, "Wrong size on EasyFileDialogBPLibrary_EasyFileDialogSampleFunction");
static_assert(offsetof(EasyFileDialogBPLibrary_EasyFileDialogSampleFunction, Param) == 0x000000, "Member 'EasyFileDialogBPLibrary_EasyFileDialogSampleFunction::Param' has a wrong offset!");
static_assert(offsetof(EasyFileDialogBPLibrary_EasyFileDialogSampleFunction, ReturnValue) == 0x000004, "Member 'EasyFileDialogBPLibrary_EasyFileDialogSampleFunction::ReturnValue' has a wrong offset!");

// Function EasyFileDialog.EFDFunctionLibrary.OpenFileDialog
// 0x0060 (0x0060 - 0x0000)
struct EFDFunctionLibrary_OpenFileDialog final
{
public:
	class FString                                 DialogTitle;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultPath;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultFile;                                       // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FileTypes;                                         // 0x0030(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEasyFileDialogFlags                          Flags_0;                                           // 0x0040(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         OutFilenames;                                      // 0x0048(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0058(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(EFDFunctionLibrary_OpenFileDialog) == 0x000008, "Wrong alignment on EFDFunctionLibrary_OpenFileDialog");
static_assert(sizeof(EFDFunctionLibrary_OpenFileDialog) == 0x000060, "Wrong size on EFDFunctionLibrary_OpenFileDialog");
static_assert(offsetof(EFDFunctionLibrary_OpenFileDialog, DialogTitle) == 0x000000, "Member 'EFDFunctionLibrary_OpenFileDialog::DialogTitle' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_OpenFileDialog, DefaultPath) == 0x000010, "Member 'EFDFunctionLibrary_OpenFileDialog::DefaultPath' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_OpenFileDialog, DefaultFile) == 0x000020, "Member 'EFDFunctionLibrary_OpenFileDialog::DefaultFile' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_OpenFileDialog, FileTypes) == 0x000030, "Member 'EFDFunctionLibrary_OpenFileDialog::FileTypes' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_OpenFileDialog, Flags_0) == 0x000040, "Member 'EFDFunctionLibrary_OpenFileDialog::Flags_0' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_OpenFileDialog, OutFilenames) == 0x000048, "Member 'EFDFunctionLibrary_OpenFileDialog::OutFilenames' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_OpenFileDialog, ReturnValue) == 0x000058, "Member 'EFDFunctionLibrary_OpenFileDialog::ReturnValue' has a wrong offset!");

// Function EasyFileDialog.EFDFunctionLibrary.OpenFolderDialog
// 0x0038 (0x0038 - 0x0000)
struct EFDFunctionLibrary_OpenFolderDialog final
{
public:
	class FString                                 DialogTitle;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultPath;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OutFolderName;                                     // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(EFDFunctionLibrary_OpenFolderDialog) == 0x000008, "Wrong alignment on EFDFunctionLibrary_OpenFolderDialog");
static_assert(sizeof(EFDFunctionLibrary_OpenFolderDialog) == 0x000038, "Wrong size on EFDFunctionLibrary_OpenFolderDialog");
static_assert(offsetof(EFDFunctionLibrary_OpenFolderDialog, DialogTitle) == 0x000000, "Member 'EFDFunctionLibrary_OpenFolderDialog::DialogTitle' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_OpenFolderDialog, DefaultPath) == 0x000010, "Member 'EFDFunctionLibrary_OpenFolderDialog::DefaultPath' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_OpenFolderDialog, OutFolderName) == 0x000020, "Member 'EFDFunctionLibrary_OpenFolderDialog::OutFolderName' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_OpenFolderDialog, ReturnValue) == 0x000030, "Member 'EFDFunctionLibrary_OpenFolderDialog::ReturnValue' has a wrong offset!");

// Function EasyFileDialog.EFDFunctionLibrary.SaveFileDialog
// 0x0070 (0x0070 - 0x0000)
struct EFDFunctionLibrary_SaveFileDialog final
{
public:
	class FString                                 DialogTitle;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultPath;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultFile;                                       // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FileTypeDescription;                               // 0x0030(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FileType;                                          // 0x0040(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEasyFileDialogFlags                          Flags_0;                                           // 0x0050(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         OutFilenames;                                      // 0x0058(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0068(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(EFDFunctionLibrary_SaveFileDialog) == 0x000008, "Wrong alignment on EFDFunctionLibrary_SaveFileDialog");
static_assert(sizeof(EFDFunctionLibrary_SaveFileDialog) == 0x000070, "Wrong size on EFDFunctionLibrary_SaveFileDialog");
static_assert(offsetof(EFDFunctionLibrary_SaveFileDialog, DialogTitle) == 0x000000, "Member 'EFDFunctionLibrary_SaveFileDialog::DialogTitle' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_SaveFileDialog, DefaultPath) == 0x000010, "Member 'EFDFunctionLibrary_SaveFileDialog::DefaultPath' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_SaveFileDialog, DefaultFile) == 0x000020, "Member 'EFDFunctionLibrary_SaveFileDialog::DefaultFile' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_SaveFileDialog, FileTypeDescription) == 0x000030, "Member 'EFDFunctionLibrary_SaveFileDialog::FileTypeDescription' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_SaveFileDialog, FileType) == 0x000040, "Member 'EFDFunctionLibrary_SaveFileDialog::FileType' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_SaveFileDialog, Flags_0) == 0x000050, "Member 'EFDFunctionLibrary_SaveFileDialog::Flags_0' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_SaveFileDialog, OutFilenames) == 0x000058, "Member 'EFDFunctionLibrary_SaveFileDialog::OutFilenames' has a wrong offset!");
static_assert(offsetof(EFDFunctionLibrary_SaveFileDialog, ReturnValue) == 0x000068, "Member 'EFDFunctionLibrary_SaveFileDialog::ReturnValue' has a wrong offset!");

}

