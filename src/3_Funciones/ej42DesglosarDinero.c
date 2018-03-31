/*
 * File:   ej42DesglosarDinero.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * Ejercicio 42.
 *	Indicar una cantidad a pagar, desglosado en billetes y monedas y
 *      ,después de cobrar, indicar el cambio, también desglosado
 * Billetes:  500, 200, 100, 50, 20, 10, 5
 * Monedas: 2, 1, 0.5, 0.20, 0.10, 0.5, 0.2, 0.1
 *          
 * ??
 *  Ej: 47.57 Euros son:
 *  	2 Billete de 20 Euros,
 *      1 Billete de  5 Euros,
 *	1 Moneda  de  2 Euros,
 *      2 Moneda  de 20 Centimos,
 *	1 Moneda  de 10 Centimos,
 *      1 Moneda  de  5 Centimos,
 *      1 Moneda  de  2 Centimos,
 
 */
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej42DesglosarDinero()
{
    //35.27
    float dinero = 0;
    float separo = 0;
    int desglose = 0;
    int euros = 0;
    int centimos = 0;
    int i = 0;
    int tBilletes[7] = { 500, 200, 100, 50, 20, 10, 5 };
    int tMonedEur[2] = { 2, 1 };
    int tMonedasCent[6] = { 50, 20, 10, 5, 2, 1 };

    //PROBLEMA RARO CON LOS DECIMALES
    dinero = 35.27;
    printf("redondeo extraño con decimales\n", dinero);
    printf("Variable dinero=335.27\n");
    printf("Separamos decimales:\n");
    euros = (int)dinero;
    printf("  int euros=(int)dinero -> %d\n", euros);
    separo = (dinero - euros) * 100;
    printf("  int centimos=dinero - (int)dinero -> %f\n", separo);

    //Trampita
    printf("\nIntroduce la cantidad: ");
    scanf("%d.%2d", &euros, &centimos);

    printf("\nEuros: %d", euros);
    printf("\nCentimos: %d", centimos);

    desglose = euros;

    printf("\n\n%d Euros son: \n", euros);
    //parte Euros con billetes
    if (euros > 0) {
        for (i = 0; i < 7; i++) {
            if (desglose / tBilletes[i] != 0) {
                printf("  %d billetes de %d Euros\n", desglose / tBilletes[i], tBilletes[i]);
                desglose = desglose - (desglose / tBilletes[i] * tBilletes[i]);
            }
        }
        //parte Euros con monedas
        for (i = 0; i < 2; i++) {
            if (desglose / tMonedEur[i] != 0) {
                printf("  %d monedas de %d Euro(s)\n", desglose / tMonedEur[i], tMonedEur[i]);
                desglose -= (desglose / tMonedEur[i] * tMonedEur[i]);
            }
        }
    }
    //parte Centimos
    if (centimos > 0) {
        desglose = centimos;
        printf("\ncon: \n");
        for (i = 0; i < 6; i++) {
            if (desglose / tMonedasCent[i] != 0) {
                printf("  %d monedas de %d centimos\n", desglose / tMonedasCent[i], tMonedasCent[i]);
                desglose -= (desglose / tMonedasCent[i] * tMonedasCent[i]);
            }
        }
    }
}

/*
 35.27
 * tBilletes{500, 200, 100, 50, 20, 10, 5}
 * 
 * billetes = 35/500
 * 35/500=0
 * 
 */
