# Copyright 2021 Niiode. All Rights Reserved.


# === Projects ===

project(Prototype)


# === Inputs ===

# Parse cpp files.
file(GLOB_RECURSE SOURCES "*.cpp" "*.hpp")

# Add executable target.
add_executable(Prototype ${SOURCES})


# === Dependencies ===

# Add library dependencies.
target_link_libraries(Prototype PRIVATE NBrain)


# === Tests ===

add_test(NAME CPrototype COMMAND Prototype --config $<CONFIGURATION> --exe $<TARGET_FILE:Prototype>)