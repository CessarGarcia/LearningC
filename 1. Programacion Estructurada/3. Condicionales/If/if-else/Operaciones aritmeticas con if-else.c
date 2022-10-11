#include<stdio.h>
#include<math.h>

main()
{
	int n1, n2, resultado, resta;
	double raiz1, raiz2;
	
	printf("Introduce el primer numero: ");
	scanf("%d",&n1);
	printf("\nIntroduce el segundo numero: ");
	scanf("%d",&n2);
	
	if(n1%2==0 && n2%2==0)
	{
		resultado=n1*n2;
		printf("La multiplicacion es: %d\n",resultado);
	}
	else
	{
		if	(n1==n2){
        	printf("Error\n");
		}
		else if(n1%2!=0 && n2%2!=0)
		{
			raiz1=sqrt(n1);
			raiz2=sqrt(n2);
			printf("La primera raiz es de: %.2lf\n", raiz1);
			printf("La segunda raiz es de: %.2lf\n", raiz2);
		}
		else
		{
			if(n1%2==0 && n2%2!=0)
			{
				if(n1>n2)
				{
					resta=n1-n2;
					printf("La resta de %d y %d es de: %d",n1,n2,resta);
				}
				else
				{
					resta=n2-n1;
					printf("\nLa resta de %d y %d es de: %d",n2,n1,resta);
				}
			}
			else
			{
				if(n1>n2)
				{
					resta=n1-n2;
					printf("La resta de %d y %d es de: %d\n",n1,n2,resta);
				}
				else
				{
					resta=n2-n1;
					printf("La resta de %d y %d es de: %d\n",n2,n1,resta);
				}
				
			}
		}
	}
		
	return 0;

}
