#include <stdio.h> // standard input output
#include <math.h>

// Exercício 1

// Faça um programa que calcule o delta de uma equação do segundo grau usando os coeficientes a, b e c

int main (){
	float a = 2;
	float b = 3;
	float c = 5;
	
	float delta = pow(b, 2) - 4 * a * c;
	
	printf("resultado do delta: %f", delta);
	
	return 0;

}
