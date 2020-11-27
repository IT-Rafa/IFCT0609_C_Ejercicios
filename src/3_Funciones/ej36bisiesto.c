/*
 * File:   ej36bisiesto.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Funciones Ejercicio 36.
 *      Determinar si un año es bisiesto o no.
 *      Un año es bisiesto:
 *          si es múltiplo de 400
 *          o si es multiplo de 4 sin serlo de 100
 *      (416,..,2004, 2008, 2012, 2016, 2020 )Si ; 2100 no
 */

#include "ejercicios.h" //para enlazar y declarar la funcion

//DECLARACION FUNCIONES
int isBisiesto(int anno);

void ej36bisiesto()
{
    int anno = 0;
    printf("\nIntroduce el año: ");
    scanf("%d", &anno);
    if (isBisiesto(anno)) printf("Es bisiesto");
    else printf("No es bisiesto");

}

int isBisiesto(int anno)
{
    if (anno % 400 == 0 ||
        (anno % 4 == 0 && anno % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}