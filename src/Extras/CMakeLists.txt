# SPDX-FileCopyrightText: 2023 Pablo Portas López
#
# SPDX-License-Identifier: CC0-1.0

cmake_minimum_required(VERSION 3.26)
project(Extras C)

set(CMAKE_C_STANDARD 99)

#add_executable(Extra-01 Extra-01.c)
add_executable(TresEnRaya TresEnRaya.c)
# Algoritmos
add_executable(BusquedaSecuencial ./Algoritmos/BusquedaSecuencial.c)
add_executable(BusquedaSecuencialCentinela ./Algoritmos/BusquedaSecuencialCentinela.c)
add_executable(BusquedaBinaria ./Algoritmos/BusquedaBinaria.c)
add_executable(BubbleSort ./Algoritmos/BubbleSort.c)
add_executable(QuickSort ./Algoritmos/QuickSort.c)