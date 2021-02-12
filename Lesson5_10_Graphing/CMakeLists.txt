cmake_minimum_required(VERSION 3.0.0)
project(graphing VERSION 0.1.0)

include(CTest)
enable_testing()
find_package(Python2 COMPONENTS Development NumPy)

# export CFLAGS="-I /usr/local/lib/python2.7/site-packages/numpy/core/include $CFLAGS"

# Mac os reqires this 
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# set(CMAKE_CXX_LINK_FLAGS "-lpython2.7")
# set(CMAKE_CXX_LINK_FLAGS "/usr/local/lib/python2.7/site-packages/numpy/core/include")


add_executable(graphing main.cpp)

target_include_directories(graphing PRIVATE ${Python2_INCLUDE_DIRS} ${Python2_NumPy_INCLUDE_DIRS})
target_link_libraries(graphing Python2::Python Python2::NumPy)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
