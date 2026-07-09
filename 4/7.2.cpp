// problem 32
#include<iostream>
#include<string>
using namespace std;
void ReadNumber(int &n,int &m)
{
	
	cout<<"please enter n number ";
	cin>>n;
	cout<<"please enter m number ";
	cin>>m;
}
void PowerOfnm(int n,int m)
{ int s=1;
	for(int i=0;i<m;i++)
	{
	s=n*s;
	}
	cout<<s;
}

int main()
{ int n,m;
ReadNumber(n,m);
	PowerOfnm(n,m);
}