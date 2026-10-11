/*Ingresar el radio de una esfera y calcular el volumen.*/

#include <stdio.h>
#define PI 3.141592

int main(){

    float radio;
    float volumen_calculado;

    printf("Ingrese el radio de una esfera para calcular el volumen: ");
    scanf("%f", &radio);

    volumen_calculado = (4.0/3.0) * PI * radio * radio * radio;

    printf("El volumen de la esfera es de: %.2f\n",volumen_calculado);
    return 0;

}