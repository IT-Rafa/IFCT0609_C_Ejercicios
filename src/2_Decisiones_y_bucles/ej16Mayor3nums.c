/*
 * File:    ej16Mayor3nums.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio16.
 *         Programa que lea tres números diferentes e imprimir
 *         o numero maior dos tres.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion


void ej16Mayor3nums(){
    int n1,n2,n3,mayor=0;
    printf("\nIntrocuce el primer numero: ");   
    scanf("%d",&n1);
    printf("Introcuce el segundo numero: ");   
    scanf("%d",&n2);
    printf("Introcuce el tercero numero: ");   
    scanf("%d",&n3);
    
    if(n1>=n2){
        if(n1>=3){
            mayor=n1;
        }else{
            mayor=n3;
        }
    }else{
        if(n2>=n3){
            mayor=n2;
        }else{
            mayor =n3;
        }
    }
    printf("El numero mayor es: %d",mayor);
}
