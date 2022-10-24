#include<stdio.h>

int main(){
	
	int I, N, NUM, SUM;
	SUM = 0;
	printf("Ingrese el numero de datos: ");
	scanf("%i",&N);
	
	for (I=1; I<=N; I++)
	{
		printf("Ingrese el dato numero %i:",I);
		scanf("%i",&NUM);
		if (NUM > 0)
		    SUM = SUM + NUM;
	}
	printf("La suma de los numeros positivos es: %i", SUM);
	
	
	return 0;
}
