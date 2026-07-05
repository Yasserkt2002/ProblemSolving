#include<iostream>
#include<string>
using namespace std;
 string Read_Name()
 {
	string name;
	cout<<"enter your name  ";
	getline(cin,name);
	return name;
 }

 void Print_Name(string name)
 { 
	 cout<<"your name is "<<name<<endl;
 }

int main()
{
	Print_Name(Read_Name());
}