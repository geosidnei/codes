/*aula 19 - 15/ago/2019
Vetores de Strings 
(Arrays from Strings)
3° programa char
inversão de  String 8:11...
*/

#include <iostream>

using namespace std;

void inverte(char nome[])
{
	//calcula o tamnhao da string
	int tam;
	for (tam = 0; nome [tam]; tam++);
	for (int i = tam-1; i >= 0; i--)
	cout << nome [i];
}

	
int main(int argc, char *argv[])
{
	char nome [] = "Sidnei"; //String de caracteres
	inverte(nome);
	//cout << inverte<<endl;
	return 7;
}