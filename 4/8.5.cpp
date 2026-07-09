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

float calculateTax(float TotalBill)
{
	return (TotalBill*1.1)*(1.16);
}
int main()
{
	float TotalBill=ReadPositiveNumber("please enter the Total Bill");
	cout<<endl;
	cout<<"the total bill after service fee and sales Tax = "<<calculateTax(TotalBill);
	cout<<endl;

}