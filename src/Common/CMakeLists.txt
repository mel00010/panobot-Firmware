add_library(Common_ARM_Headers INTERFACE)

target_sources(Common_ARM_Headers
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}/arm_common_tables.h
		${CMAKE_CURRENT_SOURCE_DIR}/arm_const_structs.h
		${CMAKE_CURRENT_SOURCE_DIR}/arm_math.h
		${CMAKE_CURRENT_SOURCE_DIR}/cmsis_armcc.h
		${CMAKE_CURRENT_SOURCE_DIR}/cmsis_armcc_V6.h
		${CMAKE_CURRENT_SOURCE_DIR}/cmsis_gcc.h
		${CMAKE_CURRENT_SOURCE_DIR}/core_cm0.h
		${CMAKE_CURRENT_SOURCE_DIR}/core_cm0plus.h
		${CMAKE_CURRENT_SOURCE_DIR}/core_cm3.h
		${CMAKE_CURRENT_SOURCE_DIR}/core_cm4.h
		${CMAKE_CURRENT_SOURCE_DIR}/core_cm7.h
		${CMAKE_CURRENT_SOURCE_DIR}/core_cmFunc.h
		${CMAKE_CURRENT_SOURCE_DIR}/core_cmInstr.h
		${CMAKE_CURRENT_SOURCE_DIR}/core_cmSimd.h
		${CMAKE_CURRENT_SOURCE_DIR}/core_sc000.h
		${CMAKE_CURRENT_SOURCE_DIR}/core_sc300.h
)