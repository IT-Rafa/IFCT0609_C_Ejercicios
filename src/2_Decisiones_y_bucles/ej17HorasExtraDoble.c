/*
 * File:    ej17HorasExtraDoble.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 *    Ejercicio17.
 *	Ordinograma que determine a cantidade de diñeiro que recibirá un traballador
 *	concepto das horas extras traballadas nunha empresa, sabendo que:
 *	cando as horas de traballo exceden de 40, o resto considéranse horas extras
 *	Horas extras valen o dobre, hasta 8 horas; a partir de ahí se pagan
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej17HorasExtraDoble()
{
    int eurosHora, horasTrab, horasExtDoble, horasExtTriple=0;
    printf("\n\nIntroduce el sueldo por hora normal: ");
    scanf("%d", &eurosHora);
    printf("Introduce las horas trabajadas: ");
    scanf("%d", &horasTrab);
    printf("\nSu salario sera de:\n");
    if (horasTrab <= 40) {
        printf("\nSueldo base a %d Euros la hora por %d horas son : % d\n ", eurosHora,horasTrab, horasTrab * eurosHora);
    } else if (horasTrab <= 48) {
        horasExtDoble = horasTrab - 40;
        printf("\nSueldo base a %d Euros la hora por 40 horas son: %d Euros", eurosHora, 40 * eurosHora);
        printf("\n%d horas extras dobles a %d la hora son: %d Euros",
            horasExtDoble, eurosHora * 2, horasExtDoble * eurosHora * 2);
        printf("\nSueldo total es de %d Euros", (40 * eurosHora) + (horasExtDoble * eurosHora * 2));
    } else {
        horasExtDoble = 8;
        horasExtTriple = horasTrab - 48;
        printf("\nSueldo base a %d Euros la hora por 40 horas son: %d Euros",eurosHora,eurosHora*40);
        printf("\n8 horas extras dobles a %d la hora son: %d Euros", eurosHora * 2, 8 * eurosHora * 2);
        printf("\n%d horas extras triples a %d la hora son: %d Euros", horasExtTriple, eurosHora * 3, horasExtTriple * eurosHora * 3);
        printf("\nSueldo total es de: %d Euros", (40 * eurosHora) + (8 * eurosHora * 2) + (horasExtTriple * eurosHora * 3));
    }
}