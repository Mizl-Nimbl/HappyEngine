cmake_minimum_required(VERSION 3.7.0)
project(HappyEngine VERSION 0.1.0 LANGUAGES C CXX)

set(SDL2_image_INCLUDE_DIRS "/usr/include/SDL2")
set(SDL2_image_LIBRARIES "/usr/lib/x86_64-linux-gnu/libSDL2_image.so")

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(GLU REQUIRED)
find_package(Lua REQUIRED)

message("SDL2_image include path: ${SDL2_image_INCLUDE_DIRS}")
message("SDL2_image library path: ${SDL2_image_LIBRARIES}")

include_directories(${SDL2_image_INCLUDE_DIRS} ${SDL2_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIRS} ${GLU_INCLUDE_DIRS} ${LUA_INCLUDE_DIR})

include(CTest)
enable_testing()

add_executable(HappyEngine main.cpp)
target_include_directories(HappyEngine PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(HappyEngine ${SDL2_LIBRARIES} ${OPENGL_LIBRARIES} ${GLU_LIBRARIES} ${SDL2_image_LIBRARIES} ${LUA_LIBRARIES})

set_property(TARGET HappyEngine PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "~/Documents/HappyEngine")

set(ZLIB_LIBRARIES zlibstatic)
set(ENABLE_BOOST_WORKAROUND ON)
set(BUILD_STATIC_LIB ON)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
