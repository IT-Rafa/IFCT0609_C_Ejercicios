/*
 * File:   ej35Rectangulo.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Funciones Ejercicio 35.
 *      Hallar el área y el perímetro de un rectangulo, después de leer
 *      su base y su altura, y que muestre los resultado.
 *    modificado pedir datos 2 rectangulos y comparar sus datos
 */
#include "ejercicios.h" //para enlazar y declarar la funcion

//DECLARAMOS LAS FUNCIONES
int areaR(int base, int altura); // Halla el area del rectangulo
int periR(int base, int altura); // Halla el perimetro de rectangulo
//FUNCION PRINCIPAL DEL EJERCICIO

void ej35Rectangulo() {
    int base1, altura1;
    int base2, altura2;
    base1 = base2 = altura1 = altura2 = 0;
    printf("\n\nIntroduce la base del primer rectangulo en cm: ");
    scanf("%d", &base1);
    printf("Introduce la altura del primer rectangulo en cm: ");
    scanf("%d", &altura1);
    printf("\n\nIntroduce la base del segundo rectangulo en cm: ");
    scanf("%d", &base2);
    printf("Introduce la altura del segundo rectangulo en cm: ");
    scanf("%d", &altura2);

    printf("\nEl area del primer rectangulo es: %d cm cuadrados", areaR(base1, altura1));
    printf("\nEl perimetros es: %d cm", periR(base1, altura1));
    printf("\nEl area del segundo rectangulo es: %d cm cuadrados", areaR(base2, altura2));
    printf("\nEl perimetros es: %d cm", periR(base2, altura2));

    if (areaR(base1, altura1) < areaR(base2, altura2)) {
        printf("\nEl area del Rectangulo 2 (%d) es mayor que la del Rectangulo 1 (%d)",
                areaR(base2, altura2), areaR(base1, altura1));
    } else {

        if (areaR(base1, altura1) == areaR(base2, altura2)) {
            printf("\nSon iguales...");
        } else {
            printf("\n\nEl area del Rectangulo 1 (%d) es mayor que la del Rectangulo 1 (%d)",
                    areaR(base1, altura1), areaR(base2, altura2));
        }

    }


}
//RESTO FUNCIONES

int areaR(int b, int a) {

    return b*a;
}

int periR(int b, int a) {
    return 2 * (a + b);
}