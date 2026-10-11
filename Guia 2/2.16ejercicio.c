/*Dos números se dicen amigos cuando uno de ellos es igual a la suma de
todos los divisores del otro excepto el mismo. Ejemplo: los números 220 y 284
son amigos.
(284 = 1+2+4+5+10+11+20+22+44+55+110(div de 220))
(220 = 1+2+4+71+142(div de 284))
Se pide:
a) escribir una función booleana que llamada desde un programa, permita
discernir si dos números (parámetros) son amigos.
b) Usar otra función para calcular la suma de los divisores de un número
determinado.
c) Hacer referencia a dichas funciones desde un programa o desde otro
subprograma. */

#include <stdio.h> 
#include <stdbool.h>

int calcular_suma(int num){
    int i;
    int div = 0;
    for (i = 1 ; i < num; i++){
        if (num % i == 0){
            div += i;
        }
    }
    return div;
}

bool son_amigos(int num1, int num2){
    bool es_amigo;
    int suma1, suma2;
    suma1 = calcular_suma(num1);
    suma2 = calcular_suma(num2);

    if (suma1 = num2 && suma2 == num1){
        es_amigo = true;

     }else{ 
        es_amigo = false;
  }
    return es_amigo;

}


int main(){

    if (son_amigos(220, 284))
        printf("Son números amigos\n");
    else 
        printf("No son números amigos\n");

return 0;
}