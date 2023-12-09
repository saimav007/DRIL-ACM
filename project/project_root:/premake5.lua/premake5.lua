workspace "YourProject"
    configurations { "Debug", "Release", "Distribution" }
    platforms { "x86", "x86_64" }
    location "build" 
     
    filter "configurations:Debug"
        symbols "On"
        defines { "DEBUG", "ENABLE_LOGGING" }
        targetdir ("bin/%{cfg.platform}/Debug")
        objdir ("build/%{cfg.platform}/Debug")
    filter "configurations:Release"
        optimize "On"
        defines { "NDEBUG", "ENABLE_LOGGING" }
        targetdir ("bin/%{cfg.platform}/Release")
        objdir ("build/%{cfg.platform}/Release")
    filter "configurations:Distribution"
        optimize "On"
        defines { "NDEBUG", "DISTRIBUTION" }
        targetdir ("bin/%{cfg.platform}/Distribution")
        objdir ("build/%{cfg.platform}/Distribution")
    filter "platforms:x86"
        architecture "x86"
    filter "platforms:x86_64"
        architecture "x86_64"

project "lib"
    kind "SharedLib"
    language "C++"
    targetname "lib"
    includedirs { "include" }
    files { "src/lib/*.h", "src/lib/*.cpp" }
    excludes { "src/lib/doc.h" }

project "main"
    kind "ConsoleApp"
    language "C++"
    includedirs { "include" }
    files { "src/main/*.cpp" }
    excludes { "src/main/doc.h" }
    links { "lib" }
    dependson { "lib" }
    filter "configurations:Distribution"
        links { "c" }

    filter {} 

