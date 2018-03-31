/*
 * File:   ej40Combinaciones.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * Ejercicio 41.
 *	Calcular salario bruto n trabajadores
 *          - Un trabajador siempre trabaja más de 38 horas
 *          - Las 38 primeras horas se cobran a 20 Euros
 *          - El resto se cobran a 1.5 veces la normal 
 *      Usar funciones
 *          - nº trabajadores
 *          - Pedir horas trabajadas por empleado
 *          - Calcular horas extras
 *          - Calcular salario por horas extras
 *          - Calcular salario total
 *          - Mostrar salario bruto
 *          
 */
#include "ejercicios.h" //para enlazar y declarar la funcion

//DECLARACION FUNCIONES
int pedirCantTrab ();
int pedirHorasTrab ();
int calcHorasExtras (int horas);
float calcSalarioExtra (int horasExt);
float calcSalarioTotal (int horas);
void mostrarSalario (int horas);

//COMIENZO EJERCICIO
void ej41SalarioNtrabajadores () { 
    int i = 0;
    int cantTrab = pedirCantTrab ();
    printf ("Trabajadores introducidos: %d", cantTrab);
    int horasTrabajadores[cantTrab];

    //Guardar datos
    for (i = 0; i < cantTrab; i++) {
        printf ("\nDatos trabajador %d: ", i + 1);
        horasTrabajadores[i] = pedirHorasTrab ();
    }

    //Mostrar datos
     for (i = 0; i < cantTrab; i++) {
        printf ("\nSUELDO TRABAJADOR [%d]",i+1);
        mostrarSalario(horasTrabajadores[i]);
    }
}

//IMPLANTACIÓN FUNCIONES
int pedirCantTrab () {
    int cant = 0;

    printf ("\nIntroduce la cantidad de trabajadores: ");
    scanf ("%d", &cant);
    return cant;
}

int pedirHorasTrab () {
    int horas = 0;
    do {
        printf ("\n  Horas trabajadas: ");
        scanf ("%d", &horas);
        if ( horas <= 38 ){
            printf ("\nHoras insuficientes...\n");
            printf ("\nRepite hasta que sean más de 38...\n");
        }
    } while (horas <= 38);
    return horas;
}
float calcSalarioExtra (int horasExt){
    return (horasExt-38)*20*1.5;
}
float calcSalarioTotal (int horasExt){
    return (((horasExt-38)*20*1.5)+(38*20));
}

void mostrarSalario (int horas){
        
        printf ("\n  Horas trabajador: %d horas: ", horas );
        printf ("\n  Sueldo por horas normales_: %d Euros", 38*20 );
        printf ("\n  Sueldo por horas extras___: %.2f Euros", calcSalarioExtra(horas));
        printf ("\n  Sueldo total______________: %.2f Euros\n", calcSalarioTotal(horas));
}
