//Prof Marcos Castro
//Curso de C++ Intermedi�rio
//Udemy
//Aula 6 
//Operadores em C++
//Conclu�do em 22 jun 2019

#include <iostream>

using namespace std;

int main()
{
	float n1,n2,soma, produto, division;
	n1= 10;
	n2=20;
	
	int n3,n4,resto,subtr;
	n3=20;
	n4=10;
	
	//+ atua como operador bin�rio
	//pois atua sobre dois argumentos
	//que s�o n1 e n2
	
	soma = n1+n2;
	
	cout <<soma;
	cout<<" "<<endl;
	
	//multiplica��o
	produto = n1*n2;
	
	cout<<" "<<endl; 
	cout <<produto <<endl;
	
	//divis�o
	division = n1/n2;
	
	cout<<" "<<endl; 
	cout <<division <<endl;
	
	//resto
	resto = n4%n3;
	
	cout<<" "<<endl; 
	cout <<resto <<endl;
	
	//subtra��o
	subtr = n3-n4;
	
	cout<<" "<<endl; 
	cout <<subtr <<endl;
	
	//operadores un�rios:
	//p�s-incremental
	int s = 10;
	//contador via unidade, como o velho let s= s+1
	s++;
	
	cout <<""<<endl;
	cout<<s <<endl;
	//decremental
	//ou o velho let x = x-1
	int x = 24;
	x--;
	
	cout <<""<<endl;
	cout<<x <<endl;

	float k=77;
	//aqui � o velho step 7
	k +=7;
	
	cout <<""<<endl;
	cout<<k<<endl;
	//e o velho step -7
	k -=7;
	
	cout <<""<<endl;
	cout<<k<<endl;
	// let k = k*2 (pg multiplicando por 2)
	k *=2;
	
	cout<<k<<endl;
	//let k = k/5 (pg dividindo por 5)
	k /=5;
	
	cout <<""<<endl;
	cout<<k<<endl;
	
	//pr�-incremental
	int z = 222;
	++z;
	cout <<""<<endl;
	cout <<z;
	cout <<""<<endl;
	
	//outra dica de pr�-incremento
	int nr1 = 30;
	int nr2 = ++nr1;
	
	cout <<""<<endl;
	cout <<nr2;
	
	// e da mesma forma com "--z", "*", "/" etc
	
	
	//mudando preced�ncias de opera��es matem�ticas
	int m;
	m = 10+20/2;
	
	cout <<""<<endl;
	cout <<m;
	//ela ocorre com o uso dos par�ntesis
	
	m = (10+20)/2;
	
	cout <<""<<endl;
	cout <<m<<endl;
	
	//mudan�a de sinal de um n�mero
	int inv= 10;
	int inv2= -inv;
	
	cout <<""<<endl;
	cout<<inv2<<endl;
	
return 0;	
}
