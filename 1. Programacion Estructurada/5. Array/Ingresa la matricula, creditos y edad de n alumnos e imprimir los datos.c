#include<stdio.h>
#include<stdlib.h>

struct alumnos{
    int ed, matricula, creds;
    int ttl;
};

int datos1 (int *);
int datos2 (int *, int *, int *, int);
int proceso(int, int *, int);
int impresion_de_datos(int *, int *);
	
int main(){
	int est, k;
	printf("Cuantos estudiambres necesita registrar: ");
	datos1(&est);
	struct alumnos alum[est];
	  	  
		for(k=0; k<est; k++){
            datos2(&alum[k].matricula, &alum[k].creds, &alum[k].ed, k);
       }
       
      for(k=0; k<est; k++){
        proceso(alum[k].creds, &alum[k].ttl, alum[k].ed);
        impresion_de_datos(&alum[k].matricula, &alum[k].ttl);
      }
	 return 0; 
}
	
int datos1 (int *pos){
    scanf("%d", pos);
       while(*pos<=0){
            printf("Ingrese un numero positivo de alumnos: ");
            scanf("%d", pos);
        }
}
    
int datos2(int *matricula, int *creds, int *ed, int k){
    do{
        printf("\n Ingrese la matricula del alumno %d: ", k+1);
        scanf("%d", matricula);
    }
	  while(*matricula<=0);
       do{
            printf("Ingrese el total de creditos a inscribir: ");
            scanf("%d", creds);
        }
		 while(*creds<=0);
         do{
           printf("Ingrese la edad del alumno: ");
            scanf("%d", ed);
        }
		  while(*ed<0);
		
}
    
int proceso (int creds, int *ttl, int ed){
    float dto;
    if(ed>20&&ed<40){
        dto=0.8;
    }else{
        dto=1;
    }if(creds<=20)
    {
        *ttl+=creds*150*dto;
    }else{
        *ttl+=20*150*dto;
        creds-=20;
        if(ed<20){
            dto=0.10;
        }else{
            dto=1;
        }if(creds<=15){
            *ttl+=creds*250*dto;
        }else{
            *ttl+=15*250*dto;
            creds-=15;
            if(creds>0){
                    if(ed>40){
                        dto=0.95;
                    }else{
					    dto=1;
                    }
                *ttl+=creds*350*dto;
            }
        }
    }
}
	
int impresion_de_datos(int *matricula, int *ttl){

    printf("\n Matricula: %d                   Total a pagar: %d", *matricula, *ttl);
}
