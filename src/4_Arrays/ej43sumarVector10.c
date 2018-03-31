/*
 * File:   ej43sumarVector10.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *  Array unidimensional - ejercicio 43
 *      - Calcular la suma de todos los elementos de un vector de orden 10,
 *           así como su valor máximo y mínimo.
 *      - Los valores se introducirán por teclado y se visualizará 
 *          tanto la suma, como el máximo y el mínimo.
 * 
 */
#include "ejercicios.h"

void ej43sumarVector10(){
    int a[10]; // array contenedor de 10 elementos
    //Introducimos valores
    for(int i=0;i<10;i++){
        printf("Introduce el valor de la posición %d: ",i);
        scanf("%d",&a[i]);
    }
    //Mostramos valores
    for(int i=0;i<10;i++){
        printf("%d: \n",a[i]);
    }
    

}
