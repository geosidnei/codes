/*aula 16 - 9/ago/2019
Criando Módulos
1° programa
Você pode criar um módulo
com uma série de funções matemáticas, por ex.,
e pode incluí-lo em seu programa
quando precisar usar tais fórmulas
módulos são compilados separadamente
e juntados quando se faz  um programa que necessita deles.
Esta Estrutura Também serve para criar 
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
	cout << "Área do quadrado com lado " << n << ": " <<area_quadrado (5)<<endl;
	cout <<" "<<endl;
	cout << "Área do retângulo: " <<area_retangulo (5,7);
	cout <<" "<<endl;
	return 0x7d1;
}