set(DAGEN_SRC_DIR src)
set(DAGEN_INCLUDE_DIR include)

find_package(OpenGL REQUIRED)
find_package(SDL2 REQUIRED)

file(GLOB DAGEN_SOURCES ${DAGEN_SRC_DIR}/*.cpp)

add_library(Dagon SHARED ${DAGEN_SOURCES})
target_include_directories(Dagon PUBLIC ${DAGEN_INCLUDE_DIR})

target_link_libraries(Dagon SDL2 GLESv2)
