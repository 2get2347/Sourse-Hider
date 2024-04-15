#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <filesystem>
#include <Shlobj.h>
#include <conio.h>
#include <iomanip>
#include <thread>
#include <vector>
#include <fstream>

void restartExplorer() {
    system("taskkill /f /im explorer.exe");
    Sleep(1000);
    system("start explorer.exe");
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    AllocConsole();
    HWND console = GetConsoleWindow();
    ShowWindow(console, SW_HIDE);
    int result = SHEmptyRecycleBin(NULL, NULL, SHERB_NOCONFIRMATION | SHERB_NOPROGRESSUI | SHERB_NOSOUND);
    SetFileAttributes(L"C:\\Hider", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Nurik", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Expensive", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Excellent", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Wild", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Akrien", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\AkrienAntiLeak", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Celestial", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Rockstar", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\RockAntiLeak", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users\\%USERNAME%\\AppData\\Roaming\\.wex", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Celka", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\baritone", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\versions\\Rockstar", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\Rockstar", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\Expensive", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\Avalon", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\Dark", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\Exclusive", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\arbuz", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\Rise", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\StarLine", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\Impact", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\Inertia", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\Gothaj", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\FPDCLEINT-1.8", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\Wissend", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\Verist", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\Vendex", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\Vendex", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\Exclusive", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\CarbonaraAntiLeak", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Carbonara", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Sk3dGuard", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Delta", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\MoonHackFree", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\DeadCode", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Nova", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\arbuz", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\Dark", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\ANL\\Verist", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\Expensive Reloaded", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\KwishFree", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\Centric Free", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\Expensive", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\versions\\Expensive Reloaded", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\versions\\KwishFree", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\versions\\Centric Free", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\versions\\Expensive", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Games\\Minecraft\\versions\\FlugerClient", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\ÎptiFine 1.16.5.jar.bak", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users\\zxcro\\AppData\\Roaming\\.tlauncher\\legacy\\Minecraft\\game\\versions\\ÎptiFine 1.16.5\\Rockstar_lib", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\ÎptiFine 1.16.5.jar", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    SetFileAttributes(L"C:\\Users%username%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\game\\versions\\ÎptiFine 1.16.5.json", FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
    system("del /q \"C:\\Windows\\System32\\SRU\" >nul 2>nul");
    system("del /q \"C:\\Windows\\Prefetch\" >nul 2>nul");
    system("reg delete \"HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\TypedPaths\" /v \"url1\" /f >nul 2>nul");
    while (true) {
        system("taskkill /F /IM SystemInformer.exe >nul 2>nul");
        system("taskkill /F /IM ProcessHacker.exe >nul 2>nul");
        system("taskkill /F /IM JournalTrace.exe >nul 2>nul");
        system("taskkill /F /IM RegScanner.exe >nul 2>nul");
        system("taskkill /F /IM BrowsingHistoryView.exe >nul 2>nul");
        system("taskkill /F /IM Everything.exe >nul 2>nul");
        system("taskkill /F /IM Taskmgr.exe >nul 2>nul");

        Sleep(10);
        if (GetKeyState(VK_F8) & 0x8000) {
            system("start C:\\Users\\%USERNAME%\\AppData\\Roaming\\.tlauncher\\legacy\\Minecraft\\TL.exe");
            system("start C:\\Users\\%USERNAME%\\AppData\\Roaming.tlauncher\\legacy\\Minecraft\\TL.exe");
        }
        Sleep(10);
        if (GetKeyState(VK_F9) & 0x8000) {
            system("start explorer.exe");
            return 0;
        }
        Sleep(10);
    }

    return 0;
}