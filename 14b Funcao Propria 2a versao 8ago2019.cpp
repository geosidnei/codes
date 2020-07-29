/*aula 14b - 8/ago/2019
Criando as próprias funções
2° programa: outra forma de escrever a função
É legal dividir o programa por funções
para reaproveitar código e
dividir grandes problemas em problemas mais simples
que traz uma série de vantagens

*/

#include <iostream>

using namespace std;

bool par(int num);//protótipo da função que avisa ao compilador que ela existe/
void mensagem(); //função vazia: só para imprimir uma mensagem. 

int main(int argc, char *argv[])//função principal
{
	int n;
	
	mensagem();
	cout <<"digite um numero"<<endl;
	cin >> n;
	cout<<" ";
	mensagem();
	if (par(n))//chamou a nossa função "par"
		cout <<"o numero " << n << " eh par!" <<endl;
	
	else
	   	cout <<"o numero " << n << " eh impar!" <<endl;
	
	return 0;
}

void mensagem()
{
	cout <<"Aprendendo C++ "<<endl;
}

bool par(int num) //nossa função//
{
	if (num % 2 == 0)
	   	return true;
	return false;   	
}
