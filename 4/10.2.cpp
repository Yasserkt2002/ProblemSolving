#include<iostream>
#include<string>
using namespace std;
int ReadPositiveNumber(string message)
{
	int a=1;
	do
	{
		cout<<message;
		cin>>a;
	}while(a<0);

	return a;
}

float CalculateTotalMonth(int t,int MP)
{
	return (float)t/MP;

}
int main()
{
   int LoanAmount=ReadPositiveNumber("enter the total amont  ");  // ÇÏÎá ÇáÞÑÖ
   int MonthlyPayment=ReadPositiveNumber("enter the Monthly Payment  ");
   cout<<CalculateTotalMonth(LoanAmount,MonthlyPayment)<<" month";

}