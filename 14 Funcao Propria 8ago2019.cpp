/*aula 14 - 8/ago/2019
Criando as pr�prias fun��es
1� programa
� legal dividir o programa por fun��es
para reaproveitar c�digo e
dividir grandes problemas em problemas mais simples;
isso traz uma s�rie de vantagens
*/

#include <iostream>

using namespace std;

bool par(int num) //nossa fun��o//
{
	if (num %2 ==0)
	   	return true;
	return false;   	
}

int main(int argc, char *argv[])//fun��o principal
{
	int n;
	
	cout <<"digite um numero"<<endl;
	cin >> n;
	cout<<" ";
	if (par(n))//chamou a nossa fun��o "par"
		cout <<"o numero " << n << " eh par!" <<endl;
	else
	   	cout <<"o numero " << n << " eh impar!" <<endl;
	
	return 0;
}