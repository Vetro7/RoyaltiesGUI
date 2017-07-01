## Building Royalties Wallet

### On *nix:

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, and Boost 1.55 or later.

You may download them from:

- http://gcc.gnu.org/
- http://www.cmake.org/
- http://www.boost.org/

Alternatively, it may be possible to install them using a package manager.


---Acquire the latest source---
VIA GIT run these commands in a directory you want the source:
git clone https://github.com/Vetro7/RoyaltiesWallet.git
cd RoyaltiesWallet
git submodule init
git submodule update --remote

---Build---

with make (single-threaded build):
Run these commands
```
mkdir build
cd build
cmake ..
cmake --build .
```

with Ninja (multi-threaded build; faster with multi-core machines):
If you don't have Ninja installed... 
	you can get it from https://ninja-build.org/ .
	Or, if you are on Ubuntu, simply run the command: "sudo apt install ninja-build" (without the quotes).
Run these commands (with Ninja installed)
```
mkdir build
cd build
cmake -G Ninja ..
cmake --build .
```


### On Windows:
Dependencies: MSVC 2013 or later, CMake 2.8.6 or later, and Boost 1.55 or later. You may download them from:

- http://www.microsoft.com/
- http://www.cmake.org/
- http://www.boost.org/

To build, change to a directory where this file is located, and run this commands:
```
mkdir build
cd build
cmake -G "Visual Studio 12 Win64" ..
```

And then open and build generated project file with visual studio.


Good luck!
