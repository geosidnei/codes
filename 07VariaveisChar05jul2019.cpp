#include <iostream>

using namespace std;

int main(int argc, char *argv[] )
{
	
//	declaração das variáveis
char c1 = 'a';
char c2 = 'b';
int soma = c1+c2;

//impriime o caractere 'a'
cout << c1;
cout <<endl;
cout <<"";

//impriime o caractere 'b'
cout << c2;
cout <<endl;
cout <<"";

//transforma os caractere em número da tabela ASCII :D
cout <<(int)c1;
cout <<endl;
cout <<""; 
cout <<(int)c2;
cout <<endl;
cout <<"Agora vem o resultado da soma de int (a+b)";
cout <<endl;
cout <<"";
cout << soma; 


//Cuidado, para escrever aspas simples ''
//Precisa preceder de barra invertida
//Assim: \'
char aspas ='\'';

cout <<endl;
cout <<""; 
cout <<aspas;

return 0;	
}
