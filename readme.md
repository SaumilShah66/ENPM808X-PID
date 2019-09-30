# PID Controller
[![Build Status](https://travis-ci.org/SaumilShah66/ENPM808X-PID.svg?branch=master)](https://travis-ci.org/SaumilShah66/ENPM808X-PID)
[![Coverage Status](https://coveralls.io/repos/github/SaumilShah66/ENPM808X-PID/badge.svg)](https://coveralls.io/github/SaumilShah66/ENPM808X-PID)
---

This respository has been made for Homework purpose only

Part 1 of homework

-Driver     :Saumil Shah

-Navigator  :Shantam Bajpai  

## Overview

Test Driven DEvelopment for PID Controller

- cmake
- googletest

## Standard install via command-line
```
git clone --recursive https://github.com/SaumilShah66/ENPM808X-PID
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.


## Run cpplint for Google c++ styleguide errors
```
cd <path to repository>
cpplint app/*.cpp include/*.hpp test/*.cpp
```

## Run cppcheck
```
cd <path to repository>
cppcheck app/*.cpp include/*.hpp test/*.cpp
```
