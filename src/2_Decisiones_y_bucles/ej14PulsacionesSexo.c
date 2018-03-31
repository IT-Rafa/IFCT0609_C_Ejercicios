/*
 * File:    ej14PulsacionesSexo.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio14.
 *      Programa que calcule o número de pulsacións que debe ter unha persoa 
 *      por cada 10 segundos de exercicio aeróbico.
 *        A fórmula que se aplica cando o sexo é feminino é:
 *              num. pulsacións = (220 - idade)/10
 *        e se o sexo é masculino:
 *              num.pulsacións = (210 - idade)/10
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej14PulsacionesSexo(){
    char genero[15];
    char gen=0;
    int edad;
    printf("\nIntroduce genero(f para femenino m para masculino: )");
    scanf("%s",genero);
    gen=genero[0];
    
    printf("Introduce la edad: ");
    scanf("%d",&edad);
    printf("\ngenero: %s;\n gen: %c\n\n", genero,gen);

    if (gen=='f'| gen=='F'){
        printf("las pulsaciones ideales son: %.2f", (float)(220-edad)/10);
    } else {
        if (gen=='m'|gen=='M'){
            printf("las pulsaciones ideales son: %.2f", (float)(210-edad)/10);
        }else{
            printf("Los datos introducidos son incorrectos");
        }
    }
}