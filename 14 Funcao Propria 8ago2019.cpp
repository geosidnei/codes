/*aula 14 - 8/ago/2019
Criando as próprias funções
1° programa
É legal dividir o programa por funções
para reaproveitar código e
dividir grandes problemas em problemas mais simples;
isso traz uma série de vantagens
*/

#include <iostream>
#include <locale>

using namespace std;

bool par(int num) //nossa função//
{
	if (num %2 ==0)
	   	return true;
	return false;   	
}

int main(int argc, char *argv[])//função principal
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	cout <<"Digite um número...\n"<<endl;
	cin >> n;
	//cout<<" ";
	if (par(n))//chamou a nossa função "par"
		cout <<"\nO número " << n << " é par!" <<endl;
	else
	   	cout <<"\nO número " << n << " é ímpar!" <<endl;
	
	return 0;
}
