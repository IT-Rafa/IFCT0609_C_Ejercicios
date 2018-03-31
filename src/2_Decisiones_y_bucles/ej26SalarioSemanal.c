/*
 * File:   ej26SalarioSemanal.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio 26.
 *      Programa que calcule el salario semanal de cada uno de sus n obrero.
 * 		El salario se obtiene de la siguiente manera:
 * 		40 horas o menos se le paga 20 por hora.
 *		Más de 40 horas se le paga 20 por cada una de
 			 las primeras 40 horas y 25 por cada hora extra.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej26SalarioSemanal()
{
    int cant, i = 0;
    printf("\nIntroduce la cantidad de obreros: ");
    scanf("%d", &cant);
    int* horasObreros;
    // The C library function void* malloc(size_t size)
    // allocates the requested memory and returns a pointer to it.
    horasObreros = (int*)malloc(cant * sizeof(int));
    for (i = 0; i < cant; i++) {
        printf("Introduce las horas del obrero %d: ", i + 1);
        scanf("%d", &horasObreros[i]);
    }
    for (i = 0; i < cant; i++) {
        printf("\n\nEl obrero %d hizo %d horas esta semana", i + 1, horasObreros[i]);
        printf("\nSe pagaran a:");
        if (horasObreros[i] <= 40) {
            printf("\nSalario normal %d horas x 20 Euros/hora = %d Euros", horasObreros[i], horasObreros[i] * 20);
        } else {
            printf("\nSalario normal 40 horas x 20 Euros/hora = 800 Euros");
            printf("\n%d horas x 25 Euros/hora = %d Euros", horasObreros[i] - 40, (horasObreros[i] - 40) * 25);
            printf("\nSueldo total: %d Euros", 800+(horasObreros[i] - 40) * 25);
        }
    }
    free(horasObreros);
}