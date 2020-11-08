cmake_minimum_required(VERSION 3.0.0)
project(DagonEngine VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(core)

add_subdirectory(examples)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
