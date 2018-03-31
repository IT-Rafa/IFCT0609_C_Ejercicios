/*
 * File:    ej5Descuento15.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción: 
 *   Programa que calcule o total para pagar por un cliente que compra
 *    un determinado produto nunha tenda que ofrece un desconto do 15%
 *    sobre o total da compra.
 */

#include "ejercicios.h" //para enlazar y declarar la funcion

void ej5Descuento15(){
    int precio;
    printf("\nPrecio del producto: ");
    scanf("%d",&precio);
    printf("El descuento sera de %.2f Euros, es decir que el precio total es %.2f Euros ",precio*0.15,precio*0.85);
}