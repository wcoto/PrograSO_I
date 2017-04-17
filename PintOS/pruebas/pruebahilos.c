
#include <stdio.h>
#include <stdbool.h>

int main (int argc, char *argv[]) {
	
	//el ejecutable tambien cuenta como argumento:  argv[0]
	int numArgs = argc; 
	// printf("\ncmdline args count=%d", argc);

	int numThreads = 25; 		//maximo 25
	bool typeThread = 0;		//0: I/O bound, 1: CPU Bound
	char archivo[30];			//nombre del archivo
	int percent = 0;			//porcentaje del hilo I/O vs CPU.

	if(numArgs%2 == 0){			//en caso de algun parametro no tenga valores!
		printf("Error! Los argumentos estan incompletos\n");

	}else{
		for (int i=1; i< argc; i+=2) {


			if( !strcmp(argv[i],"-t")){
				printf("Digito -t valor: %s \n",argv[i+1]);
			}
			else if(!strcmp(argv[i],"-b")){
				printf("Digito -b valor: %s \n",argv[i+1]);	
			}
			else if(!strcmp(argv[i], "-l")){
				printf("Digito -l valor: %s \n",argv[i+1]);
			}else if(!strcmp(argv[i], "-p")){
				printf("Digito -p valor: %s \n",argv[i+1]);
			}
			printf("\narg%d=%s\n", i, argv[i]);
		}
	}	

	printf("\n");
	return 0;
}
