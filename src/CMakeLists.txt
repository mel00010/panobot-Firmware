include(arm-gcc-utils)
set(CMAKE_EXECUTABLE_SUFFIX ".elf")

add_executable(panoBot "")
set(LINKER_SCRIPT "${CMAKE_SOURCE_DIR}/tools/STM32F358VCTx_FLASH.ld")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -T ${LINKER_SCRIPT} -Wl,-Map=${CMAKE_CURRENT_BINARY_DIR}/panobot-Firmware.map,--cref")

target_sources(panoBot
	PRIVATE
		main.cpp
		startup_stm32f358xx.s
		stm32f3xx_hal_msp.c
		stm32f3xx_it.c
		system_stm32f3xx.c
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/main.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/stm32f3xx.h
		${CMAKE_CURRENT_SOURCE_DIR}/stm32f358xx.h
		${CMAKE_CURRENT_SOURCE_DIR}/stm32f3xx_hal_conf.h
		${CMAKE_CURRENT_SOURCE_DIR}/stm32f3xx_it.h
		${CMAKE_CURRENT_SOURCE_DIR}/system_stm32f3xx.h
)
target_link_libraries(panoBot
	PUBLIC
		Common_ARM_Headers
		HAL
		Peripherals
		c
		m
		nosys
		${CMAKE_SOURCE_DIR}/lib/libarm_cortexM4lf_math.a
)

set_target_properties(panoBot PROPERTIES LINK_DEPENDS ${LINKER_SCRIPT})

generate_object(panoBot ".hex" "ihex")
generate_object_s(panoBot ".bin" "binary")
firmware_size(panoBot)


add_subdirectory(Common)
add_subdirectory(HAL)
add_subdirectory(Peripherals)