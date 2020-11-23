#include "std_lib_facilities.h"

struct Pont
{
	int x;
	int y;

};
 void print(vector<Pont> a)
 {
 	for (const auto& b:a)
 	{
 		cout <<b.x<<' '<<b.y<<endl;
 	}
 }

bool ellenorzes(vector<Pont> a, vector<Pont> b)
{
		if(a.size() == b.size()) {

		for (int i=0;i<a.size();i++) {
				
		if (a[i].x == b[i].x || a[i].y == b[i].y) {
			return true;
		}

	}
}	
	return false;
} 

int main()
try{
	vector<Pont> original_points;
	vector<Pont> processed_points;
	int x,y;

	cout<<"Kerem irjon be 7par pontot!"<<endl;
	for (int i=0;i<7;++i)
	{
		cin>>x>>y;
		original_points.push_back(Pont{x,y});	
	}

	cout<<"Kerek egy output fajl nevet! ";
	string outname;
	cin>>outname;
	ofstream outs{outname};

	for(const auto& a : original_points )
		{
			outs<<a.x<<','<<a.y<<endl;
		}
		outs.close();


	
	ifstream inputs{outname};
	while(inputs >>x >> y)
	{
		processed_points.push_back(Pont{x,y});
	}
	for (const auto& a : original_points)
	{
		processed_points.push_back(a);
	}
	inputs.close();
	print(original_points);
	print(processed_points);

	if (ellenorzes(original_points,processed_points))
		cout<<"Vector is equal!"<<endl;
	else cout<<"Something is wrong\n"<<endl;


	return 0;

 }catch(exception& e)
 {
 	cerr<<e.what()<<endl;
 }