/*
 * File:    ej19Bolitas.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio19.
 *      Programa onde nunha tenda de desconto efectúase unha promoción na cal se
 *      fai un desconto sobre o valor da compra total segundo a cor da bola que o cliente
 *      saque ao pagar en caixa.
 *      Branca   -- nada
 *      Verde    -- 10%
 *      Amarela  -- 25%
 *      Azul     -- 50%
 *      Vermella -- 100%.
 *   Determinar a cantidade final que o cliente deberá pagar pola súa compra.
 *   Sábese que só hai bolas das cores mencionadas.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej19Bolitas()
{
    float precio = 0;
    int sacaBolita = 0;
    char nBolita[5][10] = { "Branca", "Verde", "Amarela", "Azul", "Vermella" };
    int descuento[5] = { 0, 10, 25, 50, 100 };
    printf("\nIntroduce el precio de los articulos: ");
    scanf("%f", &precio);
    printf("\n");
    sacaBolita = rand() % 5;
    printf("%d", sacaBolita);
    if ((sacaBolita < 1) & (sacaBolita >5)) {
        printf("\nAlgo salio mal...");
    } else {
        printf("\nSalio la bolita %s...", nBolita[sacaBolita]);
        printf("\nSu descuento sera de %d %%", descuento[sacaBolita]);
        printf("\nPrecio final: %.2f Euros", precio * (100 - descuento[sacaBolita]) / 100);
    }
}