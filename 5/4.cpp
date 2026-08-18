#include<iostream>
#include<string>
#include<math.h>

using namespace std;
int ReadPositiveNumber(string m)
{
	
	int n;
	do
	{

		cout<<m;
		cin>>n;
	}while(n<0);
	return n;
}
bool IsSumPerf(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	
	return sum==n;
}

void PrintPerfectNumberFrom1ToN(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if(IsSumPerf(i))
		{
			cout<<i<<endl;
		}
	}
}


int main()
{
	PrintPerfectNumberFrom1ToN(ReadPositiveNumber("enter the number : "));
}