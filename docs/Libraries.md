## [libtins](https://github.com/mfontanini/libtins)
High-level, multiplatform C++ network packet sniffing and crafting library. 

### Building and Installation (Windows specifically)
* [Download](http://libtins.github.io/download/) - Download and follow instructions to install the library from here.
* Now build it following the same instructions from the website. I was using Windows 10 for this specific project, so downloading [WinPcap Development](https://www.winpcap.org/devel.htm) was required to use it. 
``` shell
mkdir build
cd build

# Once in the build folder I compiled it using this script from their site
cmake ../ -DPCAP_ROOT_DIR=D:/Libraries/WpdPack -DLIBTINS_ENABLE_WPA=0 -DLIBTINS_BUILD_SHARED=0

# Now build the entire library
cmake --build .
```
