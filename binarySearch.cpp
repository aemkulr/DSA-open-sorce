#include<iostream>
using namespace std;

int binarySearch(long arr[], long value, int beg,int end){
	while(beg<end){
		int mid = beg + (end-beg)/2;
		if(arr[mid] == value){
			return mid;
		}
		
		else if(value > arr[mid]){
			beg = mid + 1;
		}
		
		else{
			end = mid - 1;
		}

	}
	return -1;
}

int main(){
	cout<<"Enter the number of elements in the array"<<endl;
	int n;
	cin>>n;
	
	long arr[n];
	cout<<endl<<"Enter the elements of the array in the ascending order"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	long value;
	cout<<"Enter the value to be searched"<<endl;
	cin>>value;
	
	// Binary search
	int valueReq = binarySearch(arr,value,0,n-1);
	if(valueReq >= 0){
		cout<<endl<<"Search successful. Value found at index "<<valueReq<<endl;
	}
	
	else{
		cout<<endl<<"Search unsuccessful"<<endl;
	}
	
	
	return 0;
}
