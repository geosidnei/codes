/*aula 14b - 8/ago/2019
Criando as pr�prias fun��es
2� programa: outra forma de escrever a fun��o
� legal dividir o programa por fun��es
para reaproveitar c�digo e
dividir grandes problemas em problemas mais simples
que traz uma s�rie de vantagens

*/

#include <iostream>

using namespace std;

bool par(int num);//prot�tipo da fun��o que avisa ao compilador que ela existe/
void mensagem(); //fun��o vazia: s� para imprimir uma mensagem. 

int main(int argc, char *argv[])//fun��o principal
{
	int n;
	
	mensagem();
	cout <<"digite um numero"<<endl;
	cin >> n;
	cout<<" ";
	mensagem();
	if (par(n))//chamou a nossa fun��o "par"
		cout <<"o numero " << n << " eh par!" <<endl;
	
	else
	   	cout <<"o numero " << n << " eh impar!" <<endl;
	
	return 0;
}

void mensagem()
{
	cout <<"Aprendendo C++ "<<endl;
}

bool par(int num) //nossa fun��o//
{
	if (num % 2 == 0)
	   	return true;
	return false;   	
}
