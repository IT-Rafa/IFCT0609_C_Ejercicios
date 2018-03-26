/*
 * File:	ejerciciosC_main.c
 * Project: IFCT0609_C_ejerciciosC
 * Author:	Rafael Martínez (it.rafamartinez@gmail.com)
 *
 * Created on 13 de febrero de 2018, 20:17
 * Modified 20/03/18
 *
 * Descripción: 
 *     Entrada principal
 *         - Si se ejecuta con 1 argumentos. ejerciciosC ej1
 *             Ejecuta el ejercicio correspondiente
 *         - Si se ejecuta sin argumentos. ejercicioC
 *             Aparece un menú
 */

//Cabecera bibliotecas estándar y propias, variables globales, constantes y las funciones
// relacionadas directamente con ejerciciosC_main.c
#include "headerMain.h"

/*Funcion principal que coge argumentos desde línea de comandos
 * Devuelve int --> Estado programa
 * Recibe:
 *	 - int argc: Cantidad de argumentos, incluido el comando
 *	 - char* argv[]: puntero a argv[], que también es un puntero al primer caracter de argv
 * (consola) nombreEjecutable argumento1 --> argc=2 argv={"ejercicioC","argumento1"}
*/

int main(int argc, char* argv[])
{
    int ej = 0; // Ejercicio a ejecutar
    int arg1_0 = 0; // Primer caracter del argumento 1 de consola, como entero
    int arg1_1 = 0; // segundo caracter del argumento 1 de consola, como entero
    int cantLetras = 0;
    //Controlamos argumentos
    switch (argc) {
    case 1:
        printf("\nNo eligió argumentos, así que mostramos menú.\n");
        break;
    case 2:

        //Contamos ancho argv[1]
        for (cantLetras = 0; argv[1][cantLetras] != '\0'; ++cantLetras) {
        }
        //Comprobamos que son dos caracteres
        if (cantLetras == 1 && cantLetras == 2) {
            //Comprobamos si el primer caracter es un número que no sea 0
            if (argv[1][0] > '0' && argv[1][0] <= '9') {
                //Comprobamos si es solo 1 caracter y lo pasamos a entero
                if (cantLetras == 1) {
                    ej = (int)(argv[1][0] - 48);
                    printf("\nEs un caracter. ej=%d\n", ej);
                } else { //Si no serán 2 caracteres
                    //Comprobamos el segundo
                    if (argv[1][1] >= '0' && argv[1][1] <= '9') {
                        //Pasamos los dos caracteres a 1 entero
                        arg1_0 = (int)(argv[1][0] - 48);
                        arg1_1 = (int)(argv[1][1] - 48);
                        ej = arg1_0 * 10 + arg1_1;
                        printf("\nSon dos caracteres. ej=%d\n", ej);
                    } else {
                        printf("\nEl segundo caracter no es un número.\n");
                    }
                }
            } else {
                printf("\nEl primer caracter no es un número.\n");
            }
        } else {
            printf("\nArgumento demasiado largo. Debe ser número de 2 dígitos.\n");
        }
        if (ej > 0 && ej <= MAX_EJ) {
            printf("\nEJECUTAMOS EJERCICIO %d\n", ej);

        } else {
            printf("No es un ejercicio válido.\n");
        }
        printf("\nHacemos pausa\n");
        break;
    default:
        printf("\nDemasiados argumentos\n");
    }
    do {
        ej = menu();
        printf("Devuelve %d", ej);
    } while (ej != 0);
    printf("\nFin programa\n");
    return 0;
}
