//problem 24
// 5.4+5.5
#include<iostream>
#include<string>
using namespace std;

bool ValidateNumberInRanger(int number,int from,int to)
{
	return (number>=from&&number<=to);
}


int  Read_Age(int &age)
{ 
	cout<<"please enter your age ";
	cin>>age; 
	
	/* while(!ValidateNumberInRanger(age,18,45))
	{cout<<"wrong age  ";
	Read_Age(age);
	} */ 
	return age;
}
/* bool Check_age(int age)
{ //this is mine 
		return (age>=18&&age<=45);
}              */

int ReadUntilAgeBetween(int age,int from,int to)
{  
	
	do{ cout<<"wrong number "<<endl;
		Read_Age(age);
	}while(!ValidateNumberInRanger(age,18,45));
      return age;
}

void Print_result(int age)
{ 
	if(ValidateNumberInRanger(age,18,45))
	{cout<<"is a valid age "<<endl;}

	else {cout<<"is invalid age"<<endl;
	
	}
}

int main()
{ 
int age=0; //áãÇ ãÇÚØíÊæ ÕÝÑ ÚØÇ ÛáØ

//Print_result(Read_Age(age));
	Print_result(ReadUntilAgeBetween(age,18,45));

}


/*

åí ÇáãÑÉ ÇáÊÇäíÉ 
ßäÊ Úã Íá 
24
ÇãÊ ÖÝÊ Úáíå ÔÛáÇÊ ÇÍÓä ãä ÇáÇÓÊÇÐ ÇÇÇã ØáÚ ãÊá 25
íÚäí ÏãÎÊÄ ãä ÏÄä ãÇ ÍÓ
#include<iostream>
#include<string>
#include<math.h> 
using namespace std;
bool ValidateNumberInRange(int age,int from,int to)
{
	return age>=from&&age<=to;
}
int ReadAge()
{
	int age;
	do
	{
	cout<<"enter your age ";
	cin>>age;
	}while(!ValidateNumberInRange(age,18,45));
	return age;
}



void PrintResults(int age)
{

if(ValidateNumberInRange(age,18,45))
	cout<<"Accepted";

else
	cout<<"Rejectd";

}

int main()
{

	PrintResults(ReadAge());
 
}

*/