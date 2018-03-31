/*
 * File:   ej25TablaMult.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio 25.
 *      Programa que calcule e imprima la tabla de multiplicar de un número cualquiera.
 * 		Imprimir el multiplicando, el multiplicador y el producto.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej25TablaMult()
{
    int i,num = 0;
    printf("\nIntroduce el numero para hacer la tabla: ");
    scanf("%d",&num);
    printf("\nTabla del %d\n\n", num);
    for (i = 0; i <= 10;i++){
        printf("%d x %d = %d\n", num,i,num*i);
        }
}