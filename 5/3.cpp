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
	cout<<sum<<endl;
	return sum==n;
}


int main()
{
	if(IsSumPerf(ReadPositiveNumber("etner thw numbwe ")))
		cout<<"\nperfect\n";
	else cout<<"\n not perfect \n";
}