//problem 10 +  (9+11)
//åæ ÏãÌæ ãÚ ÇáÓÃááÉ íáí ŞÈá ÇäÇ ÍáíÊæ ÈÔßá ãäİÕá + ÏãÌÊæ ãÚ íáí ŞÈá
//+íáí ÈÚÏ




/*  //ÇáãÑÉ ÇáÊÇäíÉ åíß ÍáíÊæ
// 2.4+2.5
#include<iostream>
#include<string>
using namespace std;

double ReadNumber(string m)
{
	double d;
	cout<<m;
	cin>>d;
	return d;
}

void ReadthreeNumber(double &d1,double &d2,double &d3)
{
	 d1=ReadNumber("enter the first number ");
	 d2=ReadNumber("enter the second number ");
	 d3=ReadNumber("enter the third number ");
}

double avg(double d1,double d2,double d3)
{
	return (d1+d2+d3)/3;

}
double sum(double d1,double d2,double d3)
{
	
	return d1+d2+d3;
}
int main()
{
	
	//double d1=ReadNumber("enter the first number ");
	//double d2=ReadNumber("enter the second number ");
	//double d3=ReadNumber("enter the third number ");
	
	double d11=0;
	double d22=0;
	double d33=6;
	ReadthreeNumber(d11,d22,d33);
	cout<<"the sum is "<<sum(d11,d22,d33)<<endl;
	cout<<"the avg is "<<avg(d11,d22,d33)<<endl;
}
*/
#include<iostream>
#include<string>
using namespace std;
enum enPassFail{pass,fail};
void AvgOfThreeMark(float &mark1,float &mark2,float &mark3)
{
	cout<<"enter your first mark :";
	cin>>mark1;
	cout<<endl;
	cout<<"enter your second mark :";
	cin>>mark2;
	cout<<endl;
	cout<<"enter your third mark :";
	cin>>mark3;
	cout<<endl;
}
float GetAvg(float mark1,float mark2,float mark3)
{
	return (mark1+mark3+mark2)/3;
}
enPassFail CheckAvg(float av)
{ 
	if(av>=50)
		return enPassFail::pass;
	else return enPassFail::fail;
}
void PrintResults(float avg)
{
	cout<<"the avg is : "<<avg<<endl;

	if(CheckAvg(avg)==enPassFail::pass) cout<<"\n and you pass \n";
	else cout<<"and you fail \n";

}


int main()
{float m1,m2,m3;
	AvgOfThreeMark(m1,m2,m3);
	PrintResults(GetAvg(m1,m2,m3));
}