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

// BlueprintGeneratedClass WP_HalfSunny.WP_HalfSunny_C
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UWP_HalfSunny_C : public UWeatherPreset_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass WP_HalfSunny.WP_HalfSunny_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
