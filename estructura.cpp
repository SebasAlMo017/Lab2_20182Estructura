# Lab2_20182Estructura
Laboratorio 2 de Informática 2 semestre 2018_2 Sebastian Alvarado y Nelson Villareal

#include <iostream>

using namespace std;

struct a {
	int numint1=1;
	char letra1='s';
	float numF=3.5;
	char letra2='n';
	double numD=3.45;
	int numint2=5;
};

struct b {
	int numint1=2;
	char letra1='p';
	float numF =3.4;
	char letra2='w';
	double numD=2.34;
	int numint2=8;
};

int main(int argc, char** argv) {
	struct a *pa;
	struct a x;
	pa=&x;
	struct b *pb;
	struct b y;
	pb=&y;
cout<<"estructura 1"<<endl;
cout<<"valor numint 1"<<pa->numint1<<endl;
cout<<"valor letra 1"<<pa->letra1<<endl;
cout<<"valor numF "<<pa->numF<<endl;
cout<<"valor letra 2"<<pa->letra2<<endl;
cout<<"valor numD 1"<<pa->numD<<endl;
cout<<"valor numint 2"<<pa->numint2<<endl;

cout<<"estructura 2 "<<endl;
cout<<"valor numint 1 "<<pb->numint1<<endl;
cout<<"valor letra 1 "<<pb->letra1<<endl;
cout<<"valor numF "<<pb->numF<<endl;
cout<<"valor letra 2 "<<pb->letra2<<endl;
cout<<"valor numD 1 "<<pb->numD<<endl;
cout<<"valor numint 2 "<<pb->numint2<<endl;

cout<<"estructura 1 "<<endl;
cout<<"valor numint 1 "<<(float) pa->numint1<<endl;
cout<<"valor letra 1 "<<pa->letra1<<endl;
cout<<"valor numF "<<(int)pa->numF<<endl;
cout<<"valor letra 2 "<<pa->letra2<<endl;
cout<<"valor numD 1 " <<(int)pa->numD<<endl;
cout<<"valor numint 2 "<<(double)pa->numint2<<endl;

cout<<"tamano a "<<sizeof(pa)<<endl;
cout<<"tamano b "<<sizeof(pb)<<endl;
	return 0;
}
