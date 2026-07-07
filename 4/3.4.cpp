#include<iostream>
#include<string>
using namespace std;
void ReadNumber(int &a,int &b)
{ cout<<"enter first number ";
cin>>a;
cout<<"enter second number ";
cin>>b;
}
void swap(int &a,int &b)
{
	int t;
t=a;
a=b;
b=t;
}
void PrintResults(int a,int b)
{ cout<<"\n the first number is "<<a<<"\n";
 cout<<"the first number is "<<b<<endl;
}
int main()
{int a,b;
	ReadNumber(a,b);
	cout<<endl<<"before :"<<endl;
	PrintResults(a,b);
	swap(a,b);
	cout<<endl<<"after swap :"<<endl;
	PrintResults(a,b);
	

}