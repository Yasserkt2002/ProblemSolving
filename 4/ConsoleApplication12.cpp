#include<iostream>
#include<string>
using namespace std;

double ReadNumber(string m)
{
	double d;
	cout<<m;
	cin>>d;
	return d;
}

void ReadthreeNumber(double &d1,double &d2,double &d3)
{
	 d1=ReadNumber("enter the first number ");
	 d2=ReadNumber("enter the second number ");
	 d3=ReadNumber("enter the third number ");
}

double avg(double d1,double d2,double d3)
{
	return (d1+d2+d3)/3;

}
double sum(double d1,double d2,double d3)
{
	
	return d1+d2+d3;
}
int main()
{
	/*
	double d1=ReadNumber("enter the first number ");
	double d2=ReadNumber("enter the second number ");
	double d3=ReadNumber("enter the third number ");
	*/
	double d11=0;
	double d22=0;
	double d33=6;
	ReadthreeNumber(d11,d22,d33);
	cout<<"the sum is "<<sum(d11,d22,d33)<<endl;
	cout<<"the avg is "<<avg(d11,d22,d33)<<endl;
}