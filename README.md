# Unit Testing Project

## Project Description

This project is designed for unit testing basic functions of student.cpp and whitelist.cpp. It includes a simple C++ application with a set of functionalities and unit tests using Google Test framework.

## Project Structure

- **app**: Contains the main application source code.
- **src**: Includes source code for the core functionalities.
- **include**: Holds header files for the project.
- **test**: Consists of unit tests for the project.

## Building the Project

### Prerequisites for the Project

- CMake
- C++ compiler (e.g., GCC)

### Build Steps

1. Clone the repository:
```
git clone https://github.com/FatimahAhmad123/unitTesting.git
```
2. Run the following commands:
```
mkdir build/
cd build/
```
3. Run following commands to run cmake and run the main program:
```
cmake -DBUILD_TEST=OFF ..
make
```
4. To run the program:
```
cd app
./main
```

## For Testing

### Build steps

Checkout to the feature/unit-testing branch and run the following commands inside build folder:
```
cmake -DBUILD_TEST=ON ..  //to turn on testing
make
```
Now to run the test executable:
```
cd test
./unitTest
```

Similarly for the failed testing checkout to feature/faliure-testing and run the above commands.

