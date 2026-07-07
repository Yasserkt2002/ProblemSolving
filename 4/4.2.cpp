
#include<iostream>
#include<string>
using namespace std;
void Read_a_h(float &a,float &h)
{cout<<"a=";
cin>>a;
cout<<endl<<"h=";
cin>>h;
}
float Get_Rec_Area(float a,float h)
{
	return (float)0.5*(a*h);
}
void Print(int area)
{
	cout<<"area="<<area;
}

int main()
{ float a,h;
	Read_a_h(a,h);
    Print(Get_Rec_Area(a,h));
}