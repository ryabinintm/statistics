cmake_minimum_required(VERSION 3.5)

project(05.homework)

set(SOURCES statistic_min statistic_max statistic_mean statistic_std)

add_library(statistics STATIC ${SOURCES})
target_compile_features(statistics PUBLIC cxx_std_17)
set_target_properties(statistics PROPERTIES
	CXX_STANDARD_REQUIRED ON
)

if (MSVC)
	target_compile_options(statistics PUBLIC /W4 /WX)
else()
	target_compile_options(statistics PUBLIC -Wall -Wextra -Werror -pedantic)
endif()
