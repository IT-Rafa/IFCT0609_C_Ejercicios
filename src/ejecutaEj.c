/*
 * File:	ejecutaEj.c
 * Project: IFCT0609_C_ejerciciosC
 * Author:	Rafael Martínez (it.rafamartinez@gmail.com)
 *
 * Created on 13/2/2018, 20:17
 * Modified 22/03/18
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
#include "totalEjercicios.h"

 /*
Función: void ejecutaEj(int ej)
Descripción:
	Ejecuta el ejercicio recibido.
	si ejercicio no válido, muestra aviso
Retorna:
	Nada
Parámetros:
	int ej: Un entero con el ejercicio a ejecutar
*/
 void ejecutaEj(int ej)
{
    switch (ej) {
    case 0:
        printf("Eligio: Volver a Menú principal");
        break;
    case 1:
        ej1Circulo();
        break;
    case 2:
      ej2Calculos();
      break;
    case 3:
      ej3CapitalBanco();
      break;

    default:
      printf("\nNo encuentro el ejercicio\n");
    }
}
