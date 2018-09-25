#include <iostream>

using namespace std;

int conta=0;

void foo_function( int a[])
{
	int *p;
	p=&a[0];
    	p+=conta;
	cout<<*p<<endl;
	conta++;
}

int main(int argc, char** argv) 
{
	int arreglo[5]={0,2,4,6,8};
	for(int j=0;j<5;j++)
	{
		 foo_function(arreglo);
	}
	return 0;
}
