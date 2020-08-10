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
	 //Primeira execução//
	//Endereços e variáveis
	int var = 10;
	int* pvar;     //esta linha inicializa um ponteiro
				  //sempre precisamos inicializar ponteiros
	   	   	     // o ponteiro tem que ser do mesmo tipo da variável
			    //Se a variável é int, o ponteiro é obrigado a ser int
	
	
	pvar = &var;//endereço da variável var//
    *pvar = 20;//mudando variável via ponteiro
	cout << &var <<" endereco de memoria\n" <<endl;
	cout << *pvar <<" valor da variavel\n" <<endl;

  	 //Segunda Execução - Void (foo)
	//foo - passagem por valor
   //Passagem da cópia da variável
  //armazenada na pilha da área de memória(stack)
 //essa pilha movimenta-se da direita para a esquerda.
	   foo (var);
	   cout << var << endl;
	   
	 //Terceira Execução - Void (foo)
	//foo - passagem por referência
   //Passagem da cópia da variável
  //armazenada na pilha da área de memória(stack)
    
	return 0x7b1;   
}

