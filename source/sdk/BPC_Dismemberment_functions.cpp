﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_Dismemberment

#include "Basic.hpp"

#include "BPC_Dismemberment_classes.hpp"
#include "BPC_Dismemberment_parameters.hpp"


namespace SDK
{

// Function BPC_Dismemberment.BPC_Dismemberment_C.GetBloodDecalIgnoredActors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*                  IgnoredActors                                          (Parm, OutParm)

void UBPC_Dismemberment_C::GetBloodDecalIgnoredActors(TArray<class AActor*>* IgnoredActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "GetBloodDecalIgnoredActors");

	Params::BPC_Dismemberment_C_GetBloodDecalIgnoredActors Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IgnoredActors != nullptr)
		*IgnoredActors = std::move(Parms.IgnoredActors);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.DismemberBone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   InitialImpulseDirection                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Limb_C**                      Limb                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::DismemberBone(class FName bone, const struct FVector& InitialImpulseDirection, class ABP_Limb_C** Limb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "DismemberBone");

	Params::BPC_Dismemberment_C_DismemberBone Parms{};

	Parms.bone = bone;
	Parms.InitialImpulseDirection = std::move(InitialImpulseDirection);

	UObject::ProcessEvent(Func, &Parms);

	if (Limb != nullptr)
		*Limb = Parms.Limb;
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.GetDismemberBone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName*                            BoneName                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::GetDismemberBone(class FName bone, class FName* BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "GetDismemberBone");

	Params::BPC_Dismemberment_C_GetDismemberBone Parms{};

	Parms.bone = bone;

	UObject::ProcessEvent(Func, &Parms);

	if (BoneName != nullptr)
		*BoneName = Parms.BoneName;
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.Get Skeletal Mesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent**          SkeletalMesh_0                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::Get_Skeletal_Mesh(class USkeletalMeshComponent** SkeletalMesh_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "Get Skeletal Mesh");

	Params::BPC_Dismemberment_C_Get_Skeletal_Mesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SkeletalMesh_0 != nullptr)
		*SkeletalMesh_0 = Parms.SkeletalMesh_0;
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.AddBloodEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Limb_C*                       Limb                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::AddBloodEffects(class ABP_Limb_C* Limb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "AddBloodEffects");

	Params::BPC_Dismemberment_C_AddBloodEffects Parms{};

	Parms.Limb = Limb;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.BuildMesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>&  SkeletalMeshes                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class USkeletalMesh**                   SkeletalMesh_0                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::BuildMesh(TArray<class USkeletalMeshComponent*>& SkeletalMeshes, class USkeletalMesh** SkeletalMesh_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "BuildMesh");

	Params::BPC_Dismemberment_C_BuildMesh Parms{};

	Parms.SkeletalMeshes = std::move(SkeletalMeshes);

	UObject::ProcessEvent(Func, &Parms);

	SkeletalMeshes = std::move(Parms.SkeletalMeshes);

	if (SkeletalMesh_0 != nullptr)
		*SkeletalMesh_0 = Parms.SkeletalMesh_0;
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.SetPoseableComponentBoneScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPoseableMeshComponent*           PoseMeshComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::SetPoseableComponentBoneScale(class UPoseableMeshComponent* PoseMeshComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "SetPoseableComponentBoneScale");

	Params::BPC_Dismemberment_C_SetPoseableComponentBoneScale Parms{};

	Parms.PoseMeshComponent = PoseMeshComponent;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.SetPoseableComponentPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPoseableMeshComponent*           PoseMeshComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::SetPoseableComponentPose(class UPoseableMeshComponent* PoseMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "SetPoseableComponentPose");

	Params::BPC_Dismemberment_C_SetPoseableComponentPose Parms{};

	Parms.PoseMeshComponent = PoseMeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.SetPoseableTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPoseableMeshComponent*           PoseableMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::SetPoseableTransform(class UPoseableMeshComponent* PoseableMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "SetPoseableTransform");

	Params::BPC_Dismemberment_C_SetPoseableTransform Parms{};

	Parms.PoseableMesh = PoseableMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.SetDynamicMeshImpulse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDynamicMeshComponent*            DynamicMeshComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   ImpulseDirection                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::SetDynamicMeshImpulse(class UDynamicMeshComponent* DynamicMeshComponent, const struct FVector& ImpulseDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "SetDynamicMeshImpulse");

	Params::BPC_Dismemberment_C_SetDynamicMeshImpulse Parms{};

	Parms.DynamicMeshComponent = DynamicMeshComponent;
	Parms.ImpulseDirection = std::move(ImpulseDirection);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.SetDynamicMeshCollisions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDynamicMesh*                     DynamicMeshObject                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDynamicMeshComponent*            DynamicMeshComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::SetDynamicMeshCollisions(class UDynamicMesh* DynamicMeshObject, class UDynamicMeshComponent* DynamicMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "SetDynamicMeshCollisions");

	Params::BPC_Dismemberment_C_SetDynamicMeshCollisions Parms{};

	Parms.DynamicMeshObject = DynamicMeshObject;
	Parms.DynamicMeshComponent = DynamicMeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.Set Dynamic Mesh Materials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDynamicMeshComponent*            DynamicMesh                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::Set_Dynamic_Mesh_Materials(class UDynamicMeshComponent* DynamicMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "Set Dynamic Mesh Materials");

	Params::BPC_Dismemberment_C_Set_Dynamic_Mesh_Materials Parms{};

	Parms.DynamicMesh = DynamicMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.Setup Dynamic Mesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDynamicMeshComponent*            DynamicMesh                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::Setup_Dynamic_Mesh(class UDynamicMeshComponent* DynamicMesh, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "Setup Dynamic Mesh");

	Params::BPC_Dismemberment_C_Setup_Dynamic_Mesh Parms{};

	Parms.DynamicMesh = DynamicMesh;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.GetDynamicMeshLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBPC_Dismemberment_C::GetDynamicMeshLocation(class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "GetDynamicMeshLocation");

	Params::BPC_Dismemberment_C_GetDynamicMeshLocation Parms{};

	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.CreateLimb
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             HitBoneName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   InitialImpulseDirection                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Limb_C**                      Limb                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::CreateLimb(class FName HitBoneName, const struct FVector& InitialImpulseDirection, class ABP_Limb_C** Limb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "CreateLimb");

	Params::BPC_Dismemberment_C_CreateLimb Parms{};

	Parms.HitBoneName = HitBoneName;
	Parms.InitialImpulseDirection = std::move(InitialImpulseDirection);

	UObject::ProcessEvent(Func, &Parms);

	if (Limb != nullptr)
		*Limb = Parms.Limb;
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.SetupLimbMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Limb_C*                       Limb                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::SetupLimbMesh(class ABP_Limb_C* Limb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "SetupLimbMesh");

	Params::BPC_Dismemberment_C_SetupLimbMesh Parms{};

	Parms.Limb = Limb;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.SetupLimb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Limb_C*                       Limb                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::SetupLimb(class ABP_Limb_C* Limb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "SetupLimb");

	Params::BPC_Dismemberment_C_SetupLimb Parms{};

	Parms.Limb = Limb;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.RegisterLimb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Limb_C*                       LimbActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::RegisterLimb(class ABP_Limb_C* LimbActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "RegisterLimb");

	Params::BPC_Dismemberment_C_RegisterLimb Parms{};

	Parms.LimbActor = LimbActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "ReceiveTick");

	Params::BPC_Dismemberment_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkeletalMesh_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::Init(class USkeletalMeshComponent* SkeletalMesh_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "Init");

	Params::BPC_Dismemberment_C_Init Parms{};

	Parms.SkeletalMesh_0 = SkeletalMesh_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.UpdateRootBoneName
// (BlueprintCallable, BlueprintEvent)

void UBPC_Dismemberment_C::UpdateRootBoneName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "UpdateRootBoneName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_Dismemberment.BPC_Dismemberment_C.ExecuteUbergraph_BPC_Dismemberment
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_Dismemberment_C::ExecuteUbergraph_BPC_Dismemberment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_Dismemberment_C", "ExecuteUbergraph_BPC_Dismemberment");

	Params::BPC_Dismemberment_C_ExecuteUbergraph_BPC_Dismemberment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

