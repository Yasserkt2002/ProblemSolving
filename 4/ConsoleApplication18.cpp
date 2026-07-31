#include<iostream>
#include<string>
using namespace std;
void mult()
{
	
	for (int i = 1; i <=10; i++)
	{
		if(i==1)
			cout<<"\t";
		cout<<i<<"\t";
	}
	cout<<endl;
		
	for (int i = 1; i <=27; i++)
	{
		cout<<"___";
	}
	cout<<endl;
	for (int i = 1; i <= 10; i++)
	{
		if(i==10)
		cout<<i<<"|"<<"\t";
		else cout<<i<<" |"<<"\t";
		for (int j= 1; j <=10; j++)
		{
			cout<<i*j<<"\t";
		}
		cout<<endl;
	}


}

int main(){
	 mult();
}