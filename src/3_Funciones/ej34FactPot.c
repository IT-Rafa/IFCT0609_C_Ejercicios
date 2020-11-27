/*
 * File:   ej34FactPot.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * 		Ejercicio 34
 *		Hacer programa que lea un numero y visualize un menu:
 *           - Factorial
 *           - Potencia
 *           - Salir
*/
#include "ejercicios.h" //para enlazar y declarar la funcion


void ej34FactPot()
{
    system("clear");
    int i, op, num, expo, result = 0;

    printf("Introduce un numero: ");
    scanf("%d", &num);
    while (op != 3)
    {

        printf("\nMenu\n");
        printf("1. Factorial\n"); // 5*4*3*2*1
        printf("2. Potencia\n");// 5^4  5*5*5*5
        printf("3. Salir\n");
        printf("Elige una opcion: \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
        {
            result=num; //5
            for (i = 2; i < num; i++) // num=5; i= 2,3,4
            {
                
                result *= i; // 5*2 | 10*3 | 30*4 | fin: 120
            }
            printf("\nEl factorial es: %d", result);
            break;
        }
        case 2:
        {
            result=num; //5
            printf("\nTambien vamos a necesitar el exponente: ");
            scanf("%d", &expo); //4
            for (i = 1; i < expo; i++)
            {
                result *= num; //5*5*5*5
            }
            printf("\nLa potencia es: %d", result);
            break;
        }
        case 3:
        {
            printf("\nFin programa\n");
            break;
        }
        }

        getchar();
    };
}
