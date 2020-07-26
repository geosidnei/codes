//Domingo, 7 de julho de 2019
//Condicional IF - 1a parte
//Aula 8/134

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

	int dinheiro = 20;
	
	if(dinheiro>10) {
		cout <<"Tenho "; 
		cout << dinheiro; 
		cout <<" reais. Vou ao cinema!"<<endl;
		cout <<""<<endl;
	}
	else {
		cout <<"Irei ao cinema quando tiver dinheiro" << endl;
		cout <<""<<endl;
	}  
		
	// = atribuição
	// == igualdade


	// operador maior ou igual	
	int num = 10;
	
	if(num >= 10) {
		cout <<"O numero eh "; 
		cout << num; 
		cout <<" igual ou maior que 10"<<endl;
		cout <<""<<endl;
	}
	
	// operador menor que
	
	int menor = 9;
	
	if (menor < 10) {
		cout << "O numero eh "; 
		cout << menor; 
		cout <<" ele eh menor que 10"<<endl;
		cout <<""<<endl;	
	}
	
	// operador menor ou igual a
	
	int menor2 = 10;
	
	if (menor2 <= 10) {
		cout << "O numero eh "; 
		cout << menor2; 
		cout <<" ele eh menor que ou igual a 10"<<endl;
		cout <<""<<endl;	
	}
	
	// operador diferente !=
	
	int dif = 77;
	
	if (dif != 10) {
		cout << "O numero eh "; 
		cout << dif; 
		cout <<" Ele eh diferente de 10"<<endl;
		cout <<""<<endl;	
	}
	
	//Recomenda-se aos iniciantes sempre usar chaves com IF
	//Mas se você não tiver mais nenhum código atrelado
	//ao IF, você pode omitir as chaves.
	//Exemplo
		
	int ex = 88;
	
	if (ex != 10) {
		cout << "O numero eh "; 
		cout << ex; 
		cout <<" Ele eh diferente de 10"<<endl;
		cout <<""<<endl;	
		ex++;
	}
	else {
		ex--;
		cout <<"o numero eh...  ";
		cout <<ex <<endl;
	}
	cout << ex;	
	
return 0;	
}
