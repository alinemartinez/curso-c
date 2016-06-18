#include <stdio.h>
#include <math.h>

int main(){
	float catetoAdjacente = 3;	
	float catetoOposto = 4;
	float hipotenusa = sqrt(pow(catetoOposto, 2) + pow(catetoAdjacente, 2));
	
	printf("%f", hipotenusa);
	
	return 0;
}
