//aula 12 
//6 ago 2019
//Loop comando While

#include <iostream>
#include <locale>
using namespace std;

int main(int argc, char** argv)
{
setlocale(LC_ALL, "Portuguese");
	int n =1;
	
	while(n<=100)
	{
		//if (n>50)
		//{
		//	break;//if break tbm para a execução do programam
		//}
		cout<<n<<endl;
		n++;	
	}
		cout<<"tarefa concluída"<<endl;
		   	
	return 0;
}
