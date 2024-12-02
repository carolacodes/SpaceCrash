#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "SIMULAJUEGO2222.h"
#include "MENU222.h"

#define MAX 100

typedef int tVector[MAX];

/* Declaración de tipos de datos personalizados */
typedef char tString [25];

typedef struct {
	int puntaje;
	tString nombre;
	int genero;
} tDatos;

typedef struct nodoArbol {
	tDatos datos;
	struct nodoArbol * hijoIzquierdo;
	struct nodoArbol * hijoDerecho;
}tArbol;
/* Declaración de variables */

tArbol * arbol;
tDatos datos;

FILE* archivoJuego;

//variables
int codGeneroAnt;
int cantJugadores;
int cantMujeres, cantHombres;
float porcentajeMujeres, porcentajeHombres;

int cantGenero;
//prototipado

void inicializacion();
void procesoCorte();
void finalizacion();

void principioCorte();
void unJugador();
void finCorte();



int main(){
	inicializacion();
	unJugador();
	procesoCorte();	
	
	finalizacion();
	
	
	return 0;
}

void inicializacion() {
	
			
	archivoJuego = fopen("Juego.dat", "rb");			
    fread(&datos, sizeof(tDatos), 1, archivoJuego);
			
    
	codGeneroAnt = datos.genero;	
	cantJugadores= 0;
	cantMujeres=0;
	cantHombres=0;	


	printf("\n\t\t\tDATOS SOBRE LOS JUGADORES DE SPACE CRASH\t\n");
}

void procesoCorte() {

	while (!feof(archivoJuego)) { 
		principioCorte(); 
		
		
	    while(!feof(archivoJuego) && datos.genero==codGeneroAnt) { 
			unJugador();
			fread(&datos, sizeof(tDatos), 1, archivoJuego);
			

		} 
		
		
		finCorte();
	}
	
}

void principioCorte() {
			
	cantGenero=0;
	//cantMujeres=0;
	//cantHombres=0;
	//porcentajeMujeres=0;
	//porcentajeHombres=0;
}

void unJugador(){
	
	cantJugadores = cantJugadores + 1;

	if(datos.genero == 1){
		cantMujeres = cantMujeres + 1;
		printf("\nNOMBRE %s - PUNTAJE %d \n",datos.nombre, datos.puntaje);
	}else{
		if(datos.genero == 2){
		cantHombres = cantHombres + 1;
		printf("\nNOMBRE %s - PUNTAJE %d \n",datos.nombre, datos.puntaje);
	}
	}			
							
								
}

void finCorte(){      		
	
	cantJugadores+=cantGenero;
	codGeneroAnt = datos.genero;	
	
}

void finalizacion(){
		

	porcentajeMujeres=(float)cantMujeres *100/cantJugadores;
	porcentajeHombres=(float)cantHombres *100/cantJugadores;
	printf("\nCantidad de jugadoras mujeres: %d\n", cantMujeres);
	printf("\nCantidad de jugadoras hombres: %d\n", cantHombres);
	printf("\nEl porcentaje que representan las mujeres en relacion a la cant de jugadores es: %.2f %\n\n", porcentajeMujeres);
	printf("\nEl porcentaje que representan las hombres en relacion a la cant de jugadores es: %.2f %\n\n", porcentajeHombres);
	fclose(archivoJuego);      
}









































