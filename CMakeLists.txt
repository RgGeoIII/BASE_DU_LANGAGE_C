cmake_minimum_required(VERSION 3.20)
project(BASE_DU_LANGAGE_C C)

set(CMAKE_C_STANDARD 11)

add_executable(exo1 "TP Jour 1/hello.c"
        "TP Jour 1/variable.c")
# add_executable(main_c "Main.c")      # si tu as un Main.c avec un main()
# add_executable(main_cpp "main.cpp")  # si tu gardes un main.cpp
