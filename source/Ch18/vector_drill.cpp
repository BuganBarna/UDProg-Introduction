#include "std_lib_facilities.h"

vector<int> gv {1,2,4,8,16,32,64,128,256,512};

void kiiras(vector<int>& v)
{
	for (int i = 0; i <v.size(); ++i)
	{
		cout<<"tomb "<<i+1<<". eleme: "<<v[i]<<endl;
	}

	cout<<endl;
}

void f(vector<int> c)
{
	vector<int> lv(10);

	for (int i = 0; i <gv.size(); ++i)
	{
		lv[i]=gv[i];

	}

	kiiras(lv);

	vector<int> lv2=c;

	kiiras(lv2);

}


void init_vv(vector<int>& m)
{	
	int fakt_valtozo=2;

	for (int i = 0; i < m.size(); ++i)
	{
		int c=1;

		for (int j = 1; j < fakt_valtozo; ++j)
		{
			
			c*=j;

		}
		++fakt_valtozo;
		m[i]=c;
	}
	
}

int main()
try{

	f(gv);

	vector<int> vv(10);
	init_vv(vv);

	f(vv);


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