find_package(SDL2 REQUIRED)

set(EXMPL_SRC_DIR src)

add_executable(init ${EXMPL_SRC_DIR}/init.cpp)
target_include_directories(init PUBLIC ${DAGEN_INCLUDE_DIR})
target_link_libraries(init Dagon)

add_executable(window ${EXMPL_SRC_DIR}/window.cpp)
target_include_directories(window PUBLIC ${DAGEN_INCLUDE_DIR})
target_link_libraries(window Dagon SDL2)