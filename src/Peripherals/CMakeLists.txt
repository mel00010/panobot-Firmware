add_library(Peripherals STATIC "")

target_sources(Peripherals
	PRIVATE
		CRC.cpp
		GPIO.cpp
		IWDG.cpp
		SPI.cpp
		TIM.cpp
		USART.cpp
		WWDG.cpp		
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/CRC.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/GPIO.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/IWDG.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/SPI.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/TIM.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/USART.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/WWDG.hpp
		
)
target_link_libraries(Peripherals
	PUBLIC
		HAL
		main
		c
		m
		nosys
)