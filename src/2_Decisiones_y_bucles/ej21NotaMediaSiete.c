/*
 * File:   ej21NotaMediaSiete.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio 21.
 *      Ordinograma que lea 7 notas e calcule a nota media
 *      desas 7 cualificacións.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej21NotaMediaSiete()
{
    int i, sumaNotas = 0;
    int notas[7];
    printf("\n");
    for (i = 0; i < 7; i++) {
        printf("Introduce la nota numero %d: ", i + 1);
        scanf("%d", &notas[i]);
        sumaNotas += notas[i];
    }
    printf("La nota media es de: %.2f", (float)sumaNotas / 7);
}