#include<iostream>
#include<string>
#include<math.h> 
using namespace std;
bool ValidateNumberInRange(int age,int from,int to)
{
	return age>=from&&age<=to;
}
int ReadAge()
{
	int age;
	do
	{
	cout<<"enter your age ";
	cin>>age;
	}while(!ValidateNumberInRange(age,18,45));
	return age;
}



void PrintResults(int age)
{

if(ValidateNumberInRange(age,18,45))
	cout<<"Accepted";

else
	cout<<"Rejectd";

}

int main()
{

	PrintResults(ReadAge());
 
}