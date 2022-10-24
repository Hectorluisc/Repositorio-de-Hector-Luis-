#include<stdio.h>

int main(){
	
	float PAG, SPA = 0;
	printf("ingrese su primer pago: "); scanf("%f",&PAG);
	
	do
	{
	SPA = SPA + PAG;
	printf("ingrese el siguiente pago  -0 para terminar-: ");
	scanf("%f",&PAG);
	}
	while (PAG);
	printf("el total de pagos del mes es: %2.f",SPA);

	
	return 0;
}
