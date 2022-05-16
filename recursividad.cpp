/* 
-   Universidad de las Fuerzas Armadas "ESPE"

Programa que permite realizar el factorial de un numero
en forma decreciente y realiza la suma dichos numeros en
la misma forma.
Ej: 
Factorial       Suma
5! = 120         15
4! = 24          10
3! = 6			 6
2! = 2           3
1! = 1           1
0! = 1

Autores: Jilson Narvaez; Diego Hidalgo; Angelo Olmedo
Creacion: 16/05/2022
Modificacion:
Grupo 15
GitHub : https://github.com/janarvaez11/CodigosED4683       :
         https://github.com/AngeloOlmedo
         https://github.com/dahidalgo18/Ejercicios-Estructura-De-Datos-4683
 
Version: 1.0

Estructura de Datos 4683

*/


#include <iostream>
class Dato{
	private:
		int n;
	public:
		Dato(int);
		int factorial(int);
		int suma(int);
};
Dato::Dato(int numero){
	n = numero;
}

int Dato::suma(int n){
	if(n==0)
		return 0;
	else{
		return n+suma(n-1);
	}
}

int Dato::factorial(int n){
	if(n==0)
		return 1;
	else{
		return n*factorial(n-1);
	}
}

int main(int argc, char** argv) {
Dato n1=Dato(5);

	for(int i=1;i<=5;i++){
		printf("\nSUMA %d ",n1.suma(i));
		printf("factorial = %d",n1.factorial(i));
	}
	return 0;
}