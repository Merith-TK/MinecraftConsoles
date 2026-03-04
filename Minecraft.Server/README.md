# Minecraft.Server

A headless Minecraft server executable for the MinecraftConsoles project.

## Building

This is built as part of the main CMake project. Run CMake on the root directory to generate build files that include the MinecraftServer target.

## Usage

1. Ensure you have a Minecraft save file named "world" in the same directory as the executable.
2. Run `MinecraftServer.exe`
3. The server will start and listen on port 25565.

## Configuration

Currently zero-config: it hardcodes the save name to "world" and uses default settings.

To change the save name, edit `main.cpp` and modify the `saveName` variable.

## Notes

- This is a console application (no GUI).
- It uses the same networking and world logic as the client.
- Requires the same dependencies and assets as the client.