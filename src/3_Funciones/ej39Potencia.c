/*
 * File:   ej39Potencia.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * 		Ejercicio 39
 *		Hacer programa que calcule la potencia x de un número y visualize el resultado
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

//DECLARAMOS FUNCIONES
int potencia(int n,int expo); //Introduces número y devuelve su factorial

void ej39Potencia()
{
    int num,expo;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    printf("y su exponente: ");
    scanf("%d", &expo);
       
    printf("\n %d Elevado a %d es: %d\n", num, expo, potencia(num,expo) );
}

int potencia(int n,int expo)
{// 5*5*5*5 =120
    int i;
    int result=n; // 5
    for (i = 1; i < expo; i++) // expo=4; i= 1,2,3
    {

        result *= n; // 5 
    }
    return result;
}