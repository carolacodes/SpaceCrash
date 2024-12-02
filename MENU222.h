
#include "2secundarioMenu.h"


void SpaceScrash(int,int);
void menuPrincipal();



void menuPrincipal(){
	//SpaceScrash(x,y);
	Sleep(1600);
	
	
	
	//ESTO MOVER AL ARCHIVO
	//jugabilidad();
	
	
	//gotoxy(30,1);printf("PUNTAJE: %i", puntaje);	
	//Sleep(1800);
	//system("cls");
	getch();
    
	
		
	
}




void SpaceScrash(int px, int py){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color(hConsole,2);
	for(x=15;x<=15;x++){
    gotoxy(x,y);printf("         ");y++; 
    gotoxy(x,y);printf("         ");y++;
    gotoxy(x,y);printf("         ");y++;
    gotoxy(x,y);printf("         ");y++;
    gotoxy(x,y);printf("   ****** ********    *****   ********* *********");y++;
    gotoxy(x,y);printf(" ******** *********  *******  ********* *********");y++;
    gotoxy(x,y);printf("****      ***   *** **** **** ***       ***      ");y++;
    gotoxy(x,y);printf("*******   ***   *** ***   *** ***       *********");y++;
    gotoxy(x,y);printf("   *****  ********* ********* ***       *********");y++;
    gotoxy(x,y);printf("     **** *******   ***   *** ***       ***      ");y++;
    gotoxy(x,y);printf("********* ***       ***   *** ********* *********");y++;
    gotoxy(x,y);printf("*******   ***       ***   *** ********* *********");y++;
    gotoxy(x,y);printf("         ");y++;
    gotoxy(x,y);printf("********* ********    *****      ******  ***   ***");y++;
    gotoxy(x,y);printf("********* *********  *******   ********  ***   ***");y++;
    gotoxy(x,y);printf("***       ***   *** **** **** ****       ***   ***");y++;
    gotoxy(x,y);printf("***       ***   *** ***   *** *******    *********");y++;
    gotoxy(x,y);printf("***       ********* *********     *****  *********");y++;
    gotoxy(x,y);printf("***       *******   ***   ***      ****  ***   ***");y++;
    gotoxy(x,y);printf("********* ***   *** ***   *** *********  ***   ***");y++;
    gotoxy(x,y);printf("********* ***   *** ***   *** *******    ***   ***");y++;
    }
}


