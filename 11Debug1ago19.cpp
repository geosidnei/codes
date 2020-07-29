#include <iostream>
//aula 11 -1°/ago/2019
//Debug
using namespace std;

int main(int argc, char** argv)
{
//	int var = 10;
	
	//if (ver)
	//{
	//	cout << ver << endl;
	//}	
	
	//switch(var)
	//{
	//case value:
	//	break;
	//default:
	//	break;
	//}
	
	int ano, idade;
	
		cout << "digite o ano que vc nasceu" <<endl;
		cin >> ano;
		idade = 2019 - ano;
		cout <<"Idade: " <<idade<<endl;   	
	return 0;
}