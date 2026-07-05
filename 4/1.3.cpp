#include<iostream>
#include<string>
using namespace std;
enum EvenOdd{even,odd};
int ReadNumber()
{int n;
	cout<<"enter a number";
	cin>>n;
	return n;
}
EvenOdd Check(int x)
{  EvenOdd status;
	if(x%2==0){
		status=EvenOdd::even;
	}
	else {
		status=EvenOdd::odd;}
		return status;
}

void print(EvenOdd stat){
	if(stat==EvenOdd::even)
		cout<<"even number";
	else cout<<"odd number ";
}

int main()
{
	print(Check(ReadNumber()));

}




/*
int Read_Number()
 {
  int x;
  cout<<"Please Enter a Number"; 
  cin>>x;
  return x;
 }

int Check_Number(int x)  
 {
	 if(x%2==0)
	 cout<<"Even Number";
	 else cout<<"Odd Number";
	 return 0;
 }


int main()
{
	Check_Number(Read_Number());


}*/