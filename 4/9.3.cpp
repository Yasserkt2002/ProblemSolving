#include<iostream>
#include<string>
using namespace std;
struct stTaskDuration
{
	 float days;
	 float hours;
	 float seconds;
	 float munits;
};
int ReadPositiveNumber(string message)
{
	int number=0;
	do
	{
		cout<<message;
		cin>>number;

	}while(number<0);
	return number;

}
stTaskDuration ConvertSecondsToTaskDuration(int totalseconds)
{
	
	stTaskDuration time; int reminder=0;
	time.days=totalseconds/(24*3600);
	reminder=totalseconds%(24*3600);
	time.hours=reminder/(3600);
	reminder=reminder%(3600);
	time.munits=reminder/(60);
	reminder=reminder%(60);
	time.seconds=reminder;
	return time;
};
void PrintTaskDuration(stTaskDuration time)
{
	cout<<endl<<time.days<<":"<<time.hours<<":"<<time.munits<<":"<<time.seconds<<endl;
}
int main()
{
	 int totalseconds=ReadPositiveNumber("enter the totoal seconds : ");
	PrintTaskDuration(ConvertSecondsToTaskDuration(totalseconds));
}