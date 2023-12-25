cmake_minimum_required(VERSION 3.26)
project(Pro2324 C)

set(CMAKE_C_STANDARD 99)

# Por defecto
add_executable(Pro2324 src/main.c)
# Boletín 1
add_subdirectory(./src/Boletin_1)
# Boletín 2
add_subdirectory(./src/Boletin_2)
# Boletín 3
add_subdirectory(./src/Boletin_3)
# Boletín 4
add_subdirectory(./src/Boletin_4)
# Prácticas
add_subdirectory(./src/Practicas)
# Extras
add_subdirectory(./src/Extras)
# Examenes
add_subdirectory(./src/Examenes)