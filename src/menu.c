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

int subMenu(int op); // Recibe opción del menú y devuelve un ejercicio válido
void mostrarMenu(); //Solo muestra opciones del menú
void mostrarSubmenu(int op); //Solo muestra los distintos submenús, según op

int menu(void)
{
    int op = 0; //opción del menú
    int ej = 0; //Ejercicio a devolver
    do {
        mostrarMenu();
        scanf("%d", &op);

        switch (op) {
        case 0:
            printf("\nSalimmos del menu\n");
            break;
        case 1:
        case MAX_OP:
            ej = subMenu(op);
            break;
        default:
            printf("Opcion no valida");
        }
    } while (op != 0);
    return ej;
}

int subMenu(int op)
{
    int opSub = 0;

    do {
        mostrarSubmenu(op);
        scanf("%d", &opSub);

        switch (opSub) {
        case 0:
            printf("\nSalimmos del SubMenu\n");
            break;
        case 1:
        case MAX_EJ:
            ejecutaEj(opSub);
            break;
        default:
            printf("Opcion no valida");
        }
    } while (opSub<0 && opSub>MAX_EJ);
    return opSub;
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
    printf("0. Salir  ---------------------------------------------------\n");
    printf(" Elige una opcion: ");
}

void mostrarSubmenu(int op)
{
    switch (op) {
    case 1:
        printf("\nMENÚ EJERCICIOS C SENCILLOS\n");
        printf("-----------------\n");
        printf(" 1. Longitud, Área y volumen del círculo.\n");
        printf(" 2. Suma, resta, producto y división de 2 números.\n");
        printf(" 3. Beneficio inversión capital 2%% mensual.\n");
        printf(" 4. Sueldo mas 10%% comisión.\n");
        printf(" 5. Descuento del 15%%.\n");
        printf(" 6. Calificación final (3notas=55%%)+examen(30%%)+trabajofinal(15%%).\n");
        printf(" 7. Pulsaciones cada 10 segs\n");
        printf(" 8. Sueldo + incremento 25%%.\n");
        printf(" 9. Presupuesto hospital.\n");
        printf("10. Ganancia 30%%.\n");
        printf(" 0. Volver  ---------------------------------------------------\n\n");

        break;
    case 2:
        printf("\nMENU EJERCICIOS C ESTRUCTURAS DE CONTROL\n");
        printf("-----------------\n");
        printf("11. Mostrar aprobado o suspenso según media.\n");
        printf("12. Salario semanal horas extras.\n");
        printf("13. Ordenar en ascendente 2 números.\n");
        printf("14. PUlsaciones según sexo.\n");
        printf("15. Reforestar.\n");
        printf("16. Mostrar mayor de 3 números.\n");
        printf("17. Horas extras.\n");
        printf("18. Beneficio utilidades.\n");
        printf("19. Descuento por bolita.\n");
        printf("20. Descuento por cantidad.\n");
        printf("21. Hallar media 7 notas.\n");
        printf("22. Cubo 10 números.\n");
        printf("23. Mostrar positivos de 10 números.\n");
        printf("24. Mostrar positivos y negativos de 20 n�meros.\n");
        printf("25. Tabla multiplicar.\n");
        printf("26. Salario de n obreros.\n");
        printf("27. Promedio edad hombres y mujeres.\n");
        printf("28. Calcular menor valor tirada dados.\n");
        printf("29. Calcular mayor valor tirada dados.\n");
        printf("30. Sumar 1 seg a una hora dada.\n");
        printf("31. Sumar pares e impares.\n");
        printf("32. Comprobar bisiesto.\n");
        printf("33. Menú: 1-Adivina número, 2-Calcular número tarot, 3-Salir.\n");
        printf(" 0. Volver  ---------------------------------------------------\n\n");

        break;
    case 3:
        printf("\nMENU EJERCICIOS C FUNCIONES\n");
        printf("-----------------\n");
        printf("34. Menú: 1-Factorial,2-Potencia, 3-Salir.\n");
        printf("35. Hallar área y perímetro rectángulo.\n");
        printf("36. Comprobar bisiesto.\n");
        printf("37. Tarot.\n");
        printf("38. Hallar factorial.\n");
        printf("39. Hallar potencia.\n");
        printf("40. Calcular combinaciones m elementos tomados de n en n.\n");
        printf("41. Salario bruto n trabajadores.\n");
        printf("42. Desglosar billetes.\n");
        printf(" 0. Volver  ---------------------------------------------------\n\n");

        break;
    case 4:
        printf("\nMENU EJERCICIOS C ARRAYS 1 DIMENSI�N\n");
        printf("-----------------\n");
        printf("43. Suma total, mayor y menor.\n");
        printf("44. Invertir Arrays.\n");
        printf("45. Mostrar mayor con decimales.\n");
        printf("46. Ordenar Array en ascendente.\n");
        printf(" 0. Volver  ---------------------------------------------------\n\n");

        break;
    case 5:
        printf("\nMENU EJERCICIOS C STRINGS\n");
        printf("-----------------\n");
        printf("47. Mostrar frase 80 caracteres.\n");
        printf("48. Mostrar longitud string.\n");
        printf("49. Comparar tamaño strings.\n");
        printf("50. Contar 'aes' y mostrar letras distintas.\n");
        printf("51. Aceptar mínimo 11 caracteres.\n");
        printf("52. Contar espacios y quitarlos.\n");
        printf("53. Intercambiar valores arrays.\n");
        printf("54. Media y nombre 3 alumnos con 3 notas.\n");
        printf(" 0. Volver  ---------------------------------------------------\n\n");

        break;
    case 6:
        printf("\nMENU EJERCICIOS C ARRAYS, STRINGS Y FUNCIONES\n");
        printf("-----------------\n");
        printf("55. Mostrar positivos.\n");
        printf("56. Eliminar espacios en blanco.\n");
        printf("57. Ordenar array[4] en ascendente.\n");
        printf("58. Intercambiar 'aes' por 'oes'.\n");
        printf("59. Multiplicar x2 array[5].\n");
        printf("60. Cant. positivos en array[4].\n");
        printf(" 0. Volver  ---------------------------------------------------\n\n");

        break;
    case 7:
        printf("\nMENU EJERCICIOS C: 7-ARRAYS 2 DIMENSIONES\n");
        printf("-----------------\n");
        printf("61. Llenar array 2d y multiplicar resultado x2.\n");
        printf("62. --.\n");
        printf("63. Matriz 2d Temperaturas por provincia y semana.\n");
        printf("64. Matriz 2d: inversa, suma y multiplicación. --.\n");
        printf(" 0. Volver  ---------------------------------------------------\n\n");

        break;
    case 8:
        printf("\nMENU EJERCICIOS C: 8-STRUCT\n");
        printf("-----------------\n");

        printf("65. Ejemplo Struct.\n");
        printf("66. Structs Ej1 - cliente.\n");
        printf("67. Structs Ej1 - n alumnos.\n");
        printf("68. Structs Ej1 - compañeros.\n");
        printf("69. Structs Ej1 - notas alumnos.\n");
        printf(" 0. Volver  ---------------------------------------------------\n\n");

        break;
    case 9:
        printf("\nMENU EJERCICIOS C: 8-VARIOS\n");
        printf("-----------------\n");
        printf("70. Menu con varias funciones.\n");
        printf("71. Salarios Departamento.\n");
        printf("72. Redimensión Array.\n");
        printf(" 0. Volver  ---------------------------------------------------\n\n");
        break;
        default:
            printf("\nNo es una opcion\n");
    }
    printf(" Elige un ejercicio: ");
}