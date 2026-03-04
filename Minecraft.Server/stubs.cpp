// Stubs for headless server
#include "../Minecraft.Client/stdafx.h"

// Screen globals (not used in headless)
int g_iScreenWidth = 800;
int g_iScreenHeight = 600;

// Stub functions
void SeedEditBox() {}
void ClearGlobalText() {}
unsigned short* GetGlobalText() { return nullptr; }

// Implement missing Minecraft methods
unsigned int Minecraft::getCurrentTexturePackId() { return 0; }
void Minecraft::stop() {}