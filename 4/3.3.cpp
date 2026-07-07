#include<iostream>
#include<string>
using namespace std;
void Read3Number(int &a,int &b,int &c)
{
	cout<<"a=";
	cin>>a;
	cout<<endl;
	cout<<"b=";
	cin>>b;
	cout<<endl;
	cout<<"c=";
	cin>>c;
	cout<<endl;
}

int Max3Number(int a,int b,int c)
{if(a>b&&a>c)
return a;
else if(b>c)
	return b;
else return c;
}
void PrintResults(int max)
{cout<<"the max is "<<max<<endl;
}


int main()
{
	int a,b,c;
	Read3Number(a,b,c);
	PrintResults(Max3Number(a,b,c));

}