#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <list>
#include <stdbool.h>

using namespace std;

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80


//PROTOTIPADO
int jugabilidad();
void gotoxy(int, int);
void ocultarCursor();
void pintar_limites();
void pintarNave();
void vidas(int);
void corazones(int);
void explocion(void);
int jugar();

int condicionVidas();

int acumularPuntaje(int);

//variables globales
int x=40;
int y=30;
int Num_vidas=3;
int Corazones=3;

//definimos las coordenadas de los obstaculos
int y1=8, x1=12;
int y2=12, x2=17;
int y3=6, x3=58;
int y4=9, x4=70;
int y5=7, x5=40;
int y6=4, x6=38;
int y7=4, x7=24;


//variables para la rutina de cambio de nivel
int repeticion=0;
int nivel=1;
bool condicion=false;//bandera

int puntaje=0;


int jugabilidad(){
	system("COLOR 15");
	ocultarCursor();
	system("COLOR 15");
	pintar_limites();
	system("COLOR 1F");
	pintarNave();
	vidas(Num_vidas);
	corazones(Corazones);
	//gotoxy(35,1); printf("NIVEL: %i", nivel);
	
	while(Num_vidas > 0 ){
		jugar();
		puntaje+=2;
		
	}
		
	return puntaje;
		
		//return puntaje=puntaje+1;
	
	condicionVidas();
	//puntaje=0;	
		
}

void gotoxy(int x, int y){ 
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	
	SetConsoleCursorPosition(hCon, dwPos);
}

void ocultarCursor(){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize=2; //este es el tamaño del pulsor
	cci.bVisible=FALSE;//esto es para que se muestre por pantalla el pulsor(true muestra, false no muestra)
	
	SetConsoleCursorInfo(hCon,&cci);
	
	
}

void pintar_limites(){
	for(int i=2;i<78;i++){
		gotoxy(i,3); printf("%c",205);
		gotoxy(i,33); printf("%c",205);
		
		
	}
	
	for(int i=4; i<33; i++){
		gotoxy(2,i); printf("%c",186);
		gotoxy(77,i); printf("%c",186);
	}
	
	gotoxy(2,3);printf("%c", 201);
	gotoxy(2,33);printf("%c", 200);
	gotoxy(77,3);printf("%c", 187);
	gotoxy(77,33);printf("%c", 188);
	
	
}

void pintarNave(){
	gotoxy(x,y);printf("  %c",30);
	gotoxy(x,y+1);printf(" %c%c%c",40,207,41);
	gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);
}

void vidas(int vi){
	
	gotoxy(2,1);printf("VIDAS %i",vi);
}

void corazones(int n){
	int i;
	gotoxy(72,1);printf(" ");
	gotoxy(73,1);printf(" ");
	gotoxy(74,1);printf(" ");
	
	for(i=0;i<n;i++){
		gotoxy(72+i,1);
		printf("%c",3);
		
	}
}



void explocion(void){
	gotoxy(x,y);printf("     ");
	gotoxy(x,y+1);printf("        ");//el +1 es para que imprima en la linea de abajo
	gotoxy(x,y+2);printf("         ");
	
	Sleep(300);//para el tiempo en milisegundo para que se vea la explocion	

}

//aca vamos a tener la rutina del juego, los asteroides, etc
int jugar(){
	
	//rutina de los asteroides
	gotoxy(30, 1);printf("PUNTAJE: %i",puntaje);
	
	gotoxy(x1,y1);printf("%c",4);
	gotoxy(x2,y2);printf("%c",2);
	gotoxy(x3,y3);printf("%c",4);
	gotoxy(x4,y4);printf("%c",15);
	gotoxy(x5,y5);printf("%c",157);
	gotoxy(x6,y6);printf("%c",184);
	gotoxy(x7,y7);printf("%c",169);
	
	
	Sleep(70);
	
	gotoxy(x1,y1);printf(" ");
	gotoxy(x2,y2);printf(" ");
	gotoxy(x3,y3);printf(" ");
	gotoxy(x4,y4);printf(" ");
	gotoxy(x5,y5);printf(" ");
	gotoxy(x6,y6);printf(" ");
	gotoxy(x7,y7);printf(" ");
	
	if(y1>30){
		y1=4;
		x1=(rand()%70)+6;
		
		
		
	}
	if(y2>30){
		y2=4;
		x2=(rand()%70)+6;
	}
	if(y3>30){
		y3=4;
		x3=(rand()%70)+6;
	}
	if(y4>30){
		y4=4;
		x4=(rand()%70)+6;
	}
	if(y5>30){
		y5=4;
		x5=(rand()%70)+6;
	}
	if(y6>30){
		y6=4;
		x6=(rand()%70)+6;
	}
	if(y7>30){
		y7=4;
		x7=(rand()%70)+6;
	}
	
	//rutina para mover avion
	if(kbhit()){
		
		unsigned char tecla=getch();
		
		switch(tecla){
			
			case IZQUIERDA:
				if(x>4){
					gotoxy(x,y);printf("     ");
					gotoxy(x,y+1);printf("     ");
					gotoxy(x,y+2);printf("     ");
					
					x-=2;//x=x-2
					
					gotoxy(x,y);printf("  %c",30);
					gotoxy(x,y+1);printf(" %c%c%c",40,207,41);
					gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);
				}break;
				
			case DERECHA:
				
				if(x<70){
					
					gotoxy(x,y);printf("     ");
					gotoxy(x,y+1);printf("     ");
					gotoxy(x,y+2);printf("     ");
					
					x+=2;//x=x+2
					
					gotoxy(x,y);printf("  %c",30);
					gotoxy(x,y+1);printf(" %c%c%c",40,207,41);
					gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);
				}break;
				
			case ARRIBA:
			
				if(y>4){
					gotoxy(x,y);printf("     ");
					gotoxy(x,y+1);printf("     ");
					gotoxy(x,y+2);printf("     ");
					
					y-=2;//y=y-2
					
					gotoxy(x,y);printf("  %c",30);
					gotoxy(x,y+1);printf(" %c%c%c",40,207,41);
					gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);
					
				}break;
				
			case ABAJO:
				
				if(y<30){
					gotoxy(x,y);printf("     ");
					gotoxy(x,y+1);printf("     ");
					gotoxy(x,y+2);printf("     ");
					
					y+=2;//y=y-2
					
					gotoxy(x,y);printf("  %c",30);
					gotoxy(x,y+1);printf(" %c%c%c",40,207,41);
					gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);
					
				}break;	
				
				
				
			
		}//fin del switch
		
	}//fin del if
	
	//rutina para golpes de asteroides
	if((x1>x&& x1<x+6 && y1==y-1)||(x2>x&& x2<x+6 && y2==y-1)||(x3>x&& x3<x+6 && y3==y-1)||(x4>x&& x4<x+6 && y4==y-1)
	||(x5>x&& x5<x+6 && y5==y-1)||(x6>x&& x6<x+6 && y6==y-1)||(x7>x&& x7<x+6 && y7==y-1))
	
	{
		Corazones--;
		corazones(Corazones);
		printf("\a");//cada que le pegue va a hacer un sonido
		
	}
	//volvemos a imprimir el avion
	gotoxy(x,y);printf("  %c",30);
	gotoxy(x,y+1);printf(" %c%c%c",40,207,41);
	gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);
	
	if(Corazones==0){
		
		Num_vidas--;
		
		vidas(Num_vidas);
		explocion();
		Corazones=3;
		
		corazones(Corazones);
		
	}
	
	
	
	if(Num_vidas==0){
	gotoxy(20,15); printf("\n\n\n\t\t\t\t\tGAME OVER");		
	printf("\n\n\n\t\t\t\t\tPUNTAJE FINAL: %i", puntaje);
	Sleep(200);	
	
	getch();
	
	//int condicionVidas();
	
	}
	
	
	
	//incremetar las y para que se muevan
	y1++;
	y2++;
	y3++;
	y4++;
	y5++;
	y6++;
	y7++;
	
	
	
		
}


int condicionVidas(){

	
	if(Num_vidas==0){
	gotoxy(20,15); printf("\n\n\n\t\t\t\t\tGAME OVER");		
	printf("\n\t\t\tPUNTAJE FINAL: %i", puntaje);
	Sleep(200);	
	
	getch();
	
	return puntaje;
	
	}
	
}




