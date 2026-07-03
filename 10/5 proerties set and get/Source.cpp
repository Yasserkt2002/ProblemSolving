#include<iostream>
#include<ctime>
#include<string>

using namespace std;

class Person
{
	
//private :
	int _ID;
	string _FirstName;
	string _LastName;
public:

	Person()
	{
		_ID=10;
	}


	//Read only ID cause there is no  SetID
	int GetID()
	{
		return _ID;
	}
	void SetFirstName(string FirstName)
	{
		_FirstName=FirstName;
	}

		void SetLastName(string LastName)
	{
		_LastName=LastName;
	}

	string FullName()
	{
		return _FirstName+" "+_LastName;

	}

	string GetFirstName()
	{
		return _FirstName;
	}
		string GetLastName()
	{
		return _LastName;
	}
}
;


int main()
{
	Person p;
	p.SetFirstName("Yasser");
	p.SetLastName("Kutifany");
	
	cout<<p.GetFirstName()<<endl;
	cout<<p.GetLastName()<<endl;
	cout<<p.GetID()<<endl;
	//cout<<p._FirstName; errrrrrrror cause it private
	system("pause>0");
	
}

