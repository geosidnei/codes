/*aula 16 - 9/ago/2019
Criando M�dulos
1� programa
Voc� pode criar um m�dulo
com uma s�rie de fun��es matem�ticas, por ex.,
e pode inclu�-lo em seu programa
quando precisar usar tais f�rmulas
m�dulos s�o compilados separadamente
e juntados quando se faz  um programa que necessita deles.
Esta Estrutura Tamb�m serve para criar 
Programas Orientados a Objetos
*/

#include <iostream>
#include "my_math.h"
#include <locale>
using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	int n = 5, m = 7;
	cout << "Fatorial de " << n << ": " <<fatorial (5) <<endl;
	cout <<" "<<endl;
	cout << "�rea do quadrado com lado " << n << ": " <<area_quadrado (5)<<endl;
	cout <<" "<<endl;
	cout << "�rea do ret�ngulo: " <<area_retangulo (5,7);
	cout <<" "<<endl;
	return 0x7d1;
}