cmake_minimum_required(VERSION 3.0.0)
project(CppDemo VERSION 0.1.0)


aux_source_directory(./src/ DIR_SRC)

include_directories(include)
include_directories("D:/Eigen")

add_executable(CppDemo main.cpp ${DIR_SRC})
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}) 
