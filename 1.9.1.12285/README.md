# MidairCE-1.9.1.12285-SDK
Midair: Community Edition (Vector Z Studios) 1.9.1.12285 SDK (UE4 4.23.1.0)


https://store.steampowered.com/app/1231210/Midair_Community_Edition/

## Offsets
**GObjects**: 0x5283F20

**GNames**: 0x5266340

**UWorld**: 0x5390D98

**ProcessEvent index**: 66

```cpp
DWORD64 base_address = (DWORD64)GetModuleHandle(0);
SDK::UObject::GObjects = reinterpret_cast<SDK::TUObjectArray*>(base_address + 0x5283F20);
SDK::FName::GNames = reinterpret_cast<SDK::GNAME_TYPE*>(base_address + 0x5266340);
SDK::UWorld* uworld = (SDK::UWorld*)(*(DWORD64*)(base_address + 0x5390D98));
```
