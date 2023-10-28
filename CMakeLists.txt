cmake_minimum_required(VERSION 3.23)

project(OPENCV_LEARN)

set(CMAKE_CXX_STANDARD 14)


# Find OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
message("opencv dir = ${OpenCV_INCLUDE_DIRS}")
message("Opencv lib = ${OpenCV_LIBRARIES}") 


set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


#aux_source_directory(src SRC_LIST) 
#aux_source_directory(src SRC_LIST) 和 set(SRC_LIST ./src/opencv_test.cpp) 功能一致
set(SRC_LIST ./src/read_pic.cpp)

add_executable(read_pic ${SRC_LIST} ) 
target_link_libraries(read_pic ${OpenCV_LIBS})



# ref: [cmake怎么优雅简洁的编译c++工程](https://zhuanlan.zhihu.com/p/352848909)

# cd build
# cmke..
# make