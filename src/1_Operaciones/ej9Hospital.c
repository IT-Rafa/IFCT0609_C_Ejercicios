/*
 * File:    ej9Hospital.c
 * Project: ejerciciosC
 * Author:  Rafael Martínez (it-rafamartinez@outlook.es)
 * 
 * Descripción
 * Ejercicio 9.
 *      Programa que calcule a cantidade que recibirá cada unha das áreas dun
 *       hospital, para calquera monto presupuestal.
 *        O orzamento anual do hospital repártirase conforme á sig.táboa:
 *             - Ginecología 40%
 *             - Traumatología 30%
 *             - Pediatría 30%
 *      Permite poder cambiar los porcentajes a cada uno.
 *      Si los porcentajes no cuadran, reparte a todos lo mismo
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej9Hospital(){
    float presup, gine,trau,pedi;
    int porcGine,porcTrau,porcPedi;
    char modif;
    modif='n';
    porcGine=40;
    porcTrau=30;
    porcPedi=30;
    do{
        printf("\nIntroduce el presupuesto del hospital en euros: ");
        scanf("%f",&presup);
        if(modif=='s'){
            printf("\nIntroduce los porcentajes como numeros (para 20%% pones 20)");
            printf("\n\nPorcentaje para Ginecologia?:");
            scanf("%d",&porcGine);
            printf("Porcentaje para Traumatologia?:");
            scanf("%d",&porcTrau);
            printf("Porcentaje para Pediatria?:");
            scanf("%d",&porcPedi);

            if(( porcGine+porcTrau+porcPedi)!=100 ) {
                printf("\nEso no da 100 ni nada, chanchullero");
                printf("\n Saldria a repartir un %d %% de %.2f",porcGine+porcTrau+porcPedi,presup);
                printf("\nPonemos 33%% pa todos...\n");
                porcGine=porcTrau=porcPedi=33;
            }
            
        }
        printf("\nEl porcentaje anual es de %.2f Euros\n",presup);
        printf("Se reparte en: \n");
        printf("%d %% para Ginecologia: %.2f Euros\n", porcGine,(float)((presup*porcGine)/100));
        printf("%d %% para Traumatologia: %.2f Euros\n", porcTrau,(float)((presup*porcTrau)/100));
        printf("%d %% para Pediatria: %.2f Euros\n", porcPedi,(float)((presup*porcPedi)/100));
        
        printf("\n\nDesea cambiar los porcentajes? (s/n)");
        scanf("%s",&modif);
    } while(modif=='s');
        
}