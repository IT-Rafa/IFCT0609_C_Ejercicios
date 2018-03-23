/*
 * File:	menu.c
 * Project: IFCT0609_C_ejerciciosC
 * Author:	Rafael Martínez (it.rafamartinez@gmail.com)
 *
 * Created on 13 de febrero de 2018, 20:17
 * Modified 21/03/18
 *
 * Descripción:
 *		Muestra el menú,pide opción para submenú,
 *		muestra submenu, pide ejercicio y retorna ejercicio.
 *		NOTA: SE PUEDE ELEGIR CUALQUIER EJERCICIO VÁLIDO AUNQUE NO SALGA
			EN SUBMENÚ
 */

//Cabecera bibliotecas estándar y propias, variables globales, constantes y las funciones
// relacionadas directamente con ejerciciosC_main.c
#include "headerMain.h"

int subMenu(int op);			// Recibe opción del menú y devuelve un ejercicio válido
void mostrarMenu();				//Solo muestra opciones del menú
void mostrarSubmenu(int op);	//Solo muestra los distintos submenús, según op

int menu() {
    int op = 0; //opción del menú
    int ej = 0; //Ejercicio a devolver
	do{
            mostrarMenu();
        } while (op != 0);

}

//Muestra menú principal

void mostrarMenu()
{
    printf("\nMENU EJERCICIOS C\n");
    printf("-----------------\n");
    printf("1. Sencillos----------------------- Ejercicios del  1 al 10\n");
    printf("2. Estructuras de Control --------- Ejercicios del 11 al 33\n");
    printf("3. Funciones ---------------------- Ejercicios del 34 al 42\n");
    printf("4. Arrays unidimensionales -------- Ejercicios del 43 al 46\n");
    printf("5. Strings ------------------------ Ejercicios del 47 al 54\n");
    printf("6. Arrays y Strings con funciones-- Ejercicios del 55 al 60\n");
    printf("7. Arrays bidimensionales --------- Ejercicios del 61 al --\n");
    printf("8. structs ------------------------ Ejercicios del 61 al --\n");
    printf("9. Varios ------------------------- Pendiente numeros sueltos\n\n");
    printf("0. Salir  ---------------------------------------------------\n\n");
}