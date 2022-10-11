void impresion(struct Evaluaciones *tupla, int numero){
	printf("Evaluaciones: %d\n", numero);
	printf("Matricula: %ld\n ", tupla-> Matricula);
	printf("Primer Parcial: %d\n", tupla -> PrimerParcial);
	printf("Segundo Parcial: %d\n", tupla -> SegundoParcial);
	printf("PIA: %d\n", tupla-> PIA);
	printf("Final: %.2f\n\n", tupla-> final);
	
}

int main(){
	FILE *fp;
	struct Evaluaciones Evaluacion[3];
	char matricula_str[255], primer_parcial_str[255], segundo_parcial_str[255], pia_str[255], final_str[255];
	fp = fopen("/FCFM/evaluaciones.csv", "r+");
	fscanf(fp, "%s %s %s %s\n", matricula_str, primer_parcial_str, segundo_parcial_str, pia, final_str);
	
	int i=0;
	for(i=0; i<3; i++){
		fscanf(fp, "%s %s%s %s \n", matricula_str, primer_parcial_str, segundo_parcial_str, pia_str, final_str);
		strncpy(matricula_str, matricula_str, 2);
		strncpy(primer_parcial_str,primer_parcial_str, 2)
		strncpy(egundo_parcial_str, segundo_parcial_str, 2)
		strncpy(pia_str, pia_str, 2)
		strncpy(final_str, final_str, 3);
		
		Evaluacion[i].Matricula = atol(matricula_str);
		Evaluacion[i].PrimerParcial = atoi(primer_parcial_str);
		Evaluacion[i].SegundoParcial = atoi(segundo_parcial_str);
		Evaluacion[i].PIA = atoi(pia_str);
		Evaluacion[i].final = atoi(final_str);
		
		impresion(&Evaluacion[i], i+1);
	}
	fclose(fp);
	retun 0;

}
