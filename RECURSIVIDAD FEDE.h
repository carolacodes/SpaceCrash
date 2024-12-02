#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#define color SetConsoleTextAttribute


void ingresarvalor();
void cuentaregresiva(int);
void A(int,int);
void B(int,int);
void C(int,int);
void D(int, int );
void E(int, int );
void gotoxy(int,int);
void funcionCuentaRegresiva();


int xp,yp;
int valor; 


void funcionCuentaRegresiva(){
	valor= 5;
	cuentaregresiva(valor);
	
	
}
	
	
void cuentaregresiva(int valor){
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		color(hConsole,2);
		if(valor==-1){
			return;
		}
	switch(valor){
	case 0:
		gotoxy(22,15);
		 system("cls");
		 jugabilidad();
			
		 system("cls");
		 
		 break;	
	case 5:
			A(xp,yp);
	        Sleep(700);
	      break;
	case 4:
		   B(xp,yp);
		   Sleep(700);
		  break;
	case 3:
			C(xp,yp);
			Sleep(700);
			break;
	case 2:
			D(xp,yp);
			Sleep(700);
			break;
	case 1:
			E(xp,yp);
			Sleep(700);
			system("cls");
			break;
	    }
     cuentaregresiva(valor-1);
	
}	
	
void A(int xp, int yp ){
   gotoxy(xp,yp);printf("     \n\t\t\t\t         ");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t         ");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t*********");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t*********");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t**       ");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t**       ");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t*********");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t*********");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t      ***");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t      ***");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t*********");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t*********");yp++;
}

void B(int xp, int yp){
   gotoxy(xp,yp);printf("     \n\t\t\t\t         ");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t         ");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t***   ***");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t***   ***");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t***   ***");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t***   ***");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t*********");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t*********");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t      ***");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t      ***");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t      ***");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t      ***");yp++;
}

void C(int xp, int yp){ 
   gotoxy(xp,yp);printf("    \n\t\t\t\t          ");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t          ");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t       ***");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t       ***");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t       ***");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t       ***");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf("    \n\t\t\t\t *********");yp++;
}

void D(int xp, int yp){ 
   gotoxy(xp,yp);printf( "    \n\t\t\t\t          ");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t          ");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t       ***");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t       ***");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t ***      ");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t ***      ");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf( "    \n\t\t\t\t *********");yp++;
   
}

void E(int xp, int yp){
   gotoxy(xp,yp);printf("     \n\t\t\t\t         ");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t         ");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t   *******");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t  ********");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t *********");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t **** ****");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t      ****");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t      ****");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t      ****");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t      ****");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t   **********");yp++;
   gotoxy(xp,yp);printf("     \n\t\t\t\t   **********");yp++;
   
}
   

        

	
		

	
		

