#include <stdio.h>
#include "scanner.h"


int main(){
	enum token t = 0; //pongo un valor cualquiera para que comienze el ciclo
	int cantidadIdentificadores = 0;
	int cantidadConstantesEnteras = 0;
	int cantidadErrores = 0;
    
	printf("Ingrese cadena\n");	
	while(t != FIN_DE_CADENA){	//token distinto de FIN_DE_CADENA (fin de entrada) 
		t = reconocer();
		switch(t){
			case IDENTIFICADOR: //caso identificador
				printf("identificador\n");
				cantidadIdentificadores++;
				break;
			case CONSTANTE_ENTERA: //caso constante entera
				printf("constante entera\n");
				cantidadConstantesEnteras++;
				break;
			case ERROR: //caso error
				printf("error\n");
				cantidadErrores++;
				break;
		}
	}

	printf("----\n");
	printf("Totales:\n");
	printf("Identificadores %d \n", cantidadIdentificadores);
	printf("Constantes enteras %d \n", cantidadConstantesEnteras);
	printf("Errores %d \n", cantidadErrores);
    return 0;
}