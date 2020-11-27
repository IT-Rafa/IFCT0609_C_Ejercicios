/*
 * File:    ej10CompraVenta.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * Ejercicio 10.
 *      Programa que obteña o prezo en que debe vender o dono dunha
 * 	tenda un artigo que compra, para obter unha ganancia do 30%.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej10CompraVenta(){
    float precio;
    printf("\nIntroduce el precio de compra en Euros: ");
    scanf("%f",&precio);
    printf("El precio de venta sera de %.2f",precio*1.30);
}