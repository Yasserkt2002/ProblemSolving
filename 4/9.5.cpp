#include<iostream>
#include<string>
using namespace std;
enum MonthOfYear{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,des};
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

MonthOfYear ReadMonthOfYear()
{
	return (MonthOfYear)ReadNumberInRange("enter number between 1 and 12 \n",1,12);
}

string GetDayOfWeek(MonthOfYear month)
{
	switch(month)
	{
	case MonthOfYear::jan: 
		return "its jan ";

	case MonthOfYear::feb:
		return "its feb ";

		case MonthOfYear::mar: 
		return "its mar ";

	case MonthOfYear::apr:
		return "its apr ";

		case MonthOfYear::may: 
		return "its may ";

	case MonthOfYear::jun:
		return "its jun ";

		case MonthOfYear::jul:
		return "its jul ";

	
	case MonthOfYear::aug:
		return "its aug ";
	case MonthOfYear::sep:
		return "its sep ";
	case MonthOfYear::oct:
		return "its oct ";
	case MonthOfYear::nov:
		return "its nov ";
	case MonthOfYear::des:
		return "its des ";


	}
}

int main()
{
	cout<<GetDayOfWeek(ReadMonthOfYear());
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