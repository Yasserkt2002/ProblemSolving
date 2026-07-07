 //p 15
#include<iostream>
#include<string>
using namespace std;
void Read_High_Width(int &h,int &w)
{cout<<"high=";
cin>>h;
cout<<endl<<"width=";
cin>>w;
}
int Get_Rec_Area(int w,int h)
{
	return w*h;
}
void Print(int area)
{
	cout<<"area="<<area;
}

int main()
{ int width,High;
	Read_High_Width(width,High);
    Print(Get_Rec_Area(width,High));

}