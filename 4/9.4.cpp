#include<iostream>
#include<string>
using namespace std;
enum DayOfWeek{SAT=1,SUN,MON,TUS,WED,THR,FRI};
int ReadNumberInRange(string m,int from,int to)
{
	int number=1;
	do
	{
		cout<<m;
		cin>>number;
	}while(number>to||number<from);
	return number;
}

DayOfWeek ReadDayOfweek()
{
	return (DayOfWeek)ReadNumberInRange("enter number between 1 and 7 \n",1,7);
}

string GetDayOfWeek(DayOfWeek day)
{
	switch(day)
	{
	case DayOfWeek::SAT: 
		return "its saturday";
	case DayOfWeek::SUN:
		return "its sunday";
		case DayOfWeek::MON: 
		return "its monday";
	case DayOfWeek::TUS:
		return "its tusday";
		case DayOfWeek::WED: 
		return "its wednasday";
	case DayOfWeek::THR:
		return "its thurday";
		case DayOfWeek::FRI:
		return "its friday";

	}
}

int main()
{
cout<<	GetDayOfWeek(ReadDayOfweek());
}













/*
enum DayOfWeek{sun,mon,tus,wed,thur,fri,sat};
int ReadPositiveNumber(string n)
{
	int a=0;
	do{
		cout<<n;
		cin>>a;
	}while(a<=0);
	return a;
}

int SelectDay(int d)
{
	switch(d)
	{
	case 1:cout<<"sun";
		break;
	case 2: cout<<"mon";
		break;
	case 3: cout<<"tus";
		break;
	case 4: cout<<"wed";
		break;
	case 5: cout<<"thur";
		break;
	case 6: cout<<"fri";
		break;
	case 7:cout<<"sat";
		break;
	default:
		{
			cout<<endl;
			SelectDay(ReadPositiveNumber("wrong number \n please enter number between one and seven\n"));
		}
	}
	return 0;

	}




int main()
{
	int d=ReadPositiveNumber("enter number of day");
	cout<<endl;
	SelectDay(d);
	cout<<endl;
}
*/