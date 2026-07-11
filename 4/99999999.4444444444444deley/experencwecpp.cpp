#include<iostream>
#include<string>
using namespace std;
enum DayOfWeek{sat,san,mon,tus,wed,thr,fri};
int ReadNumebrInRange(string  message,int from,int to)
{
	int n=1;
	do
	{
cout<<message;
cin>>n;
	}while(n>to||n<from);
	return n;
}
DayOfWeek ReadDayOfWeek()
{
return (DayOfWeek)ReadNumebrInRange("plesse enter day of week",1,7);
}
string GetDayOfWeek(DayOfWeek day)
{
	switch(day)
	{
	case DayOfWeek::fri:
		return "its fridey";
	case DayOfWeek::mon:
		return "it is monday";
		case DayOfWeek::san:
		return "its sanday";
	case DayOfWeek::tus:
		return "it is tusday ";
		case DayOfWeek::wed:
		return "its wednasday ";
	case DayOfWeek::sat:
		return "it is satarday ";


	}
}
int main()
{
	
	cout<<GetDayOfWeek(ReadDayOfWeek());

}