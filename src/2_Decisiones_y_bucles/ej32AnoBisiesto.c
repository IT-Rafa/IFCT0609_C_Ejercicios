/*
 * File:   ej32AnoBisiesto.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * 		Ejercicio 32
 *		Escribir un programa que determine si un determinado año es bisiesto o no
 *  (416,..,2004, 2008, 2012, 2016, 2020 ). 2100 no
 *		Un año es bisiesto si es múltiplo de 400 o si es múltiplo de 4 sin serlo de 100.
 *		Por ejemplo, 416 es bisiesto por ser múltiplo de 4 sin serlo de 100
 *      416%100=16 o (416%4=0(104) o 416%100=16) -->  f|(t |f)->f|t->t
 *      2004%100=4 o (2004%4=0(501) o 2004%100=4) -->  f|(t |f)->f|t->t
 *      2100%100=0
 */
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej32AnoBisiesto() {
    int anno = 0;
    printf("\nIntroduce el anno: ");
    scanf("%d", &anno);
    if (anno % 400 == 0 ||
            (anno % 4 == 0 && anno % 100 != 0)) {
        printf("\nEs bisiesto...");
    } else {
        printf("\nNo es bisiesto");
    }
}