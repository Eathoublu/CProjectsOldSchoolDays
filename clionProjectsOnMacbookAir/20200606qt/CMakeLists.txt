cmake_minimum_required(VERSION 3.10)
project(CatalogTree)

set (CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.13.0/lib/cmake")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

find_package(Qt5Widgets REQUIRED NO_DEFAULT_PATH)

#find_package(Qt5Core REQUIRED)
#find_package(Qt5Quick REQUIRED)


aux_source_directory(. DIRS_SRCS)

add_executable(CatalogTree ${SOURCE_FILES})

target_link_libraries(CatalogTree Qt5::Widgets)
#target_link_libraries(CatalogTree Qt5::Core)
#target_link_libraries(CatalogTree Qt5::Quick)



