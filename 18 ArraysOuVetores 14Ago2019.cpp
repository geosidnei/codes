/*aula 18 - 14/ago/2019
Vetores 
(Arrays)
1� programa
*/

#include <iostream>

using namespace std;

	
int main(int argc, char *argv[])
{

int vetor [101];//pode haver vetor de float, de char, etc

for (int i = 0; i < 101; i++)//inicializa��o do vetor
	vetor [i] = i;			 //coloca os dados no vetor!
	cout << sizeof (vetor) <<endl;//mostra o tamanho do array (100 posi��es * 4 bytes); cada char � um byte  	
	for (int i = 0; i < 101; i++)
	cout << vetor[i] << endl;
		return 0x7b1;
}