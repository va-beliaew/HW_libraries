cmake_minimum_required(VERSION 3.22.0)
project(cmake_libraries)
add_library(Work4DLL SHARED Work4/Equilateral.cpp Work4/Equilateral.h Work4/Isosceles.cpp 
Work4/Isosceles.h Work4/Parallelogram.cpp Work4/Parallelogram.h Work4/Quadrilateral.cpp 
Work4/Quadrilateral.h Work4/Rectangle.cpp Work4/Rectangle.h Work4/Rhomb.cpp Work4/Rhomb.h 
Work4/Right.cpp Work4/Right.h Work4/Square.cpp Work4/Square.h Work4/Triangle.cpp Work4/Triangle.h)
add_executable(cmake_dll Work/Main.cpp)
target_link_libraries(cmake_dll Work4DLL)