#include<iostream>
#include<string>
using namespace std;


int main()
{
	int arr[10]={2,4,5,7,9,19,22,55,77,99};
    int low=0;
	int high=10-1; //size-1;
	int mid;
	int val=arr[6];
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==val){
		 cout<<"the val "<<val<<"found";
		 break;
		}
		else if(arr[mid]<val)
			low=mid+1; 
		else high=mid-1;
	}
}