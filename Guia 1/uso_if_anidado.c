/*Uso de if anidado (cuando ya sea por la rama verdadera o falsa, encontramos otro "if")
Ejemplo: Se solicita el ingreso de dos números, y se informa como es uno respecto del otro*/

#include <stdio.h>

void main(){
    
    int x,y;

    printf("Valor de X: ");
    scanf("%i", &x);

    printf("Valor de Y: ");
    scanf("%i",&y);

    if (x > y )
        printf("X es mayor que Y\n");
    
    else
        if (x < y )
            printf("X es menor a Y\n");
        else
            printf("X es igual a Y\n");
    
    return;
}