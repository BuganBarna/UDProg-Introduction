#include "std_lib_facilities.h"

void swap_v(int a,int b) //nem jo mert lokalis valtozok
{
	int temp=0;

	temp=a;
	a=b;
	b=temp;
}

void swap_r(int& a,int& b)
{
	int temp=0;

		temp=a;
		a=b;
		b=temp;	
		return;
}
/*
void swap_cr(const int& a,const int& b) //constans erteket nem lehet megváltoztatni
{
	int temp=0;

		temp=a;
		a=b;
		b=temp;	
}
*/
int main()
{
	int x=7;
	int y=9;
	cout<<"x= "<< x <<"  "<<"y= "<< y <<endl;

	swap_r(x,y);
	cout<<"x= "<< x <<"  "<<"y= "<< y <<endl;


	/*const int cx=7 , cy=9;
	cout<<"cx= "<<cx<<"  "<<"cy= "<<cy<<endl;

	swap_cr(cx,cy);
	cout<<"cx= "<<cx<<"  "<<"cy= "<<cy<<endl;


	double dx=7.7, dy=9.9;
	cout<<"dx= "<<dx<<"  "<<"dy= "<<dy<<endl;

	swap_r(dx,dy);
	cout<<"dx= "<<dx<<"  "<<"dy= "<<dy<<endl; */

	return 0;
}