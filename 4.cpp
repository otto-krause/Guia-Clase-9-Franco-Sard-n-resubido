#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,f=1;
	printf("\nIngrese un numero ");
  	scanf("%d",&num);
	while(num>1){
	f=f*num;
	num=num-1;
		}
	printf("\nEl factorial es  %d",f);
}
 

