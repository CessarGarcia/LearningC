#include <stdio.h>

int main(){
	
        int vectA[7], vectB[7] , vectC[7], j;
   
   
    printf("Para valores del vector A\n\n");
    for(j=0;j<7;j++)
    {
        printf("\t Ingrese el valor %d: ",j+1);
        scanf("%d",&vectA[j]);
        if(vectA[j]<=0){
        	printf("\nnumero no valido, se cerrara el programa...");
        	exit(-1);
		}
    }
   
    printf("\n Para valores del vector B: \n");
    for(j=0;j<7;j++)
    {
        printf("\t Ingrese el valor %d: ",j+1);
        scanf("%d",&vectB[j]);
        if(vectB[j]<=0){
        	printf("\nnumero introducido no valido, se cerrara el programa...");
        	exit(-1);
		}
    }
   
    for(j=0;j<7;j++)
    {
        if(vectA[j]==vectB[j])
        {
            vectC[j]=vectA[j];
        }
        if(vectB[j]>vectA[j])
        {
            vectC[j]=2*(vectB[j]-vectA[j]);
        }
        if(vectA[j]>vectB[j])
        {
            vectC[j]=vectB[j];
        }
    }
    printf("\n Valores del vector A:  \n");
    for(j=0;j<7;j++)
    {
        printf("%d ",vectA[j]);
    }
    printf("\n Valores del vector B:  \n");
    for(j=0;j<7;j++)
    {
        printf("%d ",vectB[j]);
    }
    printf("\n Valores del vector C:  \n");
    for(j=0;j<7;j++)
    {
    
        printf("%d ",vectC[j]);
    }
 
 	return 0;   
}

