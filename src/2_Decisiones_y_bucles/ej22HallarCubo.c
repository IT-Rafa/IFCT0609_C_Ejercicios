/*
 * File:   ej22HallarCubo.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio 22.
 *      Programa que lea 10 números e obteña o seu cubo.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej22HallarCubo()
{
    int i;
    int nums[10];
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("Introduce el numero %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++) {
        if (i < 9) {
            printf(" ");
        }
        printf("%d:  %d elevadoa a 3 = %d\n", i + 1, nums[i], nums[i] * nums[i] * nums[i]);
    }
}