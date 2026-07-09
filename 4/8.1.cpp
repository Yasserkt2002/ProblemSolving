
#include<iostream>
#include<string>
using namespace std;
enum enOperationType{divid='/',sum='+',minos='-',drb='*'};
float ReadNumber(string message)
{
	cout<<message<<endl;
	float n;
	cin>>n;
	return n;
}

enOperationType ReadOperationType()
{
	char a;
	cout<<"enter operation type ";
	cin>>a;
	return enOperationType(a);
}

float calculate(float n1,float n2,enOperationType op)
{
	switch(op)
	{
		case enOperationType::divid:
			return n1/n2;
		case enOperationType::drb:
			return n1*n2;
		case enOperationType::minos:
			return n1-n2;
		case enOperationType::sum:
			return n1+n2;
		default: return n1+n2;
	}
}

int main()
{
	float n1,n2;
	n1=ReadNumber("please enter the first number " );
	n2=ReadNumber("please enter the second number ");
	enOperationType op=ReadOperationType(); // «‰ ﬂ‰  Õ«ÿÿ  «· «»⁄ „»«‘—… »ﬁ·» «·ﬂ«·ﬂÊ·Ì 
	cout<<"result="<<calculate(n1,n2,op)<<endl;
}


/* «·„—… «· «‰Ì… »œÊ‰ €‘
#include<iostream>
#include<string>
using namespace std;

enum Op{  sum='+', divide='/', drb='*', trh='-' };
Op ReadOp()
{

char s;
	cout<<"etner the operation";

	cin>>s;	
	return (Op)s;

}
int ReadNumber(string m)
{
	cout<<m;
	int n;
	cin>>n	;
	return n;

}

float calculate(int n1,int n2,Op ope)
{
	if(ope==Op::sum)
		return (float)n1+n2;
	else if(ope==Op::divide)
		return (float)n2/n1;
	else if(ope==Op::drb)
	return (float)n1*n2;
	else if(ope==Op::trh)
		return (float)n2-n1;
	else return (float)n1+n2;
}



int main()
{
cout<<"the results is "<<	calculate(ReadNumber("enter the second number "),ReadNumber("enter the first number "),ReadOp())<<" ";

}









*/





/*  Õ·Ì «Ê· „—…
enum enOpreation{plus=1,minos,drp,qsmi};

struct calculate
{
	int x,y;
	char z;
};

calculate Read()
{
	calculate a;
	cout<<"enter the first number=";
	cin>>a.x;
	cout<<endl;
	cout<<"enter the second number=";
	cin>>a.y;
	cout<<endl;
	cout<<"enter the operation is : ";
	cin>>a.z;
	cout<<endl;
	return a;
}

enOpreation checkOperation(calculate a)
{
	if(a.z=='+')
		return enOpreation::plus;
	else if(a.z=='-')
		return enOpreation::minos;
		else if(a.z=='*')
			return enOpreation::drp;
		else if(a.z=='/')
			return enOpreation::qsmi;

}

int calc(calculate b)
{
	if(checkOperation(b)==enOpreation::plus)
		return b.x+b.y;
	else if(checkOperation(b)==enOpreation::minos)
		return b.x-b.y;
	if(checkOperation(b)==enOpreation::drp)
		return b.x*b.y;
	if(checkOperation(b)==enOpreation::qsmi)
		return b.x/b.y;
}



int main()
{
	cout<<"the result is "<<calc(Read())<<endl;

}
*/