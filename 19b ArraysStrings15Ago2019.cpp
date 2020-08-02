/*aula 19 - 15/ago/2019
Vetores de Strings 
(Arrays from Strings)
2° programa char
*/

#include <iostream>

using namespace std;

	
int main(int argc, char *argv[])
{

char nome [] = "Sidnei"; //String de caracteres

//cout << nome << endl;// bem mais símpris//

	int i = 0;
	//while (nome [i] !='\0')//testa a condição no começo do loop
	//{
	//	cout << nome [i++];
	//}
	
	nome [0] = 's';	
	do
	{
	cout << nome [i];	
	}
	while (nome [i++]);//testa a condição no fim do loop.
		
	
	//inversão de  String 8:11...

	
			
		return 0;
}