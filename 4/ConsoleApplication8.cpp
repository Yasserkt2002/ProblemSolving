#include<iostream>
#include<string>
using namespace std;
class stack
{
	struct nude
	{
		int item;
		nude* next;
	};
public:
	nude* top;
	stack()
	{
		nude* top=NULL;
	}
	void push(int item)
	{
		nude* new_nude=new nude;
		new_nude->item=item;
		new_nude->next=top;
		top=new_nude;
	}

	void pop()
	{
		nude* temp=top;
		top=top->next;
		delete temp;
	}

	void print()
	{nude* t=top;
		while(t!=NULL)
		{
		cout<<t->item<<"\t"<<t->next<<endl;
		t=t->next;
		}
	}
};
using namespace std;


int main()
{
	stack a;
	a.push(2);
	a.push(30);
	a.push(22);
	//a.pop();
	a.print();


}