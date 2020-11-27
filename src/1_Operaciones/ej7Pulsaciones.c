/*
 * File:    ej7Pulsaciones.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * Ejercicio 7.
 *      Programa que calcule o numero de pulsacións que unha persoa debe ter
 *      por cada 10 segundos de exercicio, se a formula é:
 *      num. pulsacións = (220 - idade)/10
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej7Pulsaciones(){
    int tiempo,edad;
    printf("\nIntroduce edad: ");
    scanf("%d",&edad);
    printf("Las pulsaciones por cada 10 segs serán de:  %.2f",(float)((220-edad)/10));
}