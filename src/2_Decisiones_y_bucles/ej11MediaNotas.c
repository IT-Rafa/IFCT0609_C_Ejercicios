/*
 * File:   ej11MediaNotas.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 16 de febrero de 2018, 20:17
 *
 * Descripción: 
 * Ejercicio 10.
 *      Programa que determine se un alumno aproba a suspende un curso, sabendo
 *      que aprobase se a súa media de tres cualificacións é maior ou igual a 70;
 *      suspende en caso
contrario
*/
#include "ejercicios.h" //para enlazar y declarar la funcion
void ej11MediaNotas(){
    float nota1, nota2,nota3,media;
    
    printf("\n\nIntroduce la primera nota: ");
    scanf("%f",&nota1);
    printf("Introduce la segunda nota: ");
    scanf("%f",&nota2);
    printf("Introduce la tercera nota: ");
    scanf("%f",&nota3);
    media=(nota1+nota2+nota3)/3;
    printf("La media de las notas es: %.2f\n",media);
    if (media>=7){
        printf("\n¡¡ ESTAS APROBADO !!");
    } else{
            printf("Toca chapar en verano...");
        }
}
