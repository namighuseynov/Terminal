project "TerminalAPI"
    kind "staticLib"
    language "C++"
    cppdialect "C++17"
    staticruntime "off"
    defines "TERMINAL_API"

    filter "configurations:Release" 
        defines { "NDEBUG" }      
        runtime "Release"
        optimize "On" 

    targetdir "%{wks.location}/bin/"
    objdir "%{wks.location}/bin-obj/" 

    pchheader "tmpch.h"
	pchsource "src/tmpch.cpp"

    files {
        "src/**.cpp",
        "src/**.h",
    }

    includedirs {
        "%{wks.location}/TerminalAPI/src"
    }