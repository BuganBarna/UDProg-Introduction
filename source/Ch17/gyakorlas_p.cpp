#include "std_lib_facilities.h"
/*
ostream& iras(ostream& os, vector<int>* x)
{
	for(auto& i : *x)
	os<<i<<endl;

	return os;
}

void initv(vector<int>* x)
{
	int val=100;
	for(int i=0; i<10; ++i)
	{
		x->push_back(val);
		++val;
	}
}
*/
void deletev(vector<int*> v)
{
	for(auto& elemv : v) delete elemv;
}

void print_vector(vector<int*> v,int size)
{
	for(int i=0; i<size; ++i) cout<<"vector "<<i+1<<". eleme "<<v[i]<<endl;
}

void initv(vector<int*> v, int size)
{
	int val=100;

	for(int i=0; i<size; ++i)
	{
		v.push_back(new int{val});
		++val;
	}
}

void vissza(int* tomb)
{
	 tomb[0]=1;
}

int main()
{
	
	/*vector<int>* v = new vector<int>(10);
	initv(v);
	iras(cout,v);*/

	vector<int*> ten_vector;
	initv(ten_vector,10);
	print_vector(ten_vector,ten_vector.size());
	deletev(ten_vector);
	int array[2];
	vissza(array);
	int a=2;
	int* p=array;
	int* intp=&a;
	cout<<p[]<<endl;
	cout<<intp<<endl;

	cout<<endl;
	return 0;
}