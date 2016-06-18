#include <stdio.h>

// Aritmética básica

int main(){
	
	// Váriaveis declaradas como float para que a divisão se comporte como o esperado ( retornando resultados fracionários )
	float a = 2;
	float b = 3;
	
	
	int soma = a + b;
	int subtracao = a - b;
	int multiplicacao = a * b;
	
	// a variavel divisão precisa ser do tipo float para que o valor não seja truncado.
	float divisao = a / b;   
	
	return 0;
}
