#include<iostream>
#include<vector>
#include<string>

using namespace std;

int ReadNumber()
{
	cout<<"\nenter a number ===> ";
	int a;
	cin>>a;
	return a;
}
string NumberToText(int n)
{
	if(n==0)
	{
		return "";
	}
	if(n<=19&&n>0)
	{
		string arr[]={"","one","tow","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","Eighteen","nineteen"};
		return arr[n]+" ";
	}
	if(n>=20&&n<=99)
	{
		string arr[]={"","","Twinty","Thirty","Forty","fifty","sixty","seventy","eighty","ninty"};
		return arr[n/10]+" "+NumberToText(n%10);
	}
	if(n>99&&n<200)
	{
		return "one Hundred "+ NumberToText(n%100);
	}
	if(n>=200&&n<=999)
	{
		return NumberToText(n/100)+" hundred "+NumberToText(n%100);
	}
	if(n>=1000&&n<=1999)
	{
		return "one thousand "+ NumberToText(n%100);
	}
	if(n>=2000&&n<=999999)
	{
		return NumberToText(n/1000)+" thousand "+NumberToText(n%1000);
	}
	if(n>=1000000&&n<=1999999)
	{
		return "one million "+ NumberToText(n%1000000);
	}
	if(n>=2000000&&n<=999999999)
	{
		return NumberToText(n/1000000)+" million "+NumberToText(n%1000000);
	}
	if(n>=1000000000&&n<=1999999999)
	{
		return "one billion "+ NumberToText(n%1000000000);
	}
	else{
		return NumberToText(n/1000000000)+" billion "+NumberToText(n%1000000000);
	}
}
int main()
{
	while(1){
	int n=ReadNumber();
	cout<<NumberToText(n)<<endl;
	
	}
}

