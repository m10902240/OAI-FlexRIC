# This is a CMake example for Python
CMAKE_MINIMUM_REQUIRED(VERSION 3.8)
CMAKE_POLICY(VERSION 3.8)

PROJECT(FLEXRIC)

CMAKE_POLICY(SET CMP0078 NEW) 
CMAKE_POLICY(SET CMP0086 NEW) 

FIND_PACKAGE(SWIG REQUIRED)
INCLUDE(${SWIG_USE_FILE})

FIND_PACKAGE(PythonLibs)
INCLUDE_DIRECTORIES(${PYTHON_INCLUDE_PATH})

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

SET(CMAKE_SWIG_FLAGS "")

SET_PROPERTY(SOURCE py_wrapp.i PROPERTY C ON)
SWIG_ADD_LIBRARY(flexric LANGUAGE python SOURCES py_wrapp.i py_wrapp.c ${CMAKE_CURRENT_SOURCE_DIR}/../../build/src/ric/libnear_ric.so)
SWIG_LINK_LIBRARIES(flexric ${PYTHON_LIBRARIES} ${CMAKE_CURRENT_SOURCE_DIR}/../../build/src/ric/libnear_ric.so -ldl -lsctp -lpthread)
