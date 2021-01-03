#include "std_lib_facilities.h"

int ga[10] = {1,2,4,8,16,32,64,128,256,512};

void kiiras(int* tomb, int meret)
{
	for (int i = 0; i <meret; ++i)
	{
		cout<<"tomb "<<i+1<<". eleme: "<<tomb[i]<<endl;
	}

	cout<<endl;
}

void kiiras_strore(int* r)
{
	for (int i = 0; i < 10; ++i)
	{
		cout<<"Pointer erteke: "<<r[i]<<endl;
	}
	cout<<endl;
}

void f(int array[], int array_size)
{
	int la[10];

	for (int i = 0; i <10; ++i)
	{
		la[i]=ga[i];

	}

	kiiras(la,10);

	int* p = new int[array_size];

	for (int i = 0; i < array_size; ++i)
	{
		p[i]=array[i];
	}

	kiiras_strore(p);

	delete[] p;

}


void init_aa(int* a, int a_meret)
{	
	int fakt_valtozo=2;

	for (int i = 0; i < a_meret; ++i)
	{
		int c=1;

		for (int j = 1; j < fakt_valtozo; ++j)
		{
			
			c*=j;

		}
		++fakt_valtozo;
		a[i]=c;
	}
	
}

int main()
try{

	f(ga,10);

	int aa[10];

	init_aa(aa,10);

	f(aa,10);


	return 0;
}
catch(exception& e)
{
	cerr<<"exception:"<<e.what()<<'\n';
	return 1;
}
catch(...){
	cerr<<"Unknown exception\n";
	return 2;
}