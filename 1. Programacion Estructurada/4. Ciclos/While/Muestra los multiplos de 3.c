#include <stdio.h>
#include <stdbool.h>

int main ()
{
	int i, inf, sup, total;
	printf("Limite inferior: ");
	scanf("%d", &inf);
	printf("Limite superior: ");
	scanf("%d", &sup);
	
	i=inf;
	total = 0;
	
	while (i <= sup && total <30)
	 	{
	 		if (i%3 == 0){
	 			printf("%d\n", i);
	 			total++;
			 }
			 i++;
		 }
		 return 0;
}
