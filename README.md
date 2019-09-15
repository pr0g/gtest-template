# googletest CMake template

## Overview

Simple starter project for googletest using CMake

## Instructions

### Install googletest (if not already installed)

* Clone [googletest](https://github.com/google/googletest) repo

```bash
mkdir googletest && cd googletest
git clone https://github.com/google/googletest .
```

* Build and install googletest

```bash
# if macOS/*nix
cmake -S . -B build/ -DCMAKE_BUILD_TYPE=Release
cmake --build build/ --target install
# elif windows
cmake -S . -B build/ -Dgtest_force_shared_crt=ON
cmake --build build/ --config Release --target install # note: will likely need to run this as Admin
# endif
```

### Clone gtest-template

* Clone [gtest-template](https://github.com/pr0g/gtest-template) repo

```bash
mkdir <project-name> && cd <project-name>
git clone https://github.com/pr0g/gtest-template .
```

* Build gtest-template

```bash
# if macOS/*nix
cmake -S . -B build/
# elif windows
cmake -S . -B build/ -DCMAKE_PREFIX_PATH=<absolute/path/to/gtest> # this seems to be required on windows :(
# e.g. cmake .. -DCMAKE_PREFIX_PATH="C:/Program Files (x86)/googletest-distribution"
# endif
cmake --build build/
```

* Run gtest-template

```bash
./build/gtest-template
```

* Disconnect the remote

```bash
git remote rm origin
```

### Optional

* Create a new git remote
* Connect repo to new remote

```bash
git remote add origin <repo-address.git>
git push -u origin master
```
