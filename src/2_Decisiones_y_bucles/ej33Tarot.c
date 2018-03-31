/*
 * File:   ej33Tarot.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *  Ejercicio 33
 *      menú:
 *          1. Adivinar número.
 *          2. Tu número de tarot.
 *          3. Salir.
 *	Op 1:
 *          Genera num aleatorio y pide numero para adivinarlo.
 *          Cada intento indica si se adivino,si es mayor o menor
 *           y los intentos que lleva
 *      Op 2: 
 *          Reducir el nº de nacimiento a un digito de la siguiente 
 *          manera: 6 Enero 1900 = 6 + 1 + 1 + 9 + 0 + 0 = 18 ->
 *          1+8=9
 *                  
 */
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej33Tarot()
{
    int op;
    while (op != 3)
    {
        system("clear");
        printf("\nMenu\n");
        printf("1. Adivinar numero\n");
        printf("2. Tu numero de tarot\n");
        printf("3. Salir\n");
        printf("Elige una opcion: \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Elegimos opcion 1");
            printf("\n\nEstoy pensando un numero del 1 al 100..");
            int numRand = 1 + rand() % 99;
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

            break;
        case 2:
            printf("Elegimos opcion 2");
            int d, m, a = 0;        // dia mes año
            int a1, a2, a3, a4 = 0; // digitos del año

            printf("\n\nIntroduce el dia de tu nacimiento: ");
            scanf("%d", &d);
            printf("Introduce el mes de tu nacimiento: ");
            scanf("%d", &m);
            printf("Introduce el anno de tu nacimiento: ");
            scanf("%d", &a);
            if (d < 33 && m < 13)
            {
                a1 = a / 1000;
                a2 = (a - (a1 * 1000)) / 100;
                a3 = (a - (a1 * 1000 + a2 * 100)) / 10;
                a4 = a - (a1 * 1000 + a2 * 100 + a3 * 10);
                printf("\nEl dia es: %d", d);
                printf("\nEl mes es: %d", m);
                printf("\nEl anno es: %d", a);
                printf("\n     millares del anno: %d", a1);
                printf("\n     centena del anno: %d", a2);
                printf("\n     decena del anno: %d", a3);
                printf("\n     Unidad del anno: %d", a4);
                if (d + m + a1 + a2 + a3 + a4 < 10)
                {
                    printf("\n\n(%d) + (%d) + (%d + %d + %d + %d)", d, m, a1, a2, a3, a4);
                    printf("\nTu numero de tarot es el: %d", d + m + a1 + a2 + a3 + a4);
                }
                else
                {
                    printf("\n\n(%d) + (%d) + (%d + %d + %d + %d) = %d -> %d + %d = %d",
                           d, m, a1, a2, a3, a4, d + m + a1 + a2 + a3 + a4, (d + m + a1 + a2 + a3 + a4) / 10,
                           (d + m + a1 + a2 + a3 + a4) - (((d + m + a1 + a2 + a3 + a4) / 10)*10),
                            ((d + m + a1 + a2 + a3 + a4) / 10) +
                            ((d + m + a1 + a2 + a3 + a4) - (((d + m + a1 + a2 + a3 + a4) / 10)*10)) );
                }
            }
            else
            {
                printf("\n\nFecha erronea");
            }
            getchar();
            break;
        case 3:
            printf("Salimos del ejercicio...");
            break;
        }

        getchar();
    };
}