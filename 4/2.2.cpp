//problem 7
#include<iostream>
#include<string>
using namespace std;
int ReadNumber()
{
int x;
cout<<"enter Number=";
cin>>x;
return x;
}

float GetHalfNumber(int  c) // or make him float c instead of int c
{
return (float)c/2; // 
}

void PrintNumber(float m){cout<<"the half number="<<m<<endl;; }

int main()
{
	PrintNumber(GetHalfNumber(ReadNumber()));
	

}