#include<iostream>
#include<string>
using namespace std;
int ReadNumber()
{ 
	int number;
	cout<<"enter the number ";
	cin>>number;
	return number;
}

void PrintRangeFromNto1_UsingForloop(int n)
{
	cout<<endl<<"for loop"<<endl;
	for(int i=n;i>=1;i--)
	{
		cout<<i<<endl;
	}

}

void PrintRangeFromNto1_UsingWhileloop(int n)
{
	cout<<endl<<"while loop"<<endl;
	int i=n;
	while(i>=1)
	{
		cout<<i<<endl;
		i--;
	}

}

void PrintRangeFromNto1_UsingDoWhileloop(int n)
{
	cout<<endl<<"do while loop"<<endl;
	int i=n;
	
	do{
		cout<<i<<endl;
		i--;
	}while(i>=1);
}
int main()
{
	int n=ReadNumber(); //ÍÊì ãÇ ÇÓÊÏÚíå 3 ãÑÇÊ
	
	PrintRangeFrom1toN_UsingForloop(n);
	PrintRangeFrom1toN_UsingWhileloop(n);
	PrintRangeFrom1toN_UsingDoWhileloop(n);

	// áãÇ íßæä ÇáÑÇäÌ ãÚÑæİ İÇáÇİÖá åí İæÑ áææÈ
}