/*Dados a y n números enteros, informar la potencia enésima de a por productos
sucesivos.*/

#include <stdio.h>
int main(){
    int a, n;
    int potencia = 1;

    printf("Ingrese una base: ");
    scanf("%i",&a);

    printf("Ingrese un exponente: ");
    scanf("%i",&n);

    for (int i = 1 ; i <= n ;i++){
        potencia = potencia * a;
    }

    printf("La potencia es de: %i\n",potencia);

    return 0;

}