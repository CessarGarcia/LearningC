#include<stdio.h>
#include<stdlib.h>

/* programa que muestre la suma de los multiplos de 2
						la suma de los multiplos de 3
						la suma de los 	multiplos de ambos
 */
 
int main(){
    int i,n,x,i1,total=0, suma2=0, suma3=0;
    printf("Ingresar hasta que numero quiere la suma de los multiplos de 2 y 3: ");
    scanf("%d",&n);
    
    
    for(i=1;i<=n;i++){
       i++;
       suma2+= i;
        printf("%d\n",i);
    }
        printf ("La suma de los multiplos de 2 es: %d\n\n", suma2);
        
    for(x=2;x<n;x+=2){
        x++;
        suma3+=x;
        printf("%d\n",x);
    }
    	printf("La suma de los multiplos de 3 es: %d\n\n", suma3);
    	
    	
    	total = suma2+suma3;
    	printf("El total de la suma de los multiplos de ambos es: %d", total);
    
    }
