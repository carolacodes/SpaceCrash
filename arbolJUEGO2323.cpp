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


/* Declaración de prototipos */
void crearArbolVacio( tArbol* );
bool arbolVacio( tArbol * );
void insertarElemento( tArbol **, tDatos );

//FUNCIONES DEL ARCHIVO

void inicializar();
void finalizar();
void actualizarArchivo(tArbol *);

//FUNCIONES PARA EL JUEGO
void menu();

//para el corte
void insercionDirecta(tVector);


FILE* archivoJuego;

/* Bloque principal */
int main() {
	
	datos.puntaje=0; 
	inicializar();
	crearArbolVacio(arbol);

	
	SpaceScrash(x,y);
	Sleep(1800);
	system("cls");
	menu(); 
	system("cls");
	gotoxy(30,1);printf("\nPUNTAJE: %i\n", datos.puntaje);	
	Sleep(1800);
	
	
	funcionMenu();
	
	funcionCuentaRegresiva();
	
	
	datos.puntaje= condicionVidas();
	
	insertarElemento( &arbol, datos);
	datos.puntaje= condicionVidas();
	actualizarArchivo(arbol);
	


	finalizar();
	return 0;
}


void inicializar(){
	archivoJuego = fopen("Juego.dat", "ab");

}


/* Implementación de funciones */
void crearArbolVacio( tArbol * pArbol ) {
	pArbol = NULL;
}

bool arbolVacio( tArbol * pArbol ) {
	return pArbol == NULL;
}

void insertarElemento( tArbol ** pArbol, tDatos pDatos ) {
	if( arbolVacio( * pArbol ) ) {
		( *pArbol ) = ( tArbol * ) malloc( sizeof( tArbol ));
		if( *pArbol != NULL) {
			( *pArbol )->datos = pDatos;
			( *pArbol )->hijoIzquierdo = NULL;
			( *pArbol )->hijoDerecho = NULL;
			
		} else {
			printf("No hay memoria disponible!\n");
		}						
	} else {
		if( pDatos.puntaje < (*pArbol)->datos.puntaje ) {
			// el dato que quiero insertar es menor que el nodo actual
			insertarElemento(  &((*pArbol)->hijoIzquierdo)  , pDatos  );
		} else {
			// el dato que quiero insertar es mayor que el nodo actual
			if( pDatos.puntaje > (*pArbol)->datos.puntaje ) {
				insertarElemento(  &((*pArbol)->hijoDerecho)  , pDatos  );	
				// el dato que quiero insertar es igual que el nodo actual
			}  else {
				printf("Valor duplicado, no es posible insertar!\n");
			}
		}
	}
}


void menu(){
	printf("\n\t\t\t***PARA JUGAR INDIQUE***\t\t\t\n");
	printf("\n\t\t\t1)Mujer\n\t\t\t2)Hombre\n\t\t\t");
	scanf("%i", &datos.genero);
	printf("\n\t\t\tIngrese su nombre de avatar: ");
	scanf("%s", &datos.nombre);
	
	Sleep(200);	
	getch();
}


void actualizarArchivo(tArbol * pArbol){
	

	if(pArbol!=NULL){
		actualizarArchivo(pArbol->hijoIzquierdo);
		
		//fwrite(arbol->datos, sizeof(tDatos), 1, archivoJuego);
		
		//registroArbol = pArbol->datos;
		//fwrite(&registroArbol, sizeof(tDatos), 1, archivoJuego);
		
		fwrite(&pArbol->datos, sizeof(tDatos), 1, archivoJuego);
		
		actualizarArchivo(pArbol->hijoDerecho);
	}
	
}

void finalizar(){	
	fclose(archivoJuego);
}







