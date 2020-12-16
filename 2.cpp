#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int i=0,ng=0,ac=0,num=0;
	float pro=0;
	while (15>=i)
	{
		printf("\n Ingrese un numero ");
		scanf("%d",&num);
		ac=ac+num;
		if(num>ng){
			ng=num;
		}
		i=i+1;
	}
	pro=ac/15;
	printf("\n Numero promedio es %f",pro);
	printf("\n Numero mas grande es %d",ng);
	return 0;
}

