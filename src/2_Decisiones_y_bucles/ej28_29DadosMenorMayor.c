/*
 * File:   ej28_29DadosMenorMayor.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio 28 y 29.
 *      28 Programa que calcule el menor valor de un conjunto de n números dados.
 *		29 Programa que calcule el mayor valor de un conjunto de n números dados.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej28_29DadosMenorMayor()
{
    int i, j, cantDados, cantTiradas;
    int mayor = 0;
    int menor = 0;
    int* dados;
    int* tiradas;
    printf("Introduce el numero de dados: ");
    scanf("%d", &cantDados);
    printf("Indica el numero de tiradas: ");
    scanf("%d", &cantTiradas);
    dados = (int*)malloc(cantDados * sizeof(int));
    tiradas = (int*)malloc(cantTiradas * sizeof(int));

    for (i = 0; i < cantTiradas; i++) {
        for (j = 0; j < cantTiradas; j++) {
            // dados[i][j] = rand() % 6;
            //printf("El dado numero %d saco %d", i + 1, dados[i][j]);
        }
    }
    free(dados);
}