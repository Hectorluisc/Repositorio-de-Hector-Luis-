//programa 3.10
#include<stdio.h>

int main(){
	
	int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;
	printf("Ingrese el numero de datos que se van a procesar");
	scanf("%d",&N);
	
	if (N>0)
	{
		for (I=1; I <= N; I++)
		{
		
		printf("\nIngrese el numero  %d:",I);
	scanf("%d",&NUM);
	
	if (NUM)
	    if (pow(-1,NUM) > 0)
	    SPA = SPA + NUM;
	    
	    else{
	    	SIM =SIM + NUM;
	    	CIM++;
	        }
		}
	printf("\nLa suma de los numeros pares es: %d",SPA);
	printf("\nEl promedio de los numeros impares: &.2f",(float)(SIM / CIM));
	}	
	else
	    printf("\nEl valor de N es incorrecto");	
	return 0;
}
