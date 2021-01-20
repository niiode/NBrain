# Copyright 2021 Niiode. All Rights Reserved.



# === Projects ===

project(NBrain)



# === Inputs ===

# Parse files.
file(GLOB_RECURSE SOURCES "Source/*" "Include/*")

# Add dynamic library target.
add_library(NBrain SHARED ${SOURCES})



# === Include directories ===

target_include_directories(NBrain PUBLIC Include)
target_include_directories(NBrain PUBLIC Include/NBrain)



# === Compile features ===

# Standard
target_compile_features(NBrain PUBLIC c_std_11)
target_compile_features(NBrain PUBLIC cxx_std_17)

# Multithreaded compilation.
if(MSVC AND NOT "${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang") # Not allowed on Clang-cl for Visual Studio.
	target_compile_options(Engine PRIVATE /MP)
endif()



# === Platforms ===

message("Platform: ${CMAKE_SYSTEM_NAME}")



# === Architecture ===

message("Architecture:  ${CMAKE_HOST_SYSTEM_PROCESSOR}")
