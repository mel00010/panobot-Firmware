add_library(Core STATIC "")

target_sources(Core
	PRIVATE
		Deadline.cpp
		Priority.cpp
		Scheduler.cpp
		StepperDriver.cpp
		Task.cpp
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/Deadline.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/PID.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/Priority.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/Scheduler.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/StepperDriver.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/Task.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/TaskState.hpp
)
target_link_libraries(Core
	PUBLIC
		main
		Peripherals
		Interrupts
		c
		m
		nosys
)

add_subdirectory(Interrupts)
