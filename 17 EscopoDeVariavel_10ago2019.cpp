/*aula 17 - 11/ago/2019
Escopo de variável
1° programa
variáveis globais e locais
globais// todas as funções a acessam
locais // somente a função local a acessa.
variáveis estáticas: CONSTANTES!!
*/

#include <iostream>
#include <locale>

using namespace std;

int num_global = 12;// global

void foo()
{
	setlocale(LC_ALL, "Portuguese");
	int num = 10;//local
	static int num_static = 1;
	cout <<"Variável local....  " << num << endl;
	cout <<"Variável global...  "<< num_global << endl;
	num_static++;//contar quantas vezes uma função é chamada: chamaria contador
	cout <<"Variável estática..  "<< num_static << endl;
	cout<<" "<<endl;		
}	
	
int main(int argc, char *argv[])
{
	foo();
	foo();
	foo();
	return 0x7e4;
}