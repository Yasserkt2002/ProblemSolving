#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		
		cout<<Message;
		cin>>Number;
	}while(Number<0);
	return Number;
}

int RandomNumber(int from,int to)
{
	int RandomNum=from+rand()%(to-from+1);
	return RandomNum;
}



void FillArrayWithRandomNumber(int arr[3][3],short r,short c)
{
	for (int i = 0; i < r; i++)
	{

		for (int k = 0; k < c; k++)
		{
			arr[i][k]=RandomNumber(0,100);
		}
	}
}

void PrintArray(int arr[3][3],short r,short c)
{
	cout<<endl;
	for (int i = 0; i < r; i++)
	{

		for (int k = 0; k < c; k++)
		{
			cout<<setw(5)<<arr[i][k]<<"   ";
		}
		cout<<endl;
	}
	cout<<endl;
}
int main()
{

}

