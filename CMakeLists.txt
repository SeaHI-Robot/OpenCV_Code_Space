cmake_minimum_required(VERSION 3.23)

project(OPENCV_LEARN)

set(CMAKE_CXX_STANDARD 17)


# Find OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

message("--------------------------------------------------") 
message("opencv dir = ${OpenCV_INCLUDE_DIRS}")
message("Opencv lib = ${OpenCV_LIBRARIES}") 
message("--------------------------------------------------") 

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


# aux_source_directory(src DIR_SRC) 

# add_executable(bin_file_name ${DIR_SRC} ) 
# target_link_libraries(bin_file_name ${OpenCV_LIBS})


add_executable(test_read_pic src/test_read_pic.cpp ) 
target_link_libraries(test_read_pic ${OpenCV_LIBS})

add_executable(test_open_camera src/test_open_camera.cpp ) 
target_link_libraries(test_open_camera ${OpenCV_LIBS})


# ref: [cmake怎么优雅简洁的编译c++工程](https://zhuanlan.zhihu.com/p/352848909)

# cd build
# cmke..
# make
