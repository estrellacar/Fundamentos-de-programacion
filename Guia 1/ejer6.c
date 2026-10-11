/*Ingresar tres números y hallar el mayor.*/

#include <stdio.h>

int main(){

    int n1;
    int n2;
    int n3;

    printf("Ingrese el primer número: ");
    scanf("%i", &n1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &n2);
    printf("Ingrese el tercer número: ");
    scanf("%i",&n3);

    if (n1 >= n2 && n1 >= n3){
        printf("El número %i es el mayor\n",n1);
    
    }if (n2 >= n1 && n2 >= n3){
        printf("El número %i es el mayor\n",n2);
    
    }if (n3 >= n1 && n3 >= n2){
        printf ("El número %i es el mayor \n",n3);

    }
    return 0;

}