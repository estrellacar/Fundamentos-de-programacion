/*Hallar la superficie de un triángulo conociendo la base y la altura. Solicitarle los
datos de entrada al usuario.*/

#include <stdio.h>

int main(){

    int base;
    int altura;
    int superficie;

    printf("Ingrese la base: ");
    scanf("%i",&base);
    printf("Ingrese la altura: ");
    scanf("%i", &altura);

    superficie = (base * altura);
    printf("La superficie es: %i \n", superficie);
    return superficie;
}