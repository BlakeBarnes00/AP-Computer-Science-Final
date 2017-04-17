solution "Cryptography"
  configurations { "Debug", "Release" }

  project "CeasarCypher"
    kind "ConsoleApp"
    language "C++"

    files {
      "ceasar.cpp"
    }

    includedirs {}

    libdirs {}

    links {}

    configuration "Debug"
      buildoptions { "-Wall", "-ggdb", "-std=c++11" }
      defines "DEBUG"
      symbols "On"
      objdir  "./bin/Debug/"

    configuration "Release"
      buildoptions { "-Wall", "-ggdb", "-std=c++11" }
      defines   "NDEBUG"
      optimize  "On"
      objdir    "./bin/Release"
