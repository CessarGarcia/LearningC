int main(){
	
	int i, n, peso=0, op=0, edad, ms, hs, sexo, ojos, cabello;	
	float est;
	
		printf("A cuantas personas deseas registrar ");
		scanf("%d", &n);
		i=1;
		while(i<=n){
		
			printf("Para ingresar datos de un HOMBRE escribe 1\n");
			printf("Para ingresar un dato de MUJER escribe 2\n");
			scanf("%d", &sexo);
			
		if(sexo == 1){
			printf("Ingrese su edad\n");
			scanf("%d", &edad);
	
			if(edad>0){
				printf("Ingrese su estatura \n");
				scanf("%f", &est);
			
			if(est>1.7){
				printf("Ingrese el peso:\n");
				scanf("%d", &peso);
			
			if(peso>=60 || peso <=70){				
				printf("Ingrese el color de ojos 1.Azul   2.Castaño		3. otro\n");
				scanf("%d", &ojos);
				
			if(ojos==2){
				hs++;	
							}
						}
					}
				}
			}
		else 
			if(sexo == 2){
					printf("Ingrese la edad\n");
					scanf("\n%d", &edad);
				if(edad>0){
					printf("Ingrese la estatura en metros\n");
					scanf("%f", &est);			
				if(est>1.65 && est <1.75){
					printf("Ingrese el peso:\n");
					scanf("%d", &peso);
				if(peso<56){
					printf("Ingrese el color de cabello 1.Azul 	2.Rubio	 3.otro\n");
					scanf("%d", &cabello);
					if(cabello==2){
						ms++;	
						}
					}
				}
			}
		}
		i++;
	}
		printf("Todos los hombres de ojos castanos de mas de 1.7 metros de estatura y que pesen entre 60 y 70 kgs\n%d\n", hs);
		printf("Todas las mujeres de cabello rubio y ojos azules que miden entre 1.65 y 1.75 y que pesen menos de 55 kg\n%d\n", ms);
	}
