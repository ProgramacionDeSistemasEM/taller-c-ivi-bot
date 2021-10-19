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
	
	 
	float peso[100];
	float altura[100];
	if (elementos<=0){
	printf("Número invalido\n");
	exit(1);
	}
		int i=0;
	while(i<elementos){
		printf("Peso: ");
		float entrada1;
		getc(stdin);
		scanf("%.2f",&entrada1);
		getc(stdin);
		peso[i]=entrada1;
		float entrada2;
		printf("Altura: ");
		getc(stdin);
		scanf("%.2f",&entrada2);
		getc(stdin);
		altura[i]=entrada2;
		i++;
		getc(stdin);
		if (entrada1<=0||entrada2<=0){printf("Numero de personas invalido");
exit(1);	}}
	
	float sum = 0.0f;
	float max_imc = 0.0f;
	float imcAll[elementos];

	for(int i=0;i<elementos;i++){
		float valor1=peso[i];
		float valor2=altura[i];
		float imc=valor1/(valor2*valor2);
		imcAll[i]=imc;
	}
	float nma=0.0f;
	 for(int i=0;i<elementos;i++){
	 sum+=imcAll[i];
	 if(imcAll[i]>nma){
	 nma=imcAll[i];
	}
	 }
	 float operacion=(sum/elementos);
        sum = operacion;
	max_imc=nma;
	//No modifique estas lineas
	//Guarde los resultados en las 
	//variables sum y max_imc
	printf("\npromedio IMC: %.1f\n", sum);
	printf("maximo IMC: %.1f\n", max_imc);
}
