//aula 13 - 7/ago/2019
//loop - comando for
//2° programa


#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
	int i = 1, j = 1;
	
	//for (parte1;parte2;parte3)
	for (i,j; i<=10; i++,j++)
	{
		//faça algo aqui
		cout <<"i: " << i <<endl;
		cout <<"j: " << j <<endl;
	}
	return 0;
}