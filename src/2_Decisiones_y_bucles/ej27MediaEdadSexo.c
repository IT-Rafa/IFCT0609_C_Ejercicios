/*
 * File:   ej27MediaEdad.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio 27.
 *      Programa que calcule el promedio de edades de hombres y
 * 		mujeres, de n alumnos de un grupo de alumnos.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej27MediaEdadSexo()
{
    int i, cant;
    int cantH = 0;
    int cantM = 0;
    int* edades;
    float mediaEdadH=0;
    float mediaEdadM = 0;
    char sexo;
    printf("\nIntroduce la cantidad de alumnos: ");
    scanf("%d", &cant);
    edades = (int*)malloc(cant * sizeof(int));
    for (i = 0; i < cant; i++) {
        printf("\nIntroduce la edad del alumno %d: ", i + 1);
        scanf("%d", &edades[i]);
        getchar(); //para vaciar buffer teclado
        printf("Introduce el sexo del alumno %d (h:hombre,m:mujer): ", i + 1);
        scanf("%c", &sexo);

        if (sexo == 'h') {
            mediaEdadH += edades[i];
            cantH++;
           // printf("Media de hombres: %c - %2.f - %d", sexo, mediaEdadH, cantH);
        } else {
            mediaEdadM += edades[i];
            cantM++;
           // printf("Media de mujeres: %c - %2.f - %d", sexo, mediaEdadM, cantM);
        }
    }
    free(edades);
    printf("\n\nLa media de edad de los hombres es: %.2f", mediaEdadH / cantH);
    printf("\nLa media de edad de las mujeres es: %.2f", mediaEdadM / cantM);
    printf("\nLa media de edad total es: %.2f", (mediaEdadM + mediaEdadH) / (cantM + cantH));
}