/*
 * File:    ej2Calculos.c
 * Project: IFCT0609_C_ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 *
 * Descripción: 
 *     Programa que lea dous números, calculando e escribindo o valor da:
 *      Pide 2 números
 *      Muestra su suma,Resta,Producto y Division con resto
 */
#include <stdio.h>
void ej2Calculos() {
	int num1, num2;
	printf("\nIntroduce el primer numero: ");
	scanf("%d", &num1);
	printf("Introduce el segundo numero: ");
	scanf("%d", &num2);

	printf("\nLos numeros son: %d y %d\n", num1, num2);
	printf("\nLa suma da: %d + %d = %d\n", num1,num2,num1 + num2);
	printf("\nLa resta da: %d - %d = %d\n", num1,num2,num1 - num2);
	printf("\nLa multiplicacion da: %d * %d = %d\n", num1, num2, num1 * num2);
	printf("\nLa division da: %d / %d = %d (con resto %d)\n", num1, num2, num1 / num2, num1 % num2);

}
