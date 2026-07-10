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

float MonthlyInstalment(int t,int MP)
{
	return (float)t/MP;

}
int main()
{
   int LoanAmount=ReadPositiveNumber("enter the total amont  ");  // ÇÏÎá ÇáÞÑÖ
   int HpwManyMonths=ReadPositiveNumber("How many months  ");
   cout<<"monthly instalment"<<MonthlyInstalment(LoanAmount,HpwManyMonths)<<" month";

}