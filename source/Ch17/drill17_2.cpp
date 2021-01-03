#include "std_lib_facilities.h"
void print(ostream& os,int* s, int d)
{
	for(int i=0; i<d; ++i)
	{
		os<<i+1<<".elem: "<<s[i]<<endl;
	}
}


int main()
try{
	int a=7;
	int* p1=&a;

	cout<<"p1 erteke:"<<*p1<<endl;
	cout<<"p1 címe: "<<p1<<endl<<endl;

	int* p2= new int[7] {1,2,4,8,16,32,64};
	print(cout,p2,7);

	int* p3=p2;
	p2=p1;
	p2=p3;

	cout<<"\np1 cím: "<<p1<<"\np1 ertek: "<<*p1<<endl<<endl;;
	cout<<"p2 cím: "<<p2<<"\np2 ertek: "<<*p2<<endl<<endl;
	

	delete[] p2;

	p1=new int[10] {1,2,4,8,16,32,64,128,256,512};

	p2=new int[10];

	for(int i=0;i<10;++i)
	{
		p2[i]=p1[i];
	}

	delete[] p1;
	delete[] p2;

	vector<int> elso_v {1,2,4,8,16,32,64,128,256,512};
	vector<int> masodik_v(10);

	

	p1=&elso_v[0];
	p2=&masodik_v[0];

	for(int i=0;i<elso_v.size();++i)
	{
		p2[i]=p1[i];
	}

	for (int i = 0; i <10; ++i)
	{
		cout<<"Masodik vektor erteke: "<<p2[i]<<endl;
	}

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