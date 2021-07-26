cmake_minimum_required (VERSION 2.8.7)
project (reflang)
enable_testing()

include_directories(${CMAKE_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 14)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
find_package(LibClang REQUIRED)

set(CMAKE_EXPORT_COMPILE_COMMANDS "ON")
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_library(libreflang STATIC lib/reflang.hpp lib/reflang.cpp)
set_target_properties( libreflang PROPERTIES OUTPUT_NAME "reflang")

add_executable(
	reflang
	gen/cmdargs.cpp gen/cmdargs.hpp
	gen/main.cpp
	gen/parser.class.cpp gen/parser.class.hpp
	gen/parser.cpp gen/parser.hpp
	gen/parser.enum.cpp gen/parser.enum.hpp
	gen/parser.function.cpp gen/parser.function.hpp
	gen/parser.util.cpp gen/parser.util.hpp
	gen/serializer.class.cpp gen/serializer.class.hpp
	gen/serializer.cpp gen/serializer.hpp
	gen/serializer.enum.cpp gen/serializer.enum.hpp
	gen/serializer.function.cpp gen/serializer.function.hpp
	gen/serializer.util.cpp gen/serializer.util.hpp
	gen/types.cpp gen/types.hpp)
target_link_libraries(reflang clang)

add_subdirectory(tests)

install(TARGETS reflang DESTINATION bin)
install(TARGETS libreflang DESTINATION lib)
install(FILES lib/reflang.hpp DESTINATION include)