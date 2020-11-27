/*
 * File:   ej30SumarSegundo.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio 30.
 *		Programa que recibe como datos de entrada una hora expresada en horas, minutos y
 *		segundos que nos calcula y escribe la hora, minutos y segundos que serán,
 *		transcurrido un segundo
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej30SumarSegundo()
{
    int h, m, s;
    printf("\nIntroduce la hora: ");
    scanf("%d", &h);
    printf("Introduce los minutos: ");
    scanf("%d", &m);
    printf("Introduce los segundos: ");
    scanf("%d", &s);
    printf("\n\nSon las %d:%d:%d", h, m, s++);
    if (s == 60) {
        s = 0;
        m++;
        if (m == 60) {
            m = 0;
            h++;
            if (h == 24) {
                h = 0;
            }
        }
    }
    printf("\nDentro de un segundo seran las: las %d:%d:%d", h, m, s);
}