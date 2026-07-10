#include<iostream>
#include<string>
using namespace std;
string ReadPinCode()
{
	cout<<"please enter the pin code \n";
	string pin;
	cin>>pin;
	return pin;
}

bool login() 
{
	string s;
	int c=0;
	do{
				s=ReadPinCode();

		if(s=="1234")
		{
			
			return 1;
		}
		else
		{
			c++;
					system("color 4f");
					cout<<" \t wrong number   \t\n"<<" you have "<<3-c<< " chance \n\n\n\n\n";;
					//s=ReadPinCode();      ÍØåÇ Çæá ÇáÏæ æÇíá    áíÔ ÍÇØåÇ åæä
		}
		
	}while(s!="1234"&&c<3);

		return 0;

	
}
int main()
{
	if(login())
	{
		system("color 2f");

		cout<<" <<<<<< correct pin >>>>>> \your acount palance is 7500\n\n\n\n\n";


	}

	else cout<<"\nyou have blocked\n";


}