#include<iostream>
#include<string>
using namespace std;
int  ReadNumberInRange(int from,int to)
{
	int Grade;
	do
	{
		cout<<"please enter number form "<<from<<" to "<<to<<endl; 
		cin>>Grade;

	}while(Grade>to||Grade<from);
	return Grade;
}

char GetGradeLatter(int Grade)
{
	if(Grade>=90)
		return 'A';

	else if(Grade>=80)
		return 'B';

	else if(Grade>70)
		return 'C';


	else if(Grade>=60)
		return 'D';

	else if(Grade>=50)
		return 'E';

	else
		return 'F';

	
}

int main()
{
	
	
	cout<<"results="<<GetGradeLatter(ReadNumberInRange(0,100))<<endl;
}