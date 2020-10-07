#include <iostream> 
using namespace std;
  
void merge(int arr[], int beg, int mid, int end) 
{ 
    int i, j, k; 
    int n1 = mid - beg + 1; 
    int n2 = end - mid; 
  
    
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[beg + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[mid + 1 + j]; 
  
    
    i = 0; 
    j = 0; 
    k = beg;  
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
  
void mergeSort(int arr[], int beg, int end) 
{ 
    if (beg < end) { 
        int mid = beg + (end - beg) / 2; 
  
        mergeSort(arr, beg, mid); 
        mergeSort(arr, mid + 1, end); 
        merge(arr, beg, mid, end); 
    } 
} 
  
void printArr(int A[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout<<A[i]<<' ';
} 
  
int main() 
{ 
    int arrSize;
    cout<<"Enter the size of the Array"<<endl;
    cin>>arrSize;
    
	int arr[arrSize];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<arrSize;i++){
    	cin>>arr[i];
	}
  
    cout<<endl<<"Array is \n"; 
    printArr(arr, arrSize); 
  
    mergeSort(arr, 0, arrSize - 1); 
  
    cout<<endl<<endl<<"Sorted Array:"<<endl; 
    printArr(arr, arrSize); 
    return 0; 
} 
