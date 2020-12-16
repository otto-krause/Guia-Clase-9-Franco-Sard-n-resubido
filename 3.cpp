#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,num1=0,num2=0,a=0;
		printf("\nIngrese un numero ");
  	scanf("%d",&num1);
  		printf("\nIngrese otro numero ");
  	scanf("%d",&num2);
  	if (num1>num2)
  	{
  			while((num1-1)>num2)
  				{
  				num2=num2+1;
  				printf("\n %d",num2);
  				}
	  }
	  else{
	  	  			while((num2-1)>num1)
  				{
  				num1=num1+1;
  				printf("\n %d",num1);
  				}
	  }
	
	return 0;
}
