#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#define color SetConsoleTextAttribute
#include "RECURSIVIDAD FEDE.h"


int mostrarMenu();
void pintar_marco();
void gotoxy(int,int);
int funcionMenu();

//int xp,yp;
int xcol;


int funcionMenu(){
	while (true){
	int decisionMenu= mostrarMenu();
	if(decisionMenu==0){
		return 0;
}
}			
}

int mostrarMenu(){
	 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int estado=system("cls");//system() funcion predefinida en la libreria stdlib
	if(estado==-1){
		mostrarMenu();
	}
	pintar_marco();
	int decision=0;
	color(hConsole,2);
	gotoxy(22,7);
	printf("\n\t\t\tMenu:");
	color(hConsole,4);
	gotoxy(22,9);
	printf("\n\t\t\t1) Jugar una ronda");
	gotoxy(22,11);
	printf("\n\t\t\t2) Salir\n");
	scanf("\n\t\t\t%i", &decision);
	switch(decision){
		case 1:
			system("cls");
			//funcionCuentaRegresiva();
			//system("cls");
			break;
		case 2:
			return 0;
			break;
		default:
			mostrarMenu();
		}	
		return 0;
}

void pintar_marco()       // funcion que pinta los limites del escenario
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color(hConsole,2);
	//borde izquierdo
        gotoxy (20,5); printf ("%c", 201);
        gotoxy(20,6); printf ("%c", 186);
        gotoxy(20,7); printf ("%c", 186);
        gotoxy(20,8); printf ("%c", 186);
        gotoxy(20,9); printf ("%c", 186);
        gotoxy(20,10); printf ("%c", 186);
        gotoxy(20,11); printf ("%c", 186);
        gotoxy(20,12); printf ("%c", 186);
        gotoxy (20,13); printf ("%c",200);
        
    //borde arriba y abajo
    for(xcol=21;xcol<=45;xcol++){
         gotoxy(xcol,5); printf ("%c", 205);
         gotoxy(xcol,13); printf ("%c", 205);
        }
    //borde derecho
     gotoxy (45,5); printf ("%c", 187);
        gotoxy(45,6); printf ("%c", 186);
        gotoxy(45,7); printf ("%c", 186);
        gotoxy(45,8); printf ("%c", 186);
        gotoxy(45,9); printf ("%c", 186);
        gotoxy(45,10); printf ("%c", 186);
        gotoxy(45,11); printf ("%c", 186);
        gotoxy(45,12); printf ("%c", 186);
        gotoxy (45,13); printf ("%c",188);
}


    

