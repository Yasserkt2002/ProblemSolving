#include<iostream>
#include<string>
#include<math.h>

using namespace std;
int ReadPositiveNumber()
{
	
	int n;
   

	cout<<"please enter a positive number "<<endl;
	 cin>>n;
	if(n>0)
		{
		    return n;
		}
	else 
		{
			
	        ReadPositiveNumber();
		}	
}
enum IsPrime{prime,notprime};

IsPrime Check(int n)
{
	for(int i=2;i<=(n/2)+1;i++)
	{
		/*if(n==i)
		{ //ãÇÚÇÏ Ýí ÏÇÚí áåí áÇä ÇäÊ ÑÍ äÕá áäÕ ÇáÑÞã ÈÓ íÚäí ãÇÑÍ ÊæÕá ááÑÞã
			continue;
		}*/
	if(n%i==0)
	{
		return IsPrime::notprime; 
	}
	else
		{
			return IsPrime::prime;
		}
	}
}
void print(IsPrime res)
{
	if(res==IsPrime::prime)
	{
		cout<<"the number is prime "<<endl;
	}
	else
		{
			cout<<"the number is    \"not prime\" "<<endl;
		}
}

int main()
{
	print(Check(ReadPositiveNumber()));

}