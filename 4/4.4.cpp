 //p 19
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
const float pi=3.14;
float Read_D(float &D)
{cout<<"Diameter=";
cin>>D;
return D;
}
float Get_Area(float D)
{
	return (pi*pow(D,2))/(4);
}
void Print(float area)
{
	cout<<"area="<<area;
}

int main()
{ float D;
	
    Print(Get_Area(Read_D(D)));

}