#include<iostream>
#include<cmath>
using namespace std;

int binarySearch(int arr[], int beg, int end, int value){
	if(beg == end){
		if(arr[beg] == value){
			return beg;
		}
		else{
			return -1;
		}
	}
	
	else{
		int mid = floor(beg + end)/2;
		if(value < arr[mid]){
			return binarySearch(arr,beg,mid-1,value);
		}
		else if(value > arr[mid]){
			return binarySearch(arr,mid+1,end,value);
		}
		else if(value == arr[mid]){
			return mid;
		}
	}
}

int main(){
	int n, value;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	
	cout<<"Enter the value to search"<<endl;
	cin>>value;
	
	cout<<"Enter the array in ascending order"<<endl;
	int arr[n];
	int item;
	for(int i=0;i<n;i++){
	cin>>item;
	arr[i] = item;	
	}
	int valueAt = binarySearch(arr,0,n-1,value);
	if(valueAt >= 0){
		cout<<"Value found at "<<valueAt<<" index";
	}
	else{
		cout<<"Value not found";
	}
	return 0;
}
