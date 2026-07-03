#include<iostream>
using namespace std;
int ReadNumber()
{

	cout<<"enter the number : ";
	int n;
	cin>>n;
	while(cin.fail())
	{
	
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	cout<<"Invalid Input Enter a valid Number  : ";
	cin>>n;
	}
	return n;
}
int main()
{

	int number=ReadNumber();
	cout<<"The numebr that you entered it is : "<<number<<endl
}