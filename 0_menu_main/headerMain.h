/*
 * File:	main.h
 * Project: IFCT0609_C_ejerciciosC
 * Author:	Rafael Martínez (it.rafamartinez@gmail.com)
 *
 * Created on 23 de febrero de 2018, 20:17
 *
 * Descripción :
 *	Define bibliotecas estándar y propias, variables globales, constantes y las funciones
  * relacionadas directamente con ejerciciosC_main.c
 */

#ifndef headerMain_H
#define headerMain_H

//cabeceras bibliotecas estandar usadas
#include <stdio.h>
#include <stdlib.h>

//Cabereras ejercicios
#include "../1_operaciones/ejC_1_operaciones.h"
#include "../2_Decisiones_y_bucles\ejC_2_Decisiones_y_bucles.h"
#include "../3_Funciones/ejC_3_Funciones.h"
#include "../4_Arrays/ejC_4_Arrays.h"
#include "../5_Strings/ejC_5_Strings.h"
#include "../6_Arrays_Strings_y_funciones/ejC_6_Array_Strings_y_funciones.h"
#include "../7_Matrices/ejC_7_Matrices.h"
#include "../8_Structs/ejC_8_Structs.h"

//funciones principales
int menu();
void ejecutaEj(int ej);
#define MAX_EJ 1
#define MAX_OP 2

#endif /* headerMain_H */