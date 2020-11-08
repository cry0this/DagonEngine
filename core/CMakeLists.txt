set(DAGEN_SRC_DIR src)
set(DAGEN_INCLUDE_DIR include)

file(GLOB DAGEN_SOURCES "${DAGEN_SRC_DIR}/*.cpp")

add_library(DagEn SHARED "${DAGEN_SOURCES}")
target_include_directories(DagEn PUBLIC "${DAGEN_INCLUDE_DIR}")