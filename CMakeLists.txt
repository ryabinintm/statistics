cmake_minimum_required(VERSION 3.5)

add_subdirectory(stat)

project(05.homework)

# set(SOURCES main.cpp statistic_min statistic_max statistic_mean statistic_std)

add_executable(a.out main.cpp)
target_compile_features(a.out PUBLIC cxx_std_17)
set_target_properties(a.out PROPERTIES
	CXX_STANDARD_REQUIRED ON
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

target_include_directories(a.out PUBLIC stat)
target_link_libraries(a.out statistics)

if (MSVC)
	target_compile_options(a.out PUBLIC /W4 /WX)
else()
	target_compile_options(a.out PUBLIC -Wall -Wextra -Werror -pedantic)
endif()
