#include<stdio.h>

main()
{
	int tone[12], mayor=0, mes, j, sum, sup=0;   //Se declara 12 en toneladas (tone) puesto que son los meses del año 
	float prome_anual;	//Declaro promedio anual debido a que puede generar puntos decimales
	
	for(j=1; j<=12; j++)
	{
		do{
			printf(" Toneladas del mes %d: ",j);
		    scanf("%d",&tone[j]);
		}while(tone[j]<0);
		
		if(tone[j]>mayor)
		{
			mayor=tone[j];
			mes=j;
		}
		sum+=tone[j];
	}
	prome_anual=sum/12;
	
	for(j=1; j<=12; j++)
	{
		if(tone[j]>prome_anual)
		{
			sup++;
		}
	}

	
	printf("\n El promedio anual de toneladas cosechadas: %.2f\n",prome_anual);
	printf("El o los mes donde tuvieron mayor que el promedio anual es: %d\n",sup);
	printf("La produccion del mes con mayor produccion fue: %d\n",mayor);
	printf("El mes con mayor produccion fue el mes %d",mes);
	return 0;
}
