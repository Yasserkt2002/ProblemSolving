#include<iostream>
#include<string>
using namespace std;



void f2(int n)
 {
 if(n == 0)
 return;
 f2(n/2);
 cout<<n%2; }
void fun(int n)
{
	if(n>1)
		 fun(n-1);
	for(int i=0;i<n;i++){
		cout<<"*";}
	cout<<endl;
}
class linkedlist
{
	struct node
	{
		int data;
		node* next;
	};
	//node* head=NULL;
public:
	void push(int data)
	{
		node *new_node=new node;
		new_node->data=data;
		new_node->next=NULL;
	
	}
	
};

int main()
{
	 fun(8);
	//  f2(21);
}