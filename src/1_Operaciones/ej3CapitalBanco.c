/*
 * File:    ej3CapitalBanco.c
 * Project: IFCT0609_C_ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 *
 * Descripción: 
 * Ejercicio 3.
 *	Programa  que  lea  o capital  que  un individuo desexa  investir  nun banco e  quere  saber
 *	canto  diñeiro  gañará  despois  dun mes  se  o banco  paga  a  razón de  2% mensual.
*/
#include <stdio.h>
void ej3CapitalBanco(){
    int capital;
    printf("\nIntroduce el capital en Euros: ");
    scanf("%d",&capital);
    printf("hola");
    printf("\nganara %.2f Euros al mes",(float)(capital*0.02));
    
}
