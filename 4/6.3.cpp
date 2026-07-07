//problem 28 + 29

#include<iostream>
#include<string>
using namespace std;
enum enEvenOrOdd{even,odd};

enEvenOrOdd CheckEvenOrOdd(int n)
{
	if(n%2==0){return enEvenOrOdd::even;}
	else{ return enEvenOrOdd::odd;}
}

int ReadNumber()
{
	int n;
	cout<<"enter the number ";
	cin>>n;
	return n;
}

int SumOddNumberFrom1toN(int n)
{ 
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(CheckEvenOrOdd(i)==enEvenOrOdd::odd)
		{
			sum+=i;
		}
		

	}
	return sum;

}

int SumEvenNumberFrom1toN(int n)   // åÇÏ ÇáÊÇÈÚ åæ ÇÖÇÝÉ ....ÊÇÈÚ ááãÔßáÉ 29
{ 
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		if(CheckEvenOrOdd(i)==enEvenOrOdd::even)
		{
			sum+=i;
		}
		

	}
	return sum;

}

void PrintResult(int n)
{
	cout<<"the sum is :  "; cout<<n<<endl;

}

int main()
{
    //PrintResult(SumOddNumberFrom1toN(ReadNumber()));
   PrintResult(SumEvenNumberFrom1toN(ReadNumber()));

}

/*  //ÇáÍá ÈØÑíÞÊí ÕÍ ÈÓ ÈáÇ Çíäæã
#include<iostream>
#include<string>
using namespace std;
int ReadNumber()
{
	int n;
	cout<<"enter the number ";
	cin>>n;
	return n;
}
int SumNumberodd(int n)
{ int sum=0;
for(int i=1;i<=n;i+=2)
{
	sum+=i;
}
return sum;
}
void PrintResult(int n)
{
	cout<<"the sum is :  "; cout<<n<<endl;

}
int main()
{
 PrintResult(SumNumberodd(ReadNumber()));
}
*/