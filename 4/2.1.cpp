
//«·„—… «· «‰Ì… 

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
	print(concatonation(ReadName(),1 ));
	/* Ì⁄‰Ì „⁄ﬂÊ” """’Õ ··—Ì›Ì—”œ*/

}



/* //«·„—… «·«Ê·Ï 
#include<iostream>
#include<string>
using namespace std;
struct Info{
string FirstName;
string LastName;
};
Info ReadInfo(){
Info info;
cout<<"enter your first name : ";
cin>>info.FirstName;
cout<<"enter your last name : ";
cin>>info.LastName;
return info;
}
string GetFullName(Info info,bool reverse){
string FullName;
if(reverse)
FullName=info.FirstName+" "+info.LastName;

else FullName=info.LastName+" "+info.FirstName;

	return FullName;
}
void PrintFullName(string name){
	cout<<"your name is : "<<name;
}
int main()
{
	PrintFullName(GetFullName(ReadInfo(),0));

}
*/