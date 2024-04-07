# SPDX-FileCopyrightText: 2023 Pablo Portas López <pablo.portas@udc.es>
#
# SPDX-License-Identifier: GPL-3.0-only

cmake_minimum_required(VERSION 3.26)
project(Ejemplos C)

set(CMAKE_C_STANDARD 99)

#add_executable(Ejemplo-01 Ejemplo-01.c)
add_subdirectory(./TAD_Rational)
# La carpeta Tema_3 es para las funciones del TAD Lista, no se debe tratar de compilar