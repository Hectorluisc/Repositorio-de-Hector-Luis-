#include<stdio.h>
#include<math.h>

int main(){
	
	int NUM;
	long CUA, SUC = 0;
	printf("Ingrese numero entero -0 para terminar -: ");
	scanf("%i",&NUM);
	
	while (NUM)
	{
		CUA = pow (NUM, 2);
		printf("\n%i al cubo es %ld",NUM, CUA);
		SUC = SUC + CUA;
		printf("\nIngrese un numero entero -0 para terminar-: ");
		scanf("%i",&NUM);
	}
	printf("La suma de los cuadrados es %ld",SUC);
	
	return 0;
}
