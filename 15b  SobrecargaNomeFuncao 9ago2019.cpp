/*aula 15 - 9/ago/2019
Sobrecarga de nomes de fun��es
2� programa
Pode haver v�rias fun��es com mesmo nome
mas diferenciam-se por:
1. n�mero dela;
2. tipos da fun��o.
*/

#include <iostream>

using namespace std;

int soma (int n1, int n2)
{
	return n1 + n2;	
}	
	
int soma (int n1, int n2, int n3)
{
	return n1 + n2 + n3;	
}	

int main(int argc, char *argv[])
{
	cout << soma (1, 2) << endl;
	cout << soma (1, 2, 3) << endl;
	return 0;
}