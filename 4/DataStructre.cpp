
#include<iostream>
#include<string>
using namespace std;

class array
{
	int top;
	int size;
	int *ptr;
public:
	array(int array_size)
	{
		ptr =new int[array_size];
		top=0;
		size=array_size;
	}
	void push()
	{
		cout<<"enter the nomber of element you wanna to entred";
		int number_of_element;
		cin>>number_of_element;
				if(number_of_element>size)
				{
					cout<<"Wrooong number \n please enter number small then size  ";
					return ;
				}

		for (int i = 0; i < number_of_element; i++)
		{
			cout<<"enter the "<<i+1<<" element : ";
			cin>>ptr[i];
			top++;
		}
	}
		void display()
		{
							cout<<endl;
							cout<<" Display \n [ ";
			for (int i = 0; i < top; i++)
			{
				cout<<ptr[i]<<" ";
			}
							cout<<"]"<<endl;

	
			
		
		}

		int getsize()
		{
			return size;
		}
		int gettop()
		{
			return top;
		}

		int Search(int Target)
		{
			int index=-1;
			for (int i = 0; i < top; i++)
			{
				if(ptr[i]==Target)
				{
					index=i;
					break;
				}
			}
					return index;
				
			
		}
		void append(int newitem)
		{
			if(size>top)
			{
				ptr[top]=newitem;
				top++;
			}
			else
				cout<<"the array is Full";

			 

		}
		void insrt(int newitem,int index)
		{ top++; //áÇäß ÖÝÊ ÚäÕÑ æÇÐÇ ãÇÚãáÊåÇ ÑÍ íäÞÕß ÚäÕÑ
		if(index>=0&&index<top)
		{
			for (int i = top; i>index; i--) 
			{
				ptr[i]=ptr[i-1];
			
			} 
			ptr[index]=newitem;
		}
		else cout<<"wrong  index ";  
		}
		void delet(int index)
		{ 
			for (int i = index; i>top-1; i++) 
			{
				ptr[i]=ptr[i+1];

			}
			top--;
		}
	};
int main()
{
	
	int n=0;
	cout<<"enter the total size of array ";
	cin>>n;
	array D1(n);
	D1.push();
		D1.display();

	cout<<"Search for?";
	int s; cin>>s; int indexOfTarget=D1.Search(s);  
	if(indexOfTarget==-1)
	
		cout<<"not found"<<endl;
	else
		cout<<"it found at index "<<indexOfTarget<<endl;
	
	int newitem;
	cout<<"enter the item you wana to add";
	cin>>newitem;
	D1.append(newitem); cout<<endl;
	D1.display();
	cout<<endl;
	cout<<"enter the element you wana to insert ";
	int nn;
	cin>>nn;
	int ii; 
		cout<<endl<<"enter the index you that must be insrting at it";

	cin>>ii;
	D1.insrt(nn,ii);
	D1.display();



	cout<<"top="<<D1.gettop()<<endl<<"size="<<D1.getsize();
	cout<<endl;

	D1.delet(2);
	D1.display();


	/*	cout<<"enter the total size of array ";
	cin>>n;
	array D2(n);
	D2.push();
	D2.display();
	cout<<"top="<<D2.gettop()<<endl<<"size="<<D2.getsize();*/


}



/*
#include<iostream>
#include<string>
using namespace std;
class array
{
private:
	int size;
	int length;
	int *ptr;
public:
	array(int ArraySize)
	{
		ptr=new int[ArraySize];
		length=0;
		size=ArraySize;
	};

	void push()

	{
		cout<<"how many you wanna to push";
		int no_of_item;
		cin>>no_of_item;
		if(no_of_item>size)
					{
						cout<<"the number is great\n ";
						return ;
					}
		else
		{
			for(int i=0;i<no_of_item;i++)
			{
				cout<<"enter item of "<<i+1<<" ";
				cin>>ptr[i];
				length++;
			}
		}
	}

	void Display()
	{
		cout<<"Display array :"<<endl;
		for(int i=0;i<length;i++)
		{
			cout<<ptr[i]<<" ";
		}
		cout<<endl;
	}

	int GetSize()
	{
		return size;
	}
	int Getlength()
	{
		return length;
	}
 };


int main()
{
	array a1(50);
	a1.push();
	a1.Display();
	cout<<"the size " <<a1.GetSize()<<endl;

	cout<<"the Length "<<a1.Getlength()<<endl;

}
*/