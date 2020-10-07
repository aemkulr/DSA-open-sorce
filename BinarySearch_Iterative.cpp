#include<iostream>
#include<cmath>
using namespace std;

int binarySearch(int arr[], int n, int value){
	int beg = 0;
	int end = n-1;
	while(beg<end){
		int mid = floor(beg+end)/2;
		if(arr[mid] == value){
			return mid; 
		}
		
		else if(arr[mid] < value){
			beg = mid + 1;
		}
		else{
			end = mid  - 1;
		}
	}
	return -1;
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
	int valueAt = binarySearch(arr,n,value);
	cout<<"Value found at "<<valueAt<<"index";
	return 0;
}
