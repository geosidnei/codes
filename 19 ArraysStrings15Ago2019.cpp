/*aula 19 - 15/ago/2019
Vetores de Strings 
(Arrays from Strings)
1° programa char
*/

#include <iostream>

using namespace std;

	
int main(int argc, char *argv[])
{

char nome [] = {'S','i','d','n','e','i','\0',}; //String de caracteres

	int i = 0;
	while (nome [i] !='\0')
	{
		cout << nome [i];
		i++; 
	}
		
//cout << nome << endl;// bem mais símpris//
		return 0;
}