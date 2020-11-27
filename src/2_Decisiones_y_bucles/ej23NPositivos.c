/*
 * File:   ej23NPositivos.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio 23.
 *      Programa que lea 10 números e imprima soamente os números positivos.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej23NPositivos()
{
    int i;
    int nums[10];
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("Introduce el numero %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < 10; i++) {
        if (nums[i] > 0) {
            printf("\n%d", nums[i]);
        }
    }
}