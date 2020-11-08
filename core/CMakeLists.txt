set(DAGEN_SRC_DIR src)
set(DAGEN_INCLUDE_DIR include)

file(GLOB DAGEN_SOURCES "${DAGEN_SRC_DIR}/*.cpp")

add_library(Dagon SHARED "${DAGEN_SOURCES}")
target_include_directories(Dagon PUBLIC "${DAGEN_INCLUDE_DIR}")