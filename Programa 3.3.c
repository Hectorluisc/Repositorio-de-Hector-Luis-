#include<stdio.h>

int main(){
	
	float PAG, SPA;
	SPA = 0;
	printf("Ingrese el primer pago: ");
	scanf("%f",PAG);
	
	while (PAG)
	{
		SPA = SPA + PAG;
		printf("Ingrese el siguiente pago: ");
		scanf("%f",&PAG);
	}
	printf("El total de pagos del mes es: %2.f",SPA);	
	
	return 0;
}
