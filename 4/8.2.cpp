#include<iostream>
#include<string>
using namespace std;
int ReadNumber(int &n)
{
	
	cout<<"enter a number ";
	cin>>n;
	return n;
}

float sum()
{ int s=0; int n=0;
	while (n!=-99)
	{
		
		n=ReadNumber(n);
		if(n==-99)
			break;
		else
			s=s+n;

	}
	return (float)s;
}

int main()
{
	 cout<<"the sum="<<sum()<<endl;

}