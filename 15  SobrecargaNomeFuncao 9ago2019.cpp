/*aula 15 - 9/ago/2019
Sobrecarga de nomes de fun��es
1� programa
Pode haver v�rias fun��es com mesmo nome
mas diferenciam-se por:
1. n�mero dela;
2. tipos da fun��o.
*/

#include <iostream>

using namespace std;

void mensagem (int n)
{	
	cout <<"numero: " << n << endl;
}	

void mensagem ()
{	
	cout <<"Oi turma" << endl;
}	

void mensagem (char c)
{	
	cout <<"caractere: " << c <<endl;
}

int main(int argc, char *argv[])
{
	mensagem(10);
	mensagem();
	mensagem('&');
	return 0;
}