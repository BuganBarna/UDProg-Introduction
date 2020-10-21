#include "std_lib_facilities.h"

	const int centimeter=100;
	const int in_mertekegy=2.54;
	const int ft_mertekegy=12*in_mertekegy;

	double atvaltas(double fszam, string fmertek)
		{
			double backvalue=0;

				if (fmertek=="cm")
					backvalue=fszam/centimeter;
				
				else if (fmertek=="in")
					backvalue=(fszam*centimeter)/in_mertekegy;
				
				else if (fmertek=="ft")
					backvalue=((fszam*ft_mertekegy)/centimeter);
				
				else
					backvalue=fszam;
				
			
					return backvalue;
		}

int main()
{	
	double szam=0;
	vector<double> szam_v;
	string mertekegyseg="";
	double osszeg=0;
	double min=numeric_limits<double>::max();
	double max=numeric_limits<double>::lowest();
	bool ivh=true;
	string kilepertek="";

	while(ivh)
	{
		cout<<"Kerem adjon meg egy szamot es egy mertekegyseget!"<<endl;
			if (cin>>szam >>mertekegyseg)
			{
				if (mertekegyseg=="m" || mertekegyseg=="cm" || mertekegyseg=="in" || mertekegyseg=="ft")
				{
					szam_v.push_back(atvaltas(szam,mertekegyseg));
				}
				else
					cout<<"Nincs ilyen mértékegység!"<<endl;

			}
		cout<<"Ha nem akar tobb erteket meg adni akkor '|'' ki tud lepni!"<<endl;
		cin>>kilepertek;

		if (kilepertek=="|")
		{
			ivh=false;
		}
		else
			continue;
	}

		for (int i = 0; i <szam_v.size(); ++i)
		{

			osszeg+=szam_v[i];

			if (min>szam_v[i])
			{
				min=szam_v[i];
			}
		}

		cout<<"Legkisebb: "<<min<<" m"<<endl;


		for (int i = 0; i <szam_v.size(); ++i)
		{
			if (max<szam_v[i])
			{
				max=szam_v[i];
			}
		}

		cout<<"Legnagyobb: "<<max<<" m"<<endl;

		cout<<"Ertek: "<<szam_v.size()<<" db eleme"<<endl;

		cout<<"Ertekek osszege: "<<osszeg<<" m"<<endl;

		cout<<"Sorba rendezett ertekek: "<<endl;

		sort(szam_v);

		for(double lokalszam: szam_v)
			cout<<lokalszam<<" meter\n";

	return 0;
}
