/*Ejemplo de lectura de dos valores ingresados por el usuario y mostrar luego el resultado de operaciones
matemáticas*/
#include <stdio.h>

void main()
{
    int valor1,valor2;

    printf("Valor 1: ");
    scanf("%i",&valor1);

    printf("Valor 2: ");
    scanf("%i",&valor2);

    printf("\nValor 1: %i y Valor 2: %i \n\n",valor1,valor2);
    printf("Suma: %i \n",valor1 + valor2);
    printf("Resta: %i\n",valor1 - valor2);
    printf("Producto: %i\n",valor1 * valor2);
    printf("Division entera:%i\n", valor1 / valor2);
    printf("División real:%f\n",(float)valor1/valor2);

    return;
}