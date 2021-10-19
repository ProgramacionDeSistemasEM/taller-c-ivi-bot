 #include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main(int argc, char **argv){
	
	int elementos = 0;
	char c = 0;
	
	
	//Aqui manejamos las opciones.
	//El argumento -p tiene un argumento, que es 
	//el numero de elementos a pedir (por eso el :)
	while ((c = getopt (argc, argv, "p:")) != -1){
		switch(c){
			case 'p':
				elementos = atoi(optarg);
				break;
			default:
				printf("Argumento invalido\n");
				exit(1);
		}
	}

	//Los resultados de sus calculos van en estas variables.
	//Puede declarar más variables si lo necesita.
	
	 
	char peso[100]={0};
	char altura[100]={0};
	if (argc==0){
	printf("Número de personas invalido\n");
	
	}
		int i=0;
	while(i<elementos){
		printf("Peso: ");
		fgets(peso,10,stdin);
		float valor=atof(peso);
		printf("Altura: ");
		fgets(altura,10,stdin);
		i++;
	};
	
	float sum = 0.0f;
	float max_imc = 0.0f;
	float imcAll[elementos];
	for(int i;i<elementos;i++){
		float valor1=atof(peso[i]);
		float valor2=atof(altura[i]);
		float imc=valor1/(valor2*valor2);
	}
	float nma=0.0;
	 for(int i;i<elementos;i++){
	 sum+=imcAll[i];
	if(imcAll[i]>nma)
	nma=imcAll[i];
	  };
	  
	  sum = sum/elementos;
	
	max_imc=nma;
	//No modifique estas lineas
	//Guarde los resultados en las 
	//variables sum y max_imc
	printf("\npromedio IMC: %.1f\n", sum);
	printf("maximo IMC: %.1f\n", max_imc);
}
