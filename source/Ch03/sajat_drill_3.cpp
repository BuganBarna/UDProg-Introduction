#include "std_lib_facilities.h"

int main()
{
	string first_name="";

	cout<<"Enter the name of the person you want to write to\n";

	cin>>first_name;

	cout<<endl<<endl<<"it’s your letter"<<endl<<endl;

	cout<<"Dear "<<first_name<<","<<endl;

	cout<<"How are you? I miss you."<<endl;




	string friend_name="";

	cout<<"Enter the friends's name\n";

	cin>>friend_name;

	cout<<"Have you seen "<<friend_name<<" lately?"<<endl;
	



	char friend_sex=0;

	cout<<"enter an m if the friend is male and an f if the friend is female\n";

	cin>>friend_sex;

	if(friend_sex=='m')
	{
		cout<<"If the friend is male, write “If you see "<<friend_name<<" please ask him to call me"<<endl;
	}

	if(friend_sex=='f')
	{
		cout<<"If the friend is female, write “If you see "<<friend_name<<" please ask her to call me.”"<<endl;
	}



	int age=0;

	cout<<"Enter your age\n";

	cin>>age;


	if(age <= 0 || age>=110)
	{
		simple_error("you're kidding!");
	}


	cout<<"I hear you just had a birthday and you are "<<age<<" years old."<<endl;

	if (age>12)
	{
		cout<<"Next year you will be "<<age+1<<"."<<endl;
	}


	if (age==17)
	{
		cout<<"Next year you will be able to vote."<<endl;
	}


	if (age>=70)
	{
		cout<<"I hope you are enjoying retirement."<<endl;
	}

	cout<<endl<<"Yours sincerely"<<endl<<endl;
	cout<<"Bugán Barna\n";

	return 0;
}