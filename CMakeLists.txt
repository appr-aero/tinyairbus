cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(tinyairbus C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(PICO_EXAMPLES_PATH ${PROJECT_SOURCE_DIR})

pico_sdk_init()

add_executable(tinyairbus
	tinyairbus.c
	)

target_link_libraries(tinyairbus pico_stdlib)

pico_add_extra_outputs(tinyairbus)

pico_enable_stdio_usb(tinyairbus 1)
pico_enable_stdio_uart(tinyairbus 0)
