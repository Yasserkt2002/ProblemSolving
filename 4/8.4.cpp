#include<iostream>
#include<string>
using namespace std;
float ReadPositiveNumber(string n)
{
	float tb;
	cout<<n<<endl;
	cin>>tb;
	return tb;
}

float CalculateReminder(float tb,float cp)
{
	return cp-tb;
}


int main()
{
	float TotalBill=ReadPositiveNumber("please enter the total bill ");
	float CashPaid=ReadPositiveNumber("please enter the cash paid ");
	cout<<"the reminder is "<<CalculateReminder(TotalBill,CashPaid)<<endl;
}