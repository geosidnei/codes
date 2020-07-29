/*aula 14b - 8/ago/2019
Criando as próprias funções
2° programa: outra forma de escrever a função
É legal dividir o programa por funções
para reaproveitar código e
dividir grandes problemas em problemas mais simples
que traz uma série de vantagens

*/

#include <iostream>
#include <locale>

using namespace std;

bool par(int num);//protótipo da função que avisa ao compilador que ela existe/
void mensagem(); //função vazia: só para imprimir uma mensagem. 

int main(int argc, char *argv[])//função principal
{
	int n;
	
	mensagem();
	cout <<"Digite um número"<<endl;
	cin >> n;
	
	mensagem();
	if (par(n))//chamou a nossa função "par"
		cout <<"O número " << n << " é par!" <<endl;
	
	else
	   	cout <<"O número " << n << " é impar!" <<endl;
	
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
