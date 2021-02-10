-- premake5.lua
project "udan_debug"
    kind "StaticLib"
    language "C++"
    cppdialect "C++17"
    staticruntime "off"

    files {
        "src/**.cpp",
        "include/udan/debug/**.h"
    }

    includedirs { 
        "include",
        "../SpdLog/include" -- string formating python like syntax
     }
    