/*
 * File:	ejerciciosC.h
 * Project: IFCT0609_C_ejerciciosC
 * Author:	Rafael Martínez (it.rafamartinez@gmail.com)
 *
 * Created on 10 de febrero de 2018, 20:17
 * Modified 20/03/18
 *
 * Enunciado:
 *	Ejercicio 1. Pide el radio:
 *		Muestra:
 *			- La longitud de la circunferencia Longitud = PI * Radio
 *			- El área del circulo. Area = PI * Radio al cuadrado
 *			- El volumen de la esfera. Volumen = 4/3 * PI * Radio al cubo
 *				correspondientes
 */

//Cabecera con las declaraciones de las funciones de los ejercicios,
// bibliotecas,declaraciones globales, etc
#include "ejC_1_operaciones.h"

void ej1Circulo()
{
    float radio;
    printf("Introduce el radio en cms: ");
    scanf("%f", &radio);
    printf("\nCIRCUNFERENCIA\n");
    printf("El radio es de: %.2f cms\n", radio);
    printf("El diámetro es de: %.2f cms\n", radio * 2);
    printf("El perímetro o longitud es de: %.2f cms\n", PI * radio * 2);
    printf("El área es: %.2f cms cuadrados\n", PI * (radio * radio));
    printf("\nESFERA\n");
    printf("El área es: %.2f cms cuadrados\n", 4 * PI * (radio * radio));
    printf("El volumen es: %.2f cms al cubo\n", ((4 * PI * (radio * radio * radio)) / 3));
}