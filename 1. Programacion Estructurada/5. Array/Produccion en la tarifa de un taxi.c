#include <stdio.h>
#include <stdlib.h>



int capturar_datos(long int(*vector)[4]){
	
  int i=0,sn, clte=0;
   printf("Ingresar datos de los viajes de los clientes: \n");
  
  do{	//Abre el ciclo do while para ingresar los datos
  	
    printf("\nCliente %d\n", i+=1);
    clte++;
    printf("Codigo del taxi: ");
    scanf("%d", &vector[i][0]);
    
    printf("Clave del cliente: ");
    scanf("%ld", &vector[i][1]);
    
    printf("Tipo de servicio: ");
    scanf("%ld", &vector[i][2]);
    
    printf("Costo del servicio: ");
    scanf("%ld", &vector[i][3]);
    
    printf("\n Si desea ingresar otro cliente ingrese 1 para SI o \t 2 para NO: \n ");	//pregunta si desea ingresar otro cliente
    scanf("%d", &sn);
    
  }
  while(sn==1); 	//mientra la respuesta sea si se regresa al ciclo do while
  return clte;
}

void informacion_leida(long int(*vector)[4], int mayor){
  printf("\n \n Los datos capturados son: ");
  printf("\nCliente\t\tClave\tTipo de servicio\tCosto\n");
  
  int i,j;
  	for(i=0; i<mayor;i++){
    	for(j=0; j<4; j++){
      printf("%d\t\t",vector[i][j]);
    }
    printf("\n");
  }
}

void producciontaxi(long int(*vector)[4], int mayor){	
  int suma[]={0,0,0,0,0};
  int i;
  for(i= 0; i< mayor; i++){
    switch(vector[i][0]){
    	
      case 1:
        suma[0]=suma[0]+vector[i][3];
        break;
        
      case 2:
        suma[1]=suma[1]+vector[i][3];
        break;
        
      case 3:
        suma[2]=suma[2]+vector[i][3];
        break;
        
      case 4:
        suma[3]=suma[3]+vector[i][3];
        break;
        
      case 5:
        suma[4]=suma[4]+vector[i][3];
        break;
        default:printf("Ingresar otra opcion");

    }
  }
  printf("\n Produccion total por taxi:\n");
  for(i=0;i<5;i++){
  	
    printf("Codigo del taxi %d: %d\n",i+1, suma[i]);   	
  }
}

void servicio_mas_usado(long int(*vector)[4], int mayor){
  int serv1=0, serv2 = 0, serv3 = 0, i, Serv_My;
  for(i=0;i< mayor; i++){
    switch(vector[i][2]){
      case 1:
        serv1++;
        break;
      case 2:
        serv2++;
        break;
      case 3:
        serv3++;
        break;
        default:printf("Otra opcion");
    }
  }
  	Serv_My= serv1;
  if(serv2>Serv_My){
    Serv_My= serv2;
  }
  if(serv3 >Serv_My){
    Serv_My = serv3;
  }
  if(Serv_My == serv1){
  	
  	printf("\n\n \t\t CANTIDAD DE VECES \n\n");
  	
    printf("\n 01 Puerta a Puerta se uso %d veces\n",serv1);
  }else{
    if(Serv_My ==serv2){
      printf("\n02 Normal se uso %d veces\n",serv2);
    }else{
      if(Serv_My==serv3){
        printf("\n03 Especial se uso %d veces\n",serv3);
      }
    }
  }
}

void Cliente_que_mas_pago(long int(*vector)[4], int max){
	
  int i,j, MyPgo;		
  MyPgo= vector[0][3];
  for(j= 0; j < max; j++){
    if(vector[j][3] > MyPgo){
      MyPgo= vector[j][3];
      i = j;
    }
  }
  printf("\nEl cliente que pago mas es: \n");
  printf("Cliente: %ld\n",vector[i][1]);
  printf("Pago: %ld\n",vector[i][3]);
}

int main(){
	
  long int datos_del_cliente[200][4];
  int n_clte;
  
  n_clte=capturar_datos(datos_del_cliente);
  
  informacion_leida(datos_del_cliente,n_clte);
  
  producciontaxi(datos_del_cliente,n_clte);
  
  servicio_mas_usado(datos_del_cliente,n_clte);
  
  Cliente_que_mas_pago(datos_del_cliente,n_clte);
  return 0;
}

