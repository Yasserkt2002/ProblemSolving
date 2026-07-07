#include<iostream>
#include<math.h>
using namespace std;  //Circumference «·„ÕÌÿ\

const float pi=3.14;

void ReadTriangleData(float &a,float &b)
{
	cout<<"enter triangel side a ";
	cin>>a;
	cout<<"enter triangel side b";
	cin>>b;
}
float CircleAreaByTriangle(float a,float b)
{
	return pi*(((pow(b,2))/(4))*((2*a-b)/((2*a)+b))); 
}
void PrintResult(float area)
{
	cout<<"the area is : "<<area<<endl;
}


int main()
{
	float a,b;
	ReadTriangleData(a,b);
	PrintResult(CircleAreaByTriangle(a,b));

}