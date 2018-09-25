#include <iostream>

using namespace std;

int func1 (float);
int func2 (float);
int func3 (float);
int func4 (float);
int main(int argc, char** argv)
{
int (*pf1[4]) (float);
	int opc;
	opc=0;
	int num;
	int valores;
	
	pf1[0]= func1;
	pf1[1]= func2;
	pf1[2]= func3;
	pf1[3]= func4;
	
do{
	cout<<" enteros a=10 y b=7 \n elija la operacion deseada"<<endl;
	cout<<"1. Suma"<<endl;
	cout<<"2. Resta"<<endl;
	cout<<"3. Multiplicacion"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<" Ingrese la opcion deseada"<<endl;
	cin>>opc;
	if(opc <5 and opc>-1){
	
int resultado =	pf1[opc-1](1.0);
cout<<resultado<<endl;
}	
	}while (opc!=5);
	
	return 0;
}
int func1(float n1){
	return 10+17;
}
int func2(float n1){
	return 10-7;
}
int func3(float n1){
	return 10*7;
}
int func4(float n1){
	return (int)(10/7);
}
