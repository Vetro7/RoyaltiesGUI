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
make
```

The executable is now in the bin directory.
For a faster build, you can add -jX to the end of the make instruction, where X is the number of threads to use. Example: `make -j8`, for 4 cores with 2 threads each.
You may also want to run `make clean` after to remove the build files, which are all stored under the build directory.


### On Windows:
Dependencies: MSVC 2013 or later, CMake 2.8.6 or later, and Boost 1.55, and Qt 5.9 or later. You may download them from:

- http://www.microsoft.com/
- http://www.cmake.org/
- http://www.boost.org/
- https://www.qt.io

To build, change to the directory where this file is located, and run the following commands:
```
git submodule init
git submodule update --remote
mkdir build
cd build
set CMAKE_PREFIX_PATH={proper qt prefix}
cmake -G "Visual Studio 14 2015 Win64" ..
```
Be sure to replace {proper qt prefix} above with the proper QT prefix for your machine, such as "C:\\Qt\\5.8\\msvc2015_64\\".
Then open and build the generated solution file, located in this build directory, with Visual Studio. You'll probably want to build it in "Release mode".
If you cannot start royaltieswallet.exe, you may need to run "windeployqt.exe royaltieswallet.exe" to copy the QT dependencies to the same directory as the exe.

The above commands are for 64 bit Windows. If you are running 32 bit, simply leave off the "Win64". Example: 'cmake -G "Visual Studio 14 2015".
Be sure to change the version number and year to the version of Visual Studio that you will be using for compiling. 
It may also be possible to build with other compilers, like MinGW.

## Building Packages:
To build a DEB file, from the directory with this file, run:
```
make package-deb
```

To build an RPM file, from the directory with this file, run:
```
make package-rpm
```

To build an OS X DMG, from the directory with this file, run:
```
make package-dmg
```
To build a Windows MSI Installer: 
After building the GUI, from the directory with this file run:
```
cd build\Release
windeployqt.exe royaltieswallet.exe
```
then, open the file "[project root]/deploy/windows-installer.vdproj" with Visual Studio and build the project.


Good luck!
