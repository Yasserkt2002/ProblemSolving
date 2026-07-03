#include<iostream>
#include<string>
using namespace std;
void PrintHeader()
{
	cout<<"     ";
	for (int i = 1; i <= 10; i++)
	{
		cout<<i<<"\t    ";
	}
	cout<<"\n------------------------------------------------------------------------------\n";
}

void col(int i)
{
	if(i<10)
	cout<<"  |";
	else 	cout<<" |";

}

void PrintTable()
{
	PrintHeader();
	for (int i = 1; i <= 10; i++)
	{
		cout<<" "<<i; col(i);
		for (int j =1; j <= 10; j++)
		{
			 
			cout<<""<<j*i<<"\t    ";
		}
		cout<<endl;
	}
	
}

int main()
{
	PrintTable();

}

//The second time 
/* 
#include<iostream>
#include<string>
using namespace std;
void PrintHeader()
{
	cout<<endl<<"\t\t";
	for(int i=1;i<=10;i++)
		cout<<i<<"\t";
	cout<<endl;
	for(int i=1;i<=91;i++)
		cout<<"-";
	cout<<endl;

}

void PrintColomn(int i)
{
	cout<<i<<"\t|\t";
}

void PrintMult()
{
	PrintHeader();
	for (int i = 1; i <= 10; i++)
	{
		PrintColomn(i); 
		for (int j = 1; j <= 10; j++)
		{
			cout<<i*j<<"\t";
		}
		cout<<endl;
	}



}
int main()
{
	PrintMult();

}
*/