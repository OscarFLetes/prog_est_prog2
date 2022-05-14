/* Autor: Oscar Eduardo Fletes Ixta, Realizado: 03/02/2022
	Programa que pide los datos de un triangulo y calcula su area
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo flotate
		-scanf
		-Operacones aritmeticas 
		-printf para monstrar los valroes de las variables 
	Objetivo:
	Mostrar e luso de variables flotantes, como declararlas, pedirlas por teclado,
	realizar operaciones aritmeticas e imprimirla. 
	
	Breve descripcion:
	El progra,a pide como entrada 2 variables flotantes (base y altura)
	calcula e larea de un triangulo e imprime su resultado.
	*/

#include<stdio.h>

int main(){
	//variables
	int base, altura;
	float area;
	//Entrada
	printf("Calcular el area del Triangulo\n");
	printf("Por favor introduce la medida de la base:");
	scanf("%d", &base); //tipo de variable (entero), nombre de la variable iniciando con &
	printf("Por favor introduce la medida de la altura:");
	scanf("%d", &altura); //%d variable entera
	//Proceso
	area=(float)base*altura/2;
	//Salida
	printf("El area del triangulo es %f",area); //%f variable con dedicmal (float)
	
	
	return 0;
} 
