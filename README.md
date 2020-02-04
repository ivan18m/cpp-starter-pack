Clone with submodules
```
git clone --recurse-submodules https://github.com/ivan18m/cpp-starter-pack.git
cd cpp-starter-pack
./GenerateProjects.sh
make
```
If on windows generate Visual Studio Solution with `GenerateProjects.bat` script

* Premake5 scripts for Linux and Windows
* Architecture: x64
* Configurations: Debug / Release
* With `spdlog` Logger and `catch2` Testing framework
* Precompiled headers file `AppName/src/pch.h`
* Binaries compiled in `bin/`