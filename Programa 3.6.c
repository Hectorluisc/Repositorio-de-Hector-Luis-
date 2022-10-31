#include<stdio.h>

int main(){
	
	float SAL, PRO, NOM = 0;
	int I = 0;
	
	printf("Ingrese el salario del profesor: ");
	scanf("%f",SAL);
	
	do
	{
		NOM = NOM + SAL;
		I = I + 1;
		printf("Ingrese el salario del profesor (Ingrese -0 para terminar): ");
		scanf("%f",&SAL);
	}
	while (SAL);
	PRO = NOM / I;
	printf("Nomina: %.2f \t Promedio de salarios: %.2f",NOM, PRO);
	
	return 0;
}
