cmake_minimum_required(VERSION 3.20)

project(BASE_DU_LANGAGE_C C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(exo1
        "TP Jour 1/hello.c"
        "TP Jour 1/variable.c"
        "TP Jour 1/main.c"
        "TP Jour 1/calculatrice.c"
        "TP Jour 1/saisie.c"
        "TP Jour 1/notes.c"
        "TP Jour 1/parite.c"
        "TP Jour 1/comparaison.c"
        "TP Jour 1/ascii.c"
        "TP Jour 1/menu.c"
        "TP Jour 1/compteur.c"
        "TP Jour 1/break_continue.c"
        "TP Jour 1/temperature.c"
        "TP Jour 1/operateurs.c"
        "TP Jour 1/moyenne.c"
        "TP Jour 1/calc_interactive.c"
        "TP Jour 1/bissextile.c"
        "TP Jour 1/caractère.c"
        "TP Jour 1/tva.c"
        "TP Jour 1/triangle.c"
        "TP Jour 1/rectangle.c"
        "TP Jour 1/cercle.c"
        "TP Jour 1/table.c"
)
