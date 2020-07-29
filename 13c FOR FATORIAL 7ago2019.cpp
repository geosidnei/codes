//aula 13 - 7/ago/2019
//loop - comando for
//3° programa - FATORIAL !
/*
	Cálculo do Fatorial
	0! = 1! = 1
	3!= 3 * 2 * 1 = 6
	etc
*/


#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int fat = 1, i = 1, num;
	
	cout <<"Vou calcular o fatorial de um número para ti";
	cin >>num;
	
	for (i; i < num; i++)
	{
		fat = fat * (i + 1);
	}	
		cout << "Fatorial é... " << fat <<endl;
	return 0;
}