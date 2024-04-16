# SPDX-FileCopyrightText: Facultade de Informática de A Coruña
#
# SPDX-License-Identifier: CC-BY-4.0

cmake_minimum_required(VERSION 3.22)
project(TAD_Rational)

set(CMAKE_C_STANDARD 99)

add_executable(Rational_struct main.c
        rational_struct.c
        rational_struct.h)
add_executable(Rational_pointer main.c
        rational_pointer.c
        rational_pointer.h)