/*
 * File:    ej15Bosque.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio15.
 *         Programa onde o Gobierno Vasco desexa reforestar
un bosque que mide determinado numero de hectáreas (Resto muy largo).
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej15Bosque()
{
    float metrosC;
    printf("\nIntroducir numero hectareas: ");
    scanf("%f", &metrosC);
    printf("Quedaran repartidos de la siguiente manera:\n\n");
    printf("Piñeiros 70%% de %.2f = %.2f\n", metrosC, metrosC * 0.7);
    printf("  En este espacio entran %.2f Piñeiros\n\n", (metrosC * 0.7) / 10);
    printf("Oyameles 20%% de %.2f = %.2f\n", metrosC, metrosC * 0.2);
    printf("  En este espacio entran %.2f Oyameles\n\n", (metrosC * 0.2) / 15);
    printf("Cedros 10%% de %.2f = %.2f\n", metrosC, metrosC * 0.1);
    printf("  En este espacio entran %.2f Cedros\n", (metrosC * 0.1) / 18);
}