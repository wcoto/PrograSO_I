
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	
	//el ejecutable tambien cuenta como argumento:  argv[0]
	int numArgs = argc; 
	// printf("\ncmdline args count=%d", argc);

	int numThreads = 25; 		//maximo 25
	bool typeThread = false;	//0: I/O bound, 1: CPU Bound
	char archivo[30];			//nombre del archivo
	int percent = 0;			//porcentaje del hilo I/O vs CPU.
	bool using_b= false;		//indica si el argumento typethread se ingreso para no permitir el uso del otro.
	bool using_p = false;

	if(numArgs%2 == 0){			//en caso de algun parametro no tenga valores!
		printf("Error! Los argumentos estan incompletos\n");

	}else{
		for (int i=1; i< argc; i+=2) {


			if( !strcmp(argv[i],"-t")){
				printf("Digito -t valor: %s \n",argv[i+1]);
			}
			else if(!strcmp(argv[i],"-b")){
				printf("Digito -b valor: %s \n",argv[i+1]);	
				using_b = true;
			}
			else if(!strcmp(argv[i], "-l")){
				printf("Digito -l valor: %s \n",argv[i+1]);
			}else if(!strcmp(argv[i], "-p")){
				printf("Digito -p valor: %s \n",argv[i+1]);
				using_p = true;
			}
			
		}
	}

	if(using_p && using_b){
		printf("Error, no esta permitido usar -b y -p simultaneamente\n");
		exit(0);
	}	


	return 0;
}
