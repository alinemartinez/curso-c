#include <stdio.h>

// Aritm�tica b�sica

int main(){
	
	// V�riaveis declaradas como float para que a divis�o se comporte como o esperado ( retornando resultados fracion�rios )
	float a = 2;
	float b = 3;
	
	
	int soma = a + b;
	int subtracao = a - b;
	int multiplicacao = a * b;
	
	// a variavel divis�o precisa ser do tipo float para que o valor n�o seja truncado.
	float divisao = a / b;   
	
	return 0;
}
