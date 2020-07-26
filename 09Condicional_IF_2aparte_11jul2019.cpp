//5a-feira, 11 de julho de 2019
//Condicional IF - 2a parte
//Ifs aninhados - um "drento do outro"
//Operadores lógicos para condicionais compostas
//Aula 9/134

#include <iostream>

using namespace std;

	int num = 10;
	int n = 20;
	int p = 17;
	bool var = 10>20;
	bool var2= 11<20;	
	
int main(int argc, char *argv[])
	{
			
	if(num >5){
		if(num<=10){
		cout << "O numero esta entre 5 e 10"<<endl;
		}
	} 

	//Condicional composta
	//1a condicional
	//Testa se o número é par %:
	//e (&&) testa se ele é menor que determinado número
	
	if((n % 2== 0) && n<25)
	{
		cout<<"o numero eh par e menor que 25"<<endl;
	}
	
	//expressão ou (||)
	
	if((p % 2== 0) || p<25)
	{
		cout<<"Ou p eh par ou menor que 25"<<endl;
	}
	
	//expressão not (!)
	
	if(!(p % 2== 0) )
	{
		cout<<"O numero 'p' eh impar"<<endl;
	}
	
	//saída zero significa falso
	//saída um significa verdadeiro
	
	//If (var)
	{
		cout <<"falso"<<endl;	
		}
	
	//if (var2){//pode-se omitir a condição, (var2!=0)-fica implícito
	{
	
		cout <<"Verdadeiro"<<endl;
	}
	
	bool var3 =false;
	bool var4 = true;
	
	if(!var3 && var4)
	{
		cout <<"aprendendo c++"<<endl;
	}
return 0;	
}
