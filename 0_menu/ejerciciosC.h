/*
 * File:	ejerciciosC.h
 * Project: IFCT0609_C_ejerciciosC
 * Author:	Rafael Martínez (it.rafamartinez@gmail.com)
 *
 * Created on 13 de febrero de 2018, 20:17
 * Modified 20/03/18
 *
 * Descripción :
 *	Define bibliotecas, variables globales, constantes y las funciones
 */

#ifndef EJERCICIOS_H
#define EJERCICIOS_H
#include "1_operaciones/ej1Circulo.c"
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416
#define MAX_EJ 1
#define MAX_OP 2

//funciones principales
int menu();
void ejecutaEj(int ej);

//funciones ejercicios
void ej1Circulo();
//Funciones útiles

#endif /* EJERCICIOS_H */