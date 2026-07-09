#include<iostream>
#include<string>
using namespace std;

float ReadPositiveNumber(string s)
{
	float n;
	cout<<s;
	cin>>n;
	return n;
}
void  calculate(float hour,float &w,float &d)
{ ;
	 w=(hour/24)/7;
	 d=hour/24;
}

int main()
{ float w,d;
	float hour=ReadPositiveNumber("enter the number of hours");
	calculate(hour,w,d);

	cout<<endl;
	cout<<"the number of hours is : "<<hour;
	cout<<endl;
	cout<<"the number of days  is : "<<d;
	cout<<endl;
	cout<<"the number of weeks is : "<<w;
	
}