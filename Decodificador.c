#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void Menu();

int main(){ 
	
	int C [3][3]={1,2,2,1,1,2,1,2,1}, C_1 [3][3]={-3,2,2,1,-1,0,1,0,-1}, menu, resp=0, j=0, i=0, k=0, t=0, vectores[17][3], largo=0, vectoresC[17][3], numVec=0;
	char cadena [51], caracter;
	srand(time(NULL));
	
	for(i=0;i<17;i++){
				for(j=0;j<3;j++){
					vectores[i][j]=28;
				}
			}
			
	while (resp==0){
		numVec=0;
		fflush(stdin);
		Menu();
	scanf ("%d", &menu);
	switch (menu) {
		case 1 : {
			
			system("cls");
			Menu();
			printf ("Ingrese la frase que desea codificar (MAXIMO 50 CARACTERES): ");
			
			scanf ("%s", &cadena);
			
			printf("\n\n\n");
			
			while(cadena[largo]!='\0'){
				largo++;
			}
			
			for(i=largo;i<51;i++){
				cadena[i]=' ';
			}
			
			k=0,j=0,i=0;
			for (i=0;i<51;i++){
				if(k==3){
					k=0;
					j++;
				}
				
				caracter=cadena[i];
				switch(caracter){
					case 'a':case'A':{
						vectores[j][k]=1;
						k++;
						break;
					}
					case 'b':case'B':{
						vectores[j][k]=2;
						k++;
						break;
					}
					case 'c':case'C':{
						vectores[j][k]=3;
						k++;
						break;
					}
					case 'd':case'D':{
						vectores[j][k]=4;
						k++;
						break;
					}
					case 'e':case'E':{
						vectores[j][k]=5;
						k++;
						break;
					}
					case 'f':case'F':{
						vectores[j][k]=6;
						k++;
						break;
					}
					case 'g':case'G':{
						vectores[j][k]=7;
						k++;
						break;
					}
					case 'h':case'H':{
						vectores[j][k]=8;
						k++;
						break;
					}
					case 'i':case'I':{
						vectores[j][k]=9;
						k++;
						break;
					}
					case 'j':case'J':{
						vectores[j][k]=10;
						k++;
						break;
					}
					case 'k':case'K':{
						vectores[j][k]=11;
						k++;
						break;
					}
					case 'l':case'L':{
						vectores[j][k]=12;
						k++;
						break;
					}
					case 'm':case'M':{
						vectores[j][k]=13;
						k++;
						break;
					}
					case 'n':case'N':{
						vectores[j][k]=14;
						k++;
						break;
					}
					case 'ñ':case'Ñ':{
						vectores[j][k]=15;
						k++;
						break;
					}
					case 'o':case'O':{
						vectores[j][k]=16;
						k++;
						break;
					}
					case 'p':case'P':{
						vectores[j][k]=17;
						k++;
						break;
					}
					case 'q':case'Q':{
						vectores[j][k]=18;
						k++;
						break;
					}
					case 'r':case'R':{
						vectores[j][k]=19;
						k++;
						break;
					}
					case 's':case'S':{
						vectores[j][k]=20;
						k++;
						break;
					}
					case 't':case'T':{
						vectores[j][k]=21;
						k++;
						break;
					}
					case 'u':case'U':{
						vectores[j][k]=22;
						k++;
						break;
					}
					case 'v':case'V':{
						vectores[j][k]=23;
						k++;
						break;
					}
					case 'w':case'W':{
						vectores[j][k]=24;
						k++;
						break;
					}
					case 'x':case'X':{
						vectores[j][k]=25;
						k++;
						break;
					}
					case 'y':case'Y':{
						vectores[j][k]=26;
						k++;
						break;
					}
					case 'z':case'Z':{
						vectores[j][k]=27;
						k++;
						break;
					}
					case ' ':{
						vectores[j][k]=0;
						k++;
						break;
					}
					default:{
						vectores[j][k]=28;
						k++;
						break;
					}
				}
			}
			
	
			for(i=0;i<17;i++){
				if((vectores[i][0]==0)&&(vectores[i][1]==0)&&(vectores[i][2]==0)){
					j=3;
					}
					else{
				printf("[");
				for(j=0;j<3;j++){
					printf(" %d ", vectores[i][j]);	
					}
				printf("] ");
				}
			}
			
			printf("\n\n\n");
			
			for(i=0;i<17;i++){
				for(j=0;j<3;j++){
					switch(j){
						case 0:{
							vectoresC[i][j]=((vectores[i][0])+(vectores[i][1])+(vectores[i][2]));
							break;
						}
						case 1:{
							vectoresC[i][j]=(((vectores[i][0])*2)+(vectores[i][1])+((vectores[i][2])*2));
							break;
						}
						case 2:{
							vectoresC[i][j]=(((vectores[i][0])*2)+((vectores[i][1])*2)+(vectores[i][2]));
							break;
						}
					}
				}
			}
			
			
			
			for(i=0;i<17;i++){
				if((vectoresC[i][0]==0)&&(vectoresC[i][1]==0)&&(vectoresC[i][2]==0)){
					j=3;
					}
					else{
				printf("[");
				for(j=0;j<3;j++){
					printf(" %d ", vectoresC[i][j]);	
					}
				printf("] ");
				numVec++;
				}
			}
			printf("\n\n\nEl numero de vectores a cargar para decodificar es: %d.", numVec);
			printf("\n----------------------------------------------------------------------------------------------------");
			printf("\n\nPresione una tecla para volver al menu.\n");
			scanf("%d",&resp);
			resp=0;
			break;
		}
		
		case 2 : {
			system("cls");
			Menu();
			printf("Cuantos vectores quiere cargar: ");
			scanf("%d",&t);
			while(t <=0){
			printf("ERROR. Ingrese un valor mayor a 0");
			scanf("%d",&t);
			}
			system("cls");
			Menu();
			for(i=0;i<t;i++){
				printf("Ingrese el %d vector: ",i+1);
				for(j=0;j<3;j++){
					scanf("%d",&vectoresC[i][j]);
				}
				system("cls");
				Menu();
			}
			for(i=t;i<17;i++){
				for(j=0;j<3;j++){
					vectoresC[i][j]=0;
				}
			}
			for(i=0;i<17;i++){
				for(j=0;j<3;j++){
					switch(j){
						case 0:{
							vectores[i][j]=(((vectoresC[i][0])*(-3)) + (vectoresC[i][1]) + (vectoresC[i][2]));
							break;
						}
						case 1:{
							vectores[i][j]=(((vectoresC[i][0])*(2))-(vectoresC[i][1]));
							break;
						}
						case 2:{
							vectores[i][j]=(((vectoresC[i][0])*(2))-(vectoresC[i][2]));
							break;
						}
					}
				}
			}
			
			for(i=0;i<51;i++){
			cadena[i]=' ';
			}
			
			i=0, j=0, k=0;
			for(j=0;j<17;j++){
				for(k=0;k<3;k++){
					switch(vectores[j][k]){
					case 1:{
						cadena[i]='a';
						i++;
						break;
					}
					case 2:{
						cadena[i]='b';
						i++;
						break;
					}
					case 3:{
						cadena[i]='c';
						i++;
						break;
					}
					case 4:{
						cadena[i]='d';
						i++;
						break;
					}
					case 5:{
						cadena[i]='e';
						i++;
						break;
					}
					case 6:{
						cadena[i]='f';
						i++;
						break;
					}
					case 7:{
						cadena[i]='g';
						i++;
						break;
					}
					case 8:{
						cadena[i]='h';
						i++;
						break;
					}
					case 9:{
						cadena[i]='i';
						i++;
						break;
					}
					case 10:{
						cadena[i]='j';
						i++;
						break;
					}
					case 11:{
						cadena[i]='k';
						i++;
						break;
					}
					case 12:{
						cadena[i]='l';
						i++;
						break;
					}
					case 13:{
						cadena[i]='m';
						i++;
						break;
					}
					case 14:{
						cadena[i]='n';
						i++;
						break;
					}
					case 15:{
						cadena[i]='ñ';
						i++;
						break;
					}
					case 16:{
						cadena[i]='o';
						i++;
						break;
					}
					case 17:{
						cadena[i]='p';
						i++;
						break;
					}
					case 18:{
						cadena[i]='q';
						i++;
						break;
					}
					case 19:{
						cadena[i]='r';
						i++;
						break;
					}
					case 20:{
						cadena[i]='s';
						i++;
						break;
					}
					case 21:{
						cadena[i]='t';
						i++;
						break;
					}
					case 22:{
						cadena[i]='u';
						i++;
						break;
					}
					case 23:{
						cadena[i]='v';
						i++;
						break;
					}
					case 24:{
						cadena[i]='w';
						i++;
						break;
					}
					case 25:{
						cadena[i]='x';
						i++;
						break;
					}
					case 26:{
						cadena[i]='y';
						i++;
						break;
					}
					case 27:{
						cadena[i]='z';
						i++;
						break;
					}
					case 0:{
						cadena[i]=' ';
						i++;
						break;
					}
					default:{
						cadena[i]=' ';
						i++;
						break;
					}
				}
			}
		}
			printf("\n\n");
			printf("----------------------------------------------------------------------------------------------------\nMensaje decodificado:                     ");
			for(i=0;i<51;i++){
				printf("%c",cadena[i]);
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\n\nPresione una tecla para volver al menu.\n");
			scanf("%d",&resp);
			resp=0;
		}
			break;	
		
		case 3 : {
			resp++;
			break;
		}
		default : {
			system("cls");
			Menu();
			printf ("\nERROR, comando inexistente."); 
			printf("\n----------------------------------------------------------------------------------------------------");
			printf("\n\nPresione una tecla para continuar.\n");
			scanf("%d",&resp);
			resp=0;
			break;
		}
			
	}
	system("cls");
}
	Menu();
	printf ("\nPRESIONE CUALQUIER TECLA PARA SALIR.\n\nIntegrantes: Machuanin Elias, Billasante Juan, Raso Julian, Aranda Renzo.\n");
	
}

void Menu(){
	printf("                            TRABAJO INTEGRADOR DE MATEMATICA DISCRETA\n\n==================================================================================================\n|");
	printf("                                                                                                |\n|                                            MENU                                                |\n|                                            ====                                                |\n|                                                                                                |\n|                                         1-Codificar                                            |\n|                                         2-Decodificar                                          |\n|                                         3-Salir                                                |\n|                                                                                                |");
	printf("\n==================================================================================================\n\n");
}
