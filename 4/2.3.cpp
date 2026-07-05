#include<iostream>
#include<string>
using namespace std;
int ReadMark(){
int mark;
cout<<"enter your mark";
cin>>mark;
return mark;
}
enum enFailPass{fail=0,pass=1};
enFailPass Check(int m)
{
	if(m>=50) return enFailPass::pass;
	else return enFailPass::fail;
}
void PrintResult(enFailPass a){
	if(a==enFailPass::fail) cout<<"fail";
	else cout<<"pass";
}



int main()
{
	PrintResult(Check(ReadMark()));

}