#include<bits/stdc++.h>
using namespace std;

void printParenthesis(int i, int j, int n, 
                      int *b, char &name) 
{ 
    if (i == j) 
    { 
        cout << name++; 
        return; 
    } 
  
    cout << "("; 
  
    printParenthesis(i, *((b+i*n)+j), n, 
                     b, name); 
  
  
    printParenthesis(*((b+i*n)+j) + 1, j, 
                     n, b, name); 
    cout << ")"; 
} 

int matrix_mul(int n,int p[]){
	int m[n][n];
	int b[n][n];
	
	for(int i=1;i<n;i++){
		m[i][i] = 0;
	}
	for(int l=2;l<n;l++){
		for(int i=1;i<n-l+1;i++){
			int j = i+l-1;
			m[i][j] = INT_MAX;
			for(int k=i;k<j;k++){
				int q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
				if(q<m[i][j]){
					m[i][j]=q;
					b[i][j] = k; 
				}
			}
		}
	}
	char name='A';
	cout << "\nOptimal Parenthesization is : "; 
    printParenthesis(1, n-1, n, (int *)b, name); 
	return m[1][n-1];
}

int main(){
	int n;
	cout<<"Enter the number of matrices + 1"<<endl;
	cin>>n;
	
	cout<<"Enter the matrix"<<endl;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	cout<<"\nMinimum cost is "<<matrix_mul(n,arr);
	return 0;
}
