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

void PrintRangeFrom1toN_UsingForloop(int n)
{
	cout<<endl<<"for loop"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<endl;
	}

}

void PrintRangeFrom1toN_UsingWhileloop(int n)
{
	cout<<endl<<"while loop"<<endl;
	int i=0;
	while(i<n)
	{i++;
		cout<<i<<endl;
		
	}
}

void PrintRangeFrom1toN_UsingDoWhileloop(int n)
{
	cout<<endl<<"do while loop"<<endl;
	int i=1;
	
	do{
		cout<<i<<endl;
		i++;
	}while(i<=n);
}
int main()
{
	int n=ReadNumber(); //ÍÊì ãÇ ÇÓÊÏÚíå 3 ãÑÇÊ
	
	PrintRangeFrom1toN_UsingForloop(n);
	PrintRangeFrom1toN_UsingWhileloop(n);
	PrintRangeFrom1toN_UsingDoWhileloop(n);

	// áãÇ íßæä ÇáÑÇäÌ ãÚÑæÝ ÝÇáÇÝÖá åí ÝæÑ áææÈ
}