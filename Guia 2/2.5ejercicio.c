/* 5) Escribir una función que dados a y b ambos de tipo entero devuelva a ^ b de
tipo double para los siguientes casos (no se puede utilizar ninguna biblioteca
de funciones matemáticas). Implementar una solución iterativa.​*/

#include <stdio.h> 

double calcular_potencia(int base, int exponente){
	double potencia = 1;
	int i;
	int exp = exponente; 
	if (exp < 0)
		exp = -1 * exp;

	for ( i = 0; i < exp; i++)
		potencia = potencia * base;
	printf("La potencia es: %f\n", potencia);
	return potencia;
}
int main(){
	calcular_potencia(2,3);
	calcular_potencia(2, -3);
	calcular_potencia(-2, 0);
}
