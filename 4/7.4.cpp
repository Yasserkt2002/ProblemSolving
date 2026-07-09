#include<iostream>
#include<string>
#include"Lib.h";
using namespace std;
using namespace L;
float ReadTotalSalse()
{float ts;
	cout<<"enter total salse ";
	cin>>ts;
	return ts;
}

float GetComissionPercentage(float n)
{
	float persentage;
	if(n>=1000000)
		 persentage=0.01;
	else if(n>=500000)
		 persentage=0.02;
	else if(n>=100000)
		persentage=0.03;
	else if(n>=50000)
		persentage=0.05;
	else persentage=0.00;

	return persentage;
}

float CalculateTotalComission(float TotalSalse)
{
	 return GetComissionPercentage(TotalSalse)*TotalSalse;
}

int main()
{ 
	P();
	P();
	P();
P();
	float totalsalce=ReadTotalSalse();
	cout<<"Persantage "<<GetComissionPercentage(totalsalce)<<endl;
	cout<<"total comission "<<CalculateTotalComission(totalsalce)<<endl;

}