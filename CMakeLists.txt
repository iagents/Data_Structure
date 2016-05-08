# An implementation of data structure classes
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(DS)

INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/include)

ADD_EXECUTABLE(ds_demo src/main.cpp src/data_structure.cpp)
