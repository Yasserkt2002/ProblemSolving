
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
const float pi=3.14159265358;
float Read_r(float &r)
{cout<<"r=";
cin>>r;
return r;

}
float Get_Area(float r)
{
	return pi*pow(r,2); ;
}
void Print(float area)
{
	cout<<"area="<<area;
}

int main()
{ float r;
	
    Print(Get_Area(Read_r(r)));

}