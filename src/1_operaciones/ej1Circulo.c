#include "ejs1.h"

//funciones ejercicios
void ej1Circulo()
{

    float radio;
    printf("Introduce el radio en cms: ");
    scanf("%f", &radio);
    printf("\nCIRCUNFERENCIA\n");
    printf("El radio es de: %.2f cms\n", radio);
    printf("El diámetro es de: %.2f cms\n", radio * 2);
    printf("El perímetro o longitud es de: %.2f cms\n", PI * radio * 2);
    printf("El área es: %.2f cms cuadrados\n", PI * (radio * radio));
    printf("\nESFERA\n");
    printf("El área es: %.2f cms cuadrados\n", 4 * PI * (radio * radio));
    printf("El volumen es: %.2f cms al cubo\n", ((4 * PI * (radio * radio * radio)) / 3));
}