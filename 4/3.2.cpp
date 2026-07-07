// p 12
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
void ReadTowNumber(int &a,int &b)
{
cout<<"enter the first number ";
cin>>a;
cout<<"enter the second number ";
cin>>b;
}
int GetMax(int a,int b)
{	if(a>b)
 return a;
else return b;

}

void PrintResults(int max)
{cout<<"max is "<<max<<"   \n ";
}

int main()
{
	int a,b;
	ReadTowNumber(a,b);
	PrintResults(GetMax(a,b));

}