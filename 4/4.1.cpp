//1.4+1.5

#include<iostream>
#include<string>
using namespace std;

struct stInfo{
	int age;
	bool HasDriver;
	bool has_Recommedat;
};

stInfo read_info(){
	stInfo info;
	cout<<"enter your age  ";
	cin>>info.age;
	cout<<"do you have driver licinse : 1 or 0 ";
	cin>>info.HasDriver;
	cout<<"do you have Recommedat  : 1 or 0    (æÇÓØÉ) ";
	cin>>info.has_Recommedat;
	return info;
} 

bool IsAccepted(stInfo info){  
	return (info.age>21&&info.HasDriver==1||info.has_Recommedat);
}

void print_result( stInfo info){

	if(IsAccepted(info))
		cout<<"accepted "<<endl;
	else
		cout<<"rejected "<<endl;
}


int main(){	print_result(read_info());
	return 0;
}