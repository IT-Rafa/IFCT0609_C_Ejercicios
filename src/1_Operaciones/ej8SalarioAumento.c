/*
 * File:    ej8SalarioAumento.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * Ejercicio 8.
 *  Programa que calcule o novo salario dun obreiro se obtivo un incremento do 25%
 *  sobre o seu salario anterior.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej8SalarioAumento(){
    int salario;
    printf("\nIntroduce el salario original: ");
    scanf("%d",&salario);
    
    printf("El salario nuevo sera de %.2f",(float)salario*1.25);
}



