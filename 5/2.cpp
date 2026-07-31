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
enum CheckPrime{Prime,NotPrime};

CheckPrime ISPrime(int n)
{

		if(n<=1)
			return CheckPrime::NotPrime;
		for (int i = 2; i < sqrt(n); i++)
	{
	
	if(n%i==0)
			return CheckPrime::NotPrime;
		
	}
	
	

	return CheckPrime::Prime;
	

}

void printprimefrom1toN(int n)
{
	for (int i = 2; i <= n; i++)
	{
		if(ISPrime(i)==CheckPrime::Prime)	
		{
			cout<<i<<endl;
		}
	}

}
int main()
{
	printprimefrom1toN(ReadPositiveNumber("enter the numebr "));
}