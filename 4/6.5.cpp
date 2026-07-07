#include<iostream>
#include<string>
using namespace std;
int  ReadPositiveNumber()
{ //«·«” «œ Õ·Ê »€Ì— ÿ—Ìﬁ… ...«„« ÂÌ ÿ—Ìﬁ Ì
	int n=0;
	cout<<"enter a number";
	cin>>n;
	if(n>0)
	return n;
	else
	{ 
		cout<<"please enter a positive number";
		ReadPositiveNumber();
	}
}

int Factorial(int n)
{int a=1;
	for(int i=n;i>1;i--)
	{
		a=i*a;
	
	}
	return a;
}

void PrintResult(int n)
{
	cout<<"the factorial is "<<n<<endl;
}
int main()
{
	 PrintResult(Factorial( ReadPositiveNumber()));

}