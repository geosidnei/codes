       // - C++ Marcos Castro
      // aula 21/34
	 //Terceira Execu��o - Void (foo)
	//foo - passagem por endere�o
   
#include <iostream>

using namespace std;   

void foo (int* n)
{
	
	*n = 20;
}	

	int main(int argc, char *argv[])
	{
	int var = 10;
	
   foo (&var);
   cout << var << endl;
  
  return 0;
}