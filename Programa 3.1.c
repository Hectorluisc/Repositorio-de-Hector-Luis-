#include<stdio.h>

int main(){
	
	int I;
	float SAL, NOM;
	NOM = 0;
	for (I=1; I<=15; I++)
	{
		printf("Ingrese el salario del profesor: ",I);
		scanf("%f",&SAL);
		NOM = NOM + SAL;
		}	
	printf("El total de la nomina es: %2.f",NOM);

	return 0;
}
