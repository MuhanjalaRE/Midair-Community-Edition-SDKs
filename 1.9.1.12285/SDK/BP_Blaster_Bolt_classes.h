﻿#pragma once

// Name: mace, Version: 1.9.1.12285


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Blaster_Bolt.BP_Blaster_Bolt_C
// 0x0010 (FullSize[0x0818] - InheritedSize[0x0808])
class ABP_Blaster_Bolt_C : public AMAProjectile
{
public:
	unsigned char                                      UnknownData_DKIQ[0x8];                                     // 0x0808(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0810(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Blaster_Bolt.BP_Blaster_Bolt_C");
		}
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Blaster_Bolt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
