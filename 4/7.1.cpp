// problem 31
#include<iostream>
#include<string>
using namespace std;
int ReadNumber()
{
	int n;
	cout<<"please enter a number ";
	cin>>n;
	return n;
}
void PowerOf2_3_4(int n)
{
	int a=n*n;
	int b=n*n*n;
	int c=n*n*n*n;
	cout<<a<<" "<<b<<" "<<c<<endl;
}

int main()
{
	 PowerOf2_3_4(ReadNumber());
}