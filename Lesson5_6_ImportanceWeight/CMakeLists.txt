cmake_minimum_required(VERSION 3.0.0)
project(importance_weight VERSION 0.1.0)

include(CTest)
enable_testing()

# Mac os reqires this 
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(importance_weight main.cpp)
add_executable(solution solution.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)