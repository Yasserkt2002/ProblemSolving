

#include<iostream>
#include<string>
using namespace std;
struct stInfo
{

	int age;
	bool HasDriver;
	bool HasRec;

};

stInfo ReadInfo()
{
	stInfo info;
	cout<<"do you have rec";
	cin>>info.HasRec;

	cout<<"enter your age";
	cin>>info.age;
	
	cout<<"do you have Driver Licinc";
	cin>>info.HasDriver;

	return info;

}

bool IsAccepted(stInfo info)
{
	if(info.HasRec)
		return true;
	else if(info.HasDriver&&info.age>17)
		return true;
	return false;
}

void printresults(stInfo info)
{
	if(IsAccepted(info))
		cout<<"Hired"; 
	else
		 cout<<"rejectd";
}


int main()
{
	printresults(ReadInfo());
}









/*
#include<iostream>
#include<string>
using namespace std;
enum EvenOdd{even,odd};
int ReadPositiveNumber()
{
int number;
	do
	{
		cout<<"enter a positive number";
		cin>>number;

	}while(number<0); 

	return number;
}

EvenOdd CheckNumber(int n)
{
	if(n%2==0)
		return EvenOdd::even;
	else return EvenOdd::odd;

}
void PrintResults(EvenOdd stat)
{
	if(stat==EvenOdd::even)
		cout<<"the number is even";

	else cout<<"the number is odd";
}

int main()
{
	PrintResults(CheckNumber(ReadPositiveNumber()));

}
*/