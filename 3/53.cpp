#include<iostream>
using namespace std;
int main(){
	int sum=0,arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
}
	for(int i=0;i<5;i++){
		if(arr[i]>=50){continue;}
		sum+=arr[i];
	}
	cout<<sum;
}