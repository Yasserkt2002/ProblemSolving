#include<iostream>
#include<string>
using namespace std;
enum EvenOdd{EVEN,ODD};
int ReadNumber()
{
	int n;
	cout<<"enter number ";
	cin>>n;
	return n;

}

EvenOdd checkEvenOdd(int n)
{
		if(n%2!=0)
			return EvenOdd::ODD;
			return EvenOdd::EVEN;
}
void PrintNumberFrom1ToN(int n)
{
	int sum=0;
	for (int i = 0; i <= n; i++)
	{
		if(checkEvenOdd(i)==EvenOdd::EVEN)
			sum+=i;
		
	}
	cout<<sum;
}
int main()
{
	int number=ReadNumber();
	PrintNumberFrom1ToN(number);

}