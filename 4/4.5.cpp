 //p 20
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
const float pi=3.14;
float Read_SquareSide(int &A)
{cout<<"A=";
cin>>A;
return A;
}
float CircleAreaInscripedInSquare(float A)
{
	return pi*pow(A/2,2);
}
void Print(float area)
{
	cout<<"area="<<area;
}  

int main()
{ int A;
	
    Print(CircleAreaInscripedInSquare(Read_SquareSide(A)));

}