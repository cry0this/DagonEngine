set(EXMPL_SRC_DIR src)

add_executable(InitTest "${EXMPL_SRC_DIR}/init.cpp")
target_include_directories(InitTest PUBLIC "${DAGEN_INCLUDE_DIR}")
target_link_libraries(InitTest DagEn)