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




void PrintArray(int arr[3][3],int r,int c)
{

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout<<setw(4)<<arr[i][j];
		}
		cout<<endl;
	}
}




int main()
{
	int arr[3][3]={{142,2,3},{10,9,33},{0,2,100}};
	PrintArray(arr,3,3);
}