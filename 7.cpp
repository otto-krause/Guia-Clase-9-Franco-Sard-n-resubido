#include <stdio.h>
#include <stdlib.h>
int main()
{
	int z=0,i=1,ac=0,vent,proc,vt,mj,mvp;

	while(21>i){
		while (15>z){
			printf("\nIngrese las ventas del vendedor %d ",i);
			scanf("%d",&vent);
			ac=ac+vent;
			z=z+1;
			}
		printf("\n Vendio un total de %d unidades ",ac);
					if (ac>mj){
							mj=ac;
							mvp=i;
								}
		vt=vt+ac;
		z=0;
		ac=0;
		i=i+1;
		}

	printf("\n El total de ventas es %d",vt);
	printf("\n El mejor vendedor fue el  numero %d con un total de %d ventas ",mvp,mj);

}

