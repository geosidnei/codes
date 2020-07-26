/*2a-feira, 15 de julho de 2019
Prof. Marcos Castro
Switch & Case
Aula 10/134
Calculadora super simples
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int num1, num2,resultado;
	float div;
	char op;//operação
	
	cout <<"Digite o primeiro numero: ";
	cin >> num1;
	cout <<"Digite o segundo numero: ";
	cin >> num2;
	cout <<"Digite a operacao ";
	cin >> op;
	
	switch (op)
	{
	case '+':	
		resultado = num1 + num2;
		cout <<"Soma: " << resultado <<endl;
		break;
	case '-':	
		resultado = num1 - num2;
		cout <<"Subtracao: " << resultado <<endl;
		break;
	case '*':	
		resultado = num1 * num2;
		cout <<"Multiplicacao: " << resultado <<endl;
		break;
	case '/':	
		if (num2 !=0)
		{
		div = (float) num1 / num2;
		cout <<"Divisao: " << div <<endl;
		}else {
		cout <<"Divisao por Zero :( Tente outra vez;/ "<<endl;
		}
		break;
	default:
		cout <<"Opcao invalida. Tente novamente :D" <<endl;
		break;
	case '^':	
		resultado = num1 ^ num2;//ele somou :D que doido!!
		cout <<"Resultado da Potenciacao" << resultado <<endl;
		break;
	}
	return 0;	
}
