#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int mid=end-(start+end)/2;
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		else if (arr[mid]<=key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=end-(start+end)/2;
	}
	return -1;
}
 int main()
 {
 	int arr[10]={1,2,3,4,5,6,7,8,9,100};
 	cout<<"The arrays elements are : ";
 	for(int i=0;i<10;i++)
 	{
 		cout<<arr[i]<<" ";
	}
	cout<<endl;
 	int key;
 	cout<<"Enter the element to find ?"<<endl;
 	cin>>key;
 	cout<<"Element is at Index :"<<binarysearch(arr,10,key);
}
