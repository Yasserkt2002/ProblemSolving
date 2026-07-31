// ‘—Õ „‰ «·›ÌœÌÊ 03 »«·œ« « ” —ﬂ‘—
//03

#include<iostream>
#include<string>
using namespace std;
const int MAX_SIZE=6;
class stack
{
	int top;
	int item[MAX_SIZE];
public:
	stack()
	{
		top=-1;
	}

	bool ISFull()
	{
		if(top==MAX_SIZE-1)
			return true;
		else return  false;
	}
	int GetTop()
	{
		return item[top];
	}

	void push(int v)
	{  if(!ISFull()){
		top++;
		item[top]=v;}
	else cout<<"the stack is full";

	}

	bool IsEmpty()
	{
		
		if(top==-1)
			return true;
		else return false;
		// or  return top<=-1;

	}
	
	void pop()
	{
		if(IsEmpty())
			cout<<endl<<"the stack is empty you connot delet somthing is not exist"<<endl<<endl;
		top--;
	}

	void print()
	{ 
		cout<<endl<<"[";
		for(int i=top;i>=0;i--)
			cout<<item[i]<< " ";
		cout<<"]"<<endl;
	}
		
};

int main()
{ stack obj;
	
	obj.push(1);
	cout<<obj.GetTop()<<endl;

	obj.push(2);
	cout<<obj.GetTop()<<endl;

	obj.push(4);
	cout<<obj.GetTop()<<endl;

	obj.push(8);
	cout<<obj.GetTop()<<endl;

	obj.push(16);
	cout<<obj.GetTop()<<endl;
	 obj.pop();  //Õ–›  «· 16 
	
	obj.push(32);
	cout<<obj.GetTop()<<endl;

	

	obj.print();

				obj.pop();  // Õ–›  «·1
				obj.pop();  // Õ–›  «·2
				obj.pop();  // Õ–›  «·4
				obj.pop();  // Õ–›  «·8
				obj.pop();  // Õ–›  «·32
				obj.pop();  // „« ’›Ì ‘Ì Ì‰Õ–›
}