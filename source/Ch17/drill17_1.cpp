#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	for(int i=0; i<10; ++i) os<<"tomb "<<i+1<<".eleme "<<a[i]<<endl;
	 
}

void initv(vector<int*>& v, int meret)
{
	int val=100;

	for(int i=0; i<meret; ++i)
	{
		v.push_back(new int{val});
		++val;
	}
}


void print_array(ostream& os,int* a,int n)
{
	for(int i=0; i<n; ++i)
	{
		os<<"tomb "<<i+1<<".eleme "<<a[i]<<endl;
	}

}

void print_vector(vector<int*> v,int size)
{
	for(int i=0; i<size; ++i) cout<<"vector "<<i+1<<". eleme "<<*v[i]<<endl;
}

void deletev(vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
		delete v[i];
}

void init_t(int* a, int meret)
{
	int val=100;

	for(int i=0; i<meret; ++i)
	{
		a[i]=val;
		++val;
	}
}
int main()
try{
	
	int* elso_p = new int[10] {0,0,0,0,0,0,0,0,0,0};
	print_array10(cout,elso_p);
	delete[] elso_p;
	cout<<endl;

	int* ten_array=new int[10];
	init_t(ten_array,10);
	print_array10(cout,ten_array);
	delete[] ten_array;
	cout<<endl;

	int* eleven_array=new int[11];
	init_t(eleven_array,11);
	print_array(cout,eleven_array,11);
	delete[] eleven_array;
	cout<<endl;

	int* twenty_array=new int[20];
	init_t(twenty_array,20);
	print_array(cout,twenty_array,20);
	delete[] twenty_array;
	cout<<endl;

	//vector

	vector<int*> ten_vector;
	initv(ten_vector,10);
	print_vector(ten_vector,ten_vector.size());
	deletev(ten_vector);
	cout<<endl;

	vector<int*> eleven_vector;
	initv(eleven_vector,11);
	print_vector(eleven_vector,eleven_vector.size());
	deletev(eleven_vector);
	cout<<endl;

	vector<int*> twenty_vector;
	initv(twenty_vector,20);
	print_vector(twenty_vector,twenty_vector.size());
	deletev(twenty_vector);
	cout<<endl;	

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