#include <stdio.h> // standard input output
#include <math.h>

// Exerc�cio 1

// Fa�a um programa que calcule o delta de uma equa��o do segundo grau usando os coeficientes a, b e c

int main (){
	float a = 2;
	float b = 3;
	float c = 5;
	
	float delta = pow(b, 2) - 4 * a * c;
	
	printf("resultado do delta: %f", delta);
	
	return 0;

}
