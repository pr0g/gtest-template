# googletest CMake template

## Overview

Simple starter project for googletest using CMake

## Instructions

### install googletest (if not already installed)

* navigate to [googletest](https://github.com/google/googletest)
* clone googletest to a local repo

```bash
mkdir googletest && cd googletest
git clone https://github.com/google/googletest .
```

* build and install googletest

```bash
mkdir build && cd build
# if macOS/*nix
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . --target install
# elif windows
cmake .. -Dgtest_force_shared_crt=ON
cmake --build . --config Release --target install # note: will likely need to run this as Admin
# endif
```

### clone gtest-template

* navigate to [gtest-template](https://github.com/pr0g/gtest-template)
* clone gtest-template to a local repo

```bash
mkdir <project-name> && cd <project-name>
git clone https://github.com/pr0g/gtest-template .
```

* build gtest-template

```bash
mkdir build && cd build
# if macOS/*nix
cmake ..
# elif windows
cmake .. -DCMAKE_PREFIX_PATH=<path-to-gtest> # this seems to be required on windows :(
# e.g. cmake .. -DCMAKE_PREFIX_PATH="C:/Program Files (x86)/googletest-distribution"
# endif
cmake --build .
```

* run gtest-app

```bash
./gtest-app
```

* disconnect the remote

```bash
git remote rm origin
```

### optional

* create a new git remote
* connect repo to new remote

```bash
git remote add origin <repo-address.git>
git push -u origin master
```