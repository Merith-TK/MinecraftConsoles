#include "../Minecraft.Client/stdafx.h"
#include "../Minecraft.Client/MinecraftServer.h"
#include "../Minecraft.World/net.minecraft.world.level.storage.h"
#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Starting headless Minecraft server..." << std::endl;

    // Hardcoded save name - change this to your save file name
    std::wstring saveName = L"world";

    // Create init data
    NetworkGameInitData initData;
    initData.seed = 0; // Will be set by loadLevel if needed
    initData.findSeed = false;
    initData.xzSize = LEVEL_LEGACY_WIDTH;
    initData.hellScale = HELL_LEVEL_LEGACY_SCALE;
    initData.savePlatform = SAVE_FILE_PLATFORM_LOCAL;

    // Run the server
    MinecraftServer::main(initData.seed, &initData);

    std::cout << "Server stopped." << std::endl;
    return 0;
}