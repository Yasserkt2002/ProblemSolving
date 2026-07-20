#include<iostream>
#include<string>
using namespace std;
struct stName
{
	string FirstName;
	string LastName;

};
stName ReadName()
{
	stName fullname;
	cout<<"enter your first name: ";
	cin>>fullname.FirstName;
	cout<<"enter your last name: ";
	cin>>fullname.LastName;
	return fullname;
}
string concatonation(stName fullname,bool reversed)
{
	if(reversed)
	return fullname.LastName+" "+fullname.FirstName;
	return fullname.FirstName+" "+fullname.LastName;

}

void print(string name)
{
	cout<<"your name is "<<name<<endl;
}

int main()
{
	print(concatonation(ReadName(),true ));
	/* íÚäí ãÚßæÓ "true"ÕÍ ááÑíÝíÑÓÏ*/

}