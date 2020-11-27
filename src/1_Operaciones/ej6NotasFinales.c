/*
 * File:    ej6NotasFinales.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * Ejercicio 6.
 *     Programa que calcule a cualificación final na materia de Fundamentos de Programación.
 *	Dita  cualificación componse  das  seguintes  porcentaxes:
 *         - 55% da  media  das  súas  tres  cualificacións  parciais.
 *         - 30% da  cualificación  do exame  final.
 *         - 15% da  cualificación  dun traballo final.
*/

#include "ejercicios.h" //para enlazar y declarar la funcion

void ej6NotasFinales() {
    int notaPar1,notaPar2,notaPar3,examFinal,trabajo;
    printf("\nIntroduce la nota del primer parcial: ");
    scanf("%d",&notaPar1);
    printf("\nIntroduce la nota del segundo parcial: ");
    scanf("%d",&notaPar2);
    printf("\nIntroduce la nota del tercero parcial: ");
    scanf("%d",&notaPar3);
    printf("\nIntroduce la nota del examen final: ");
    scanf("%d",&examFinal);
    printf("\nIntroduce la nota del trabajo final: ");
    scanf("%d",&trabajo);
    printf("\nLa nota final es:\n");
    printf("\n  - 55 para de las tres notas: %.2f",(float)(notaPar1+notaPar2+notaPar3)/3);
    printf("\n  - 30 del examen final: %d", examFinal);
    printf("\n  - 15 del trabajo final: %d", trabajo);
    printf("\nResultado es: %.1f: ",(float)( ( (notaPar1+notaPar2+notaPar3) /3*0.55)+(examFinal*0.30)+(trabajo*0.15) ));
}