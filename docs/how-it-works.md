# How It Works

This document explains how the integration of CMake, CTest, Doxygen, and GitHub Actions works in this project.

## CMake
CMake is used to manage the build process of the project. The CMake configuration files specify how the source files are compiled and linked to create the executable and libraries.

## CTest
CTest is used to run the unit tests. The tests are automatically discovered and executed, and the results are reported.

## Doxygen
Doxygen is used to generate the project documentation from the source code comments. The documentation is generated in the `docs` directory.

## GitHub Actions
GitHub Actions automates the CI process. The workflow is defined in `.github/workflows/ci.yml` and includes steps for checking out the code, setting up the build environment, compiling the code, running the tests, and generating the documentation. If the tests pass, the documentation is deployed to GitHub Pages.
