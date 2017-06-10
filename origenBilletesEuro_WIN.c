/*############
# ORIGENEURO #
##############

Este es un programa muy sencillo que nos dice el país donde ha sido imprimido
un billete de Euro a partir de la letra que precede a su número de serie.

Hice un menú para poder añadir más opciones en el futuro, como por ejemplo
añadir la opción de comprobar si el billete es falso a partir del algoritmo
que utilizan los números de serie de los billetes.

En caso de tener o creer tener un billete falso acudir a una sucursal bancaria para
comprobarlo, y en caso de ser falso proceder a su destrucción.

No intente pagar NUNCA con un billete que cree ser o es falso.

Cualquier modificación y/o mejora de este programa es bien recibida.

Programa creado por @miancolrin
Versión 1.0*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

void comprobarOrigen();

int main(){
	
	setlocale(LC_CTYPE, "Spanish"); //Caracteres españoles
	SetConsoleTitle("ORIGEN DE BILLETES EURO"); //Título de la ventana
	system("color 8F"); //Color de fondo y de letra
	
	char opc;
	
	do{
		
		system("cls");
		printf("===============MENÚ===============");
		printf("\n1. Comprobar origen de billete");
		printf("\n\n0. SALIR");
		
		opc = getch();
		
		switch(opc){
			
			case '1':{
				system("cls");
				comprobarOrigen();
				printf("\n\n\n");
				system("pause");
				break;
			}
			
		}
		
	}while(opc != '0');
	
	system("cls");
	printf("No me hago responsable de un mal uso de este programa");
	printf("\nCreado por @miancolrin");
	printf("\n\nPresione cualquier tecla para cerrar...");
	system("pause > null");
	
	return 0;
	
}

void comprobarOrigen(){
	
	char letraOrg;
	char letra;
	
	printf("Introduce la letra del número de serie en minúscula: ");
	scanf("%c", &letraOrg);
	
	switch(letraOrg){
		
		case 'a':{
			printf("\n\nEsea letra no forma parte de un número de serie de ningún billete");
			printf("\nSi tiene un billete con esta letra podría ser falso");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 'b':{
			printf("\n\nEsea letra no forma parte de un número de serie de ningún billete");
			printf("\nSi tiene un billete con esta letra podría ser falso");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 'c':{
			printf("\n\nEsea letra no forma parte de un número de serie de ningún billete");
			printf("\nSi tiene un billete con esta letra podría ser falso");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 'd':{
			printf("\n\nEsea letra no forma parte de un número de serie de ningún billete");
			printf("\nSi tiene un billete con esta letra podría ser falso");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 'e':{
			printf("\n\nEse billete fue imprimido en Eslovaquia");
			return;
		}
		case 'f':{
			printf("\n\nEse billete fue imprimido en Malta");
			printf("\nPuede que el billete sea falso, ya que Malta no emite Euros");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 'g':{
			printf("\n\nEse billete fue imprimido en Chipre");
			printf("\nPuede que el billete sea falso, ya que Chipre no emite Euros");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 'h':{
			printf("\n\nEse billete fue imprimido en Eslovenia");
			return;
		}
		case 'i':{
			printf("\n\nEsta letra se encuentra en desuso");
			printf("\nSi tiene un billete con esta letra podría ser falso");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 'j':{
			printf("\n\nEse billete fue imprimido en Reino Unido");
			printf("\nPuede que el billete sea falso, ya que Reino Unido no emite Euros");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 'k':{
			printf("\n\nEse billete fue imprimido en Suecia");
			return;
		}
		case 'l':{
			printf("\n\nEse billete fue imprimido en Finlandia");
			return;
		}
		case 'm':{
			printf("\n\nEse billete fue imprimido en Portugal");
			return;
		}
		case 'n':{
			printf("\n\nEse billete fue imprimido en Austria");
			return;
		}
		case 'o':{
			printf("\n\nEsta letra se encuentra en desuso");
			printf("\nSi tiene un billete con esta letra podría ser falso");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 'p':{
			printf("\n\nEse billete fue imprimido en Holanda");
			return;
		}
		case 'q':{
			printf("\n\nEsta letra se encuentra en desuso");
			printf("\nSi tiene un billete con esta letra podría ser falso");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 'r':{
			printf("\n\nEse billete fue imprimido en Luxemburgo");
			printf("\nPuede que el billete sea falso, ya que Luxemburgo no emite Euros");
			printf("\nAcuda a una sucursal bancaria para obtener ayuda");
			return;
		}
		case 's':{
			printf("\n\nEse billete fue imprimido en Italia");
			return;
		}
		case 't':{
			printf("\n\nEse billete fue imprimido en Irlanda");
			return;
		}
		case 'u':{
			printf("\n\nEse billete fue imprimido en Francia");
			return;
		}
		case 'v':{
			printf("\n\nEse billete fue imprimido en España");
			return;
		}
		case 'w':{
			printf("\n\nEse billete fue imprimido en Dinamarca");
			return;
		}
		case 'x':{
			printf("\n\nEse billete fue imprimido en Alemania");
			return;
		}
		case 'y':{
			printf("\n\nEse billete fue imprimido en Grecia");
			return;
		}
		case 'z':{
			printf("\n\nEse billete fue imprimido en Bélgica");
			return;
		}
		
	}
	
	printf("\n\nEsa letra no pertenece a ningún billete Euro");
	printf("\nAsegúrese de introducir la letra en minúscula");
	printf("\nEn caso de tener un billete con esa letra podría ser falso");
	printf("\nAcuda a una sucursal bancaria para obtener ayuda");
	
}
