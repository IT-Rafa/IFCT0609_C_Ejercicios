/*
 * File:    ej18Utilidades.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio18.
 *	Programa que calcule a utilidade que un traballador recibe na
 *      repartición anual de utilidades se este asígnaselle como unha
 *      porcentaxe do seu salario mensual que depende da súa antigüidade
 *      na empresa de acordo coa seguinte táboa:
 *          - Menos de 1 año            -- 5%
 *          - Entre 1 y 2(no incluido)  -- 7%
 *          - Entre 2 y 5(no incluido)  -- 10%
 *          - Entre 5 y 10(no incluido) -- 15%
 *          - 10 o mas                  -- 20%
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej18Utilidades()
{
    int util, salario, aumento = 0;
    printf("\nIntroduce el salario mensual: ");
    scanf("%d", &salario);
    printf("Introduce utilidade en annos: ");
    scanf("%d", &util);
    if (util >= 10) {
        aumento = 20;
    } else if (util >= 5) {
        aumento = 15;
    } else if (util >= 2) {
        aumento = 10;
    } else if (util >= 1) {
        aumento = 7;
    } else {
        aumento = 5;
    }
    printf("\nEl salario + aumento por utilidade es: %d", salario + (salario * aumento / 100));
}