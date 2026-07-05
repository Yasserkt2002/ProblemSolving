//problem 9             +10+11
#include<iostream>
#include<string>
using namespace std;
enum enPassfali{pass,fail};
void ReadThreeNumber(int &a,int &b,int &c)
{

	cout<<"a=";
	cin>>a; 
	cout<<endl;
	cout<<"b=";
	cin>>b;
	cout<<endl;
	cout<<"c=";
	cin>>c; 
	cout<<endl;
}
int SumThreeNumber(int a,int b,int c)
{
	return a+b+c;
}
float GetAvg(int a,int b,int c)
{
	return (float)SumThreeNumber(a,b,c)/3;
}
enPassfali CheckAvg(float AVG)
{if(AVG>=50)
return enPassfali::pass;
else return enPassfali::fail;
}
void PrintResuls(float total)
{ cout<<"the sum is : "<<total<<endl;
if(CheckAvg(total)==enPassfali::pass) 
	cout<<"\n you pass \n";
else cout<<"\n you fail\n";
}
int main()
{
	int h;
    cout<<"for sum enter 1 \nfor avg enter 2\n";
    cin>>h;
    int a,b,c;
	switch(h)
     	    {
			case 1:{
						int a,b,c;
					    ReadThreeNumber(a,b,c);
						PrintResuls(SumThreeNumber(a,b,c));
						break;
				   }
		    case 2:	
				  {
					   ReadThreeNumber(a,b,c);
					   PrintResuls(GetAvg(a,b,c));
					   break;}
			}
}