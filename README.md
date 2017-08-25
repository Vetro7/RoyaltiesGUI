## Building Royalties Wallet

### On *nix:

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, Boost 1.55 or later, and Qt 5.9 or later.

You may download them from:

- http://gcc.gnu.org/
- http://www.cmake.org/
- http://www.boost.org/
- https://www.qt.io

Alternatively, it may be possible to install them using a package manager.

To acquire the source via git and build the release version, run the following commands:
```
cd ~
git clone https://github.com/Vetro7/RoyaltiesGUI
cd RoyaltiesGUI
git submodule init
git submodule update --remote
./configure
make -jX #where "X" is the number of threads to use (speeds up compiling on multi-core systems)
make clean #optional, to clean up build files after
```

The executable is now in the bin directory.
For a faster build, you can add -jX to the end of the make instruction, where X is the number of threads to use. Example: "make build-release -j8", for 4 cores with 2 threads each.


### On Windows:
Dependencies: MSVC 2013 or later, CMake 2.8.6 or later, and Boost 1.55 or later. You may download them from:

- http://www.microsoft.com/
- http://www.cmake.org/
- http://www.boost.org/


To build, change to a directory where this file is located, and run the following commands:
```
mkdir build
cd build
cmake -G "Visual Studio 14 2015 Win64" ..
```
And then open and build the generated solution file, located in the build directory, with Visual Studio.

The above commands are for 64 bit Windows. If you are running 32 bit, simply leave off the "Win64". Example: 'cmake -G "Visual Studio 14 2015".
Be sure to change the version number and year to the version of Visual Studio that you will be using for compiling. 
It may also be possible to build with other compilers, like MinGW.

###To Build Packages:
To build a DEB file, from the directory with this file, run:
```
make package-deb
```

To build an RPM file, from the directory with this file, run:
```
make package-rpm
```


Good luck!
