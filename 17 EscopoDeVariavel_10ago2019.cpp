/*aula 17 - 11/ago/2019
Escopo de vari�vel
1� programa
vari�veis globais e locais
globais// todas as fun��es a acessam
locais // somente a fun��o local a acessa.
vari�veis est�ticas: CONSTANTES!!
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
	cout <<"Vari�vel local....  " << num << endl;
	cout <<"Vari�vel global...  "<< num_global << endl;
	num_static++;//contar quantas vezes uma fun��o � chamada: chamaria contador
	cout <<"Vari�vel est�tica..  "<< num_static << endl;
	cout<<" "<<endl;		
}	
	
int main(int argc, char *argv[])
{
	foo();
	foo();
	foo();
	return 0x7e4;
}