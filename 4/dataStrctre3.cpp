#include<iostream>
#include<string>
using namespace std;
class nude
{
public: 
	int data;
	nude *next;
	
};
class LinkedList
{
public:
	nude *head;
	LinkedList()
	{
		head=NULL;
		nude new_nude;
		new_nude.next=NULL;
		head=&new_nude;
	}

	bool IsImpty()
	{
		return head==NULL;
	}
	void insertFirst(int data)
	{
		nude *new_nude;
      	new_nude->data=data;
		if(IsImpty())
		{
				
		new_nude->next=NULL;
		head=new_nude;
		return;
		}
		new_nude->next=head;
		head=new_nude;
	}
	void display(nude *head)
	{
		nude *temp=head;
		while(temp->next!=NULL)
		{
		cout<<temp->data<<endl;
		temp=temp->next;
		}
	}

	int count(nude *head)
	{
		int c=0;
		nude *temp=head;
		while(temp->next!=NULL)
		{
c++;		temp=temp->next;
		}
		return c;
	}


};

int main()
{
	LinkedList List1;
	if(List1.IsImpty())
		cout<<"is empty";
	else 
		cout<<List1.count(List1.head);
	cout<<"enter the value to insert is :";
	List1.insertFirst(3);
	List1.display(List1.head);
}