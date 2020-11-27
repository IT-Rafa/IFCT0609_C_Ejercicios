/*
 * File:   ej12HorasExtra.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 16 de febrero de 2018, 20:17
 *
 * Descripción: 
 *    Ejercicio12.
 *       Ordinograma que calcule o salario semanal dun obreiro, o cal se obtén da sig. maneira:
 *          - Se traballa 40 horas ou menos se lle paga 16 € por hora
 *          - Se traballa mais de 40 horas págaselle 16 € por cada unha das primeiras 40 horas e 20 €
 *              por cada hora extra.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion
void ej12HorasExtra(){
    int horasTrab, horasExt;
    printf("\n\nIntroduce las horas trabajadas: ");
    scanf("%d", &horasTrab);
    if(horasTrab<=40){
        printf("\nSu salario sera de: %d", horasTrab*16);
    } else {
        horasExt=horasTrab-40;
        printf("\nSueldo base: %d",40*16);
        printf("\nSueldo extra: %d",horasExt*20);
        printf("\nSueldo total: %d",(40*16)+(horasExt*20) );
    }
}
