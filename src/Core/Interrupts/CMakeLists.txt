add_library(Interrupts STATIC "")

target_sources(Interrupts
	PRIVATE
		SysTick.cpp
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/SysTick.hpp
)
target_link_libraries(Interrupts
	PUBLIC
		main
		HAL
		c
		m
		nosys
)