/*aula 19 - 15/ago/2019
Vetores de Strings 
(Arrays from Strings)
2� programa char
*/

#include <iostream>

using namespace std;

	
int main(int argc, char *argv[])
{

char nome [] = "Sidnei"; //String de caracteres

//cout << nome << endl;// bem mais s�mpris//

	int i = 0;
	//while (nome [i] !='\0')//testa a condi��o no come�o do loop
	//{
	//	cout << nome [i++];
	//}
	
	nome [0] = 's';	
	do
	{
	cout << nome [i];	
	}
	while (nome [i++]);//testa a condi��o no fim do loop.
		
	
	//invers�o de  String 8:11...

	
			
		return 0;
}