	//3a-feira, 15 de julho de 2019
   //Prof. Marcos Castro
  //Ponteiros - 1a aula
 //Aula 21/134

#include <iostream>

using namespace std;

void foo (int n){
		   n = 20;
}	

int main(int argc, char *argv[])
{
	 //Primeira execu��o//
	//Endere�os e vari�veis
	int var = 10;
	int* pvar;     //esta linha inicializa um ponteiro
				  //sempre precisamos inicializar ponteiros
	   	   	     // o ponteiro tem que ser do mesmo tipo da vari�vel
			    //Se a vari�vel � int, o ponteiro � obrigado a ser int
	
	
	pvar = &var;//endere�o da vari�vel var//
    *pvar = 20;//mudando vari�vel via ponteiro
	cout << &var <<" endereco de memoria\n" <<endl;
	cout << *pvar <<" valor da variavel\n" <<endl;

  	 //Segunda Execu��o - Void (foo)
	//foo - passagem por valor
   //Passagem da c�pia da vari�vel
  //armazenada na pilha da �rea de mem�ria(stack)
 //essa pilha movimenta-se da direita para a esquerda.
	   foo (var);
	   cout << var << endl;
	   
	 //Terceira Execu��o - Void (foo)
	//foo - passagem por refer�ncia
   //Passagem da c�pia da vari�vel
  //armazenada na pilha da �rea de mem�ria(stack)
    
	return 0x7b1;   
}

