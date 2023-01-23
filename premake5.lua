workspace "Terminal"
    system "windows"
    systemversion "latest"
    architecture "x64"
    configurations "Release"
    startproject "Terminal"
    
    filter "system:windows"
        defines "SYSTEM_WINDOWS"
    filter "architecture:x64" 
        defines "X64"


include "TerminalAPI"

include "Terminal"