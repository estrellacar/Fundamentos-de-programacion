/* Escribir una función que dado un número entero positivo retorne un valor
booleano que indique si el mismo es capicúa (palindromo).*/

#include <stdio.h>
#include <stdbool.h>

bool es_capicua(int numero){
    int numero_original = numero; 
    int inverso; 

    inverso = numero_original % 10;
    while(numero_original > 9){
        numero_original = numero_original / 10;
        inverso = inverso * 10 + numero_original % 10;
    }
    return (numero == inverso);
}
int main(){
    if (es_capicua(1234))
        printf("Es capicúa\n");
    else
        printf("NOO es capicúa!!\n");
    
    return 0;
}