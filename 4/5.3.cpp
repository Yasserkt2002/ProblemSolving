#include<iostream>
#include<math.h>
using namespace std; 

const float pi=3.14;

void ReadTriangleData(float &a,float &b,float &c)
{
	cout<<"enter a ";
	cin>>a;
	cout<<"enter b ";
	cin>>b;
	cout<<"enter c ";
	cin>>c;

	
}
float CircleAreaByTriangle(float a,float b,float c)
{
	float p=(a+b+c)/2;

float T=(a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)));

 float area=pi*pow(T,2);

	return area; 
}
void PrintResult(float area)
{
	cout<<"the area is : "<<area<<endl;
}


int main()
{
	float a,b,c;
	ReadTriangleData(a,b,c);
	PrintResult(CircleAreaByTriangle(a,b,c));
}