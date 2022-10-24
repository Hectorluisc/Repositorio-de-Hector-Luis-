//Programa 2.11
#include<stdio.h>

int main(){
	
	int DIS, TIE;
	float BIL;
	
	printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
	scanf("%i %i",&DIS, &TIE);
	
	if ((DIS*2 > 500) && (TIE > 10))
	    BIL = DIS * 2 * 0.19 * 0.8;
	else 
	    BIL = DIS * 2 * 0.19;
	printf("El costo del billete es: %.2f",BIL);    
	
	return 0;
}
