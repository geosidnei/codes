/*aula 20 - 20/ago/2019
Vetores de Caracteres
(Strings)
6� programa
*/

#include <iostream>
#include <string.h>//ctrl+enter mostra todas as fun��es da biblioteca
#include <locale>

using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");   	
	char str1[100], str2[100];  	 

		 cout << "\nDigite a 1a string\n ";  
	  	 cin >> str1;
 	 	 cout << "\nDigite a 2a string\n ";  
	  	 cin >> str2;
	  	 
		   if (strstr(str1, str2))
		   	cout <<"\n� substring" <<endl;
		   else 
		   cout <<"\nn�o � substring" <<endl;
		   		   	 	 	  	 
	return 77;
}