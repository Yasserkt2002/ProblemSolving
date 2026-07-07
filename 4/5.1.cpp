#include<iostream>
#include<math.h>
using namespace std;  //Circumference ÇáãÍíØ\

const float pi=3.14;

float ReadCircumference(float &L)
{
	cout<<"enter L (Circumference) ";
	cin>>L;
	return L;
}
float CircleAreaByCircumference(float L)
{
	return (pow(L,2)/(4*pi)); 
}
void PrintResult(float area)
{
	cout<<"the area is : "<<area<<endl;
}


int main()
{
	float L;
	PrintResult(CircleAreaByCircumference(ReadCircumference(L)));
}