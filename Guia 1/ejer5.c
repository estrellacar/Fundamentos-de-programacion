/*Ingresar un número entero y decir si:
a) es par o impar.
b) es mayor, menor o igual a cero.
*/

#include <stdio.h>

int main(){

    int n;
    printf("Ingresar un número: ");
    scanf("%i",&n);

    if (n % 2 == 0){
       printf("El número %i es par\n",n);

    }else{
        printf("El número %i es impar \n",n);
    }
    
    if (n > 0 ){
        printf("El numero %i es mayor a 0\n",n);
    }else if(n < 0){
            printf("El número %i es menor a 0\n",n);
    }else{
        printf("El número %i es igual a 0\n",n);

    }
    return 0;
}