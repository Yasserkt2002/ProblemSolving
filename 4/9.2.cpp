#include<iostream>
#include<string>
using namespace std;
 struct stTaskDuration{
	 float days;
	 float hours;
	 float seconds;
	 float munits;
 };

float ReadPositiveNumber(string message)
{
	float number=0;
	do
	{
		cout<<message;
		cin>>number;

	}while(number<0);
	return number;

}
stTaskDuration ReadTaskDuration()
{ 
	stTaskDuration time;
	cout<<endl;
	time.days=ReadPositiveNumber("enter the total days ");
	time.hours=ReadPositiveNumber("enter the total hours ");
	time.munits=ReadPositiveNumber("enter the total munit ");
	time.seconds=ReadPositiveNumber("enter the total seconds ");
	return time;
}

float CalculateTotalSeconds(stTaskDuration time)
{float totalseconds=time.days*(3600*24)+time.hours*3600+time.munits*60+time.seconds;
	return totalseconds;

	
}

int main()
{
	cout<<"\n the total seconds ="<<CalculateTotalSeconds(ReadTaskDuration());

}