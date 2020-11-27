/*
 * File:   ej38Factorial.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * 		Ejercicio 38
 *		Hacer programa que calcule el factorial de un número y visualize el resultado
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

//DECLARAMOS FUNCIONES
int factorial(int n); //Introduces número y devuelve su factorial

void ej38Factorial()
{
    int num;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    printf("\n Su factorial es: %d", factorial(num));
}

int factorial(int n)
{// 5*4*3*2*1 =120
    int i;
    int result=n;
    for (i = 2; i < n; i++) // n=5; i= 2,3,4
    {

        result *= i; // 5*2 | 10*3 | 30*4 | fin: 120
    }
    return result;
}