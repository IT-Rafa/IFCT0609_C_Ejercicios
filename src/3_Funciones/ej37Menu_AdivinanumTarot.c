/*
 * File:   ej37Menu_AdivinanumTarot.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Funciones - Ejercicio 37.
 *      Mostrar menu
 *          1- Adivina número
 *          2- Tu número de tarot
 *          3- Salir
 * 
 *      1- Muestra número aleatorio (0-50), pide número, indica si es menor o mayor
 *          y vuelve a pedir número hasta que lo adivines.
 *              Ej: Número aleatorio = 7
 *                  Dame número: 15
 *                      Es menor que 15
 *  *               Dame número: 6
 *                      Es mayor que 6
 *  *  *            Dame número: 6
 *                      ¡¡Correcto!! Es el 7 y necesitaste 3 intentos.
 * 
 */

//DECLARAMOS FUNCIONES
void adivinaNumero(); // Función completa para adivinar número
int numTarot(int dia, int mes, int anno); // Función que, dandole una fecha, te devuelve el número del tarot

#include "ejercicios.h"

void ej37Menu_AdivinanumTarot()
{
    int op, d, m, a = 0; // opcion , dia , mes , año
    while (op != 3)
    {
        system("clear");
        printf("\nMenu\n");
        printf("1. Adivinar un número\n");
        printf("2. Tu número de tarot\n");
        printf("3. Salir\n");
        printf("Elige una opción: \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            adivinaNumero();
            break;
        case 2:
            

            printf("\n\nIntroduce el dia de tu nacimiento: ");
            scanf("%d", &d);
            printf("Introduce el mes de tu nacimiento: ");
            scanf("%d", &m);
            printf("Introduce el anno de tu nacimiento: ");
            scanf("%d", &a);
            printf("\n Tu número de tarot es el %d \n",numTarot( d, m, a) );

            break;
        case 3:
            printf("Salimos del ejercicio...");
            break;
        }

        pause();
    };
}

void adivinaNumero()
{

    printf("\n\nEstoy pensando un numero del 1 al 50..");
    int numRand = 1 + rand() % 49;
    int numUs = 0;
    int intentos = 0;
    do
    {
        ++intentos;
        printf("\nPrueba un numero (es el %d): ", numRand);
        scanf("%d", &numUs);
        if (numRand < numUs)
        {
            printf("\nEl numero es menor");
        }
        else
        {
            printf("\nEl numero es mayor");
        }
    } while (numRand != numUs);

    printf("\nLo adivinaste!!!");
    if (intentos == 1)
    {
        printf("\nA LA PRIMERA??...\n Sospecho trampa...");
    }
    else
    {
        printf("\nLo conseguiste en %d intentos.", intentos);
    }
}
int numTarot(int dia, int mes, int anno)
{
    int a1, a2, a3, a4 = 0;
    if (dia < 33 && mes < 13)
    {
        //Separamos el año en digitos Ej: 1984 = 1+9+8+4
        a1 = anno / 1000;
        a2 = (anno - (a1 * 1000)) / 100;
        a3 = (anno - (a1 * 1000 + a2 * 100)) / 10;
        a4 = anno - (a1 * 1000 + a2 * 100 + a3 * 10);
        if (dia + mes + a1 + a2 + a3 + a4 < 10)
        {
            return dia + mes + a1 + a2 + a3 + a4;
        }
        else
        {
            return ((dia + mes + a1 + a2 + a3 + a4) / 10) +
                   ( (dia + mes + a1 + a2 + a3 + a4) -
                   (((dia + mes + a1 + a2 + a3 + a4) / 10) * 10));
        }
    }
    else
    {
        printf("\n\nFecha erronea");
    }
    getchar();
}