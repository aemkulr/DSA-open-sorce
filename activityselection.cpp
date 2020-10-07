#include<iostream>
#include<vector>
using namespace std;

vector<int> actOrd;

//Function for activity selection
void activitySelection(int n,int s[],int f[]){
	int i = 0;
	actOrd.push_back(0);
	
	for(int j=1;j<n;j++){
		if(f[i]<=s[j]){
			actOrd.push_back(j);
			i = j;
		}
	}
	
	// Print the Activity selection order
	for(int j=0;j<actOrd.size();j++){
		cout<<actOrd[j]<<" ";
	}
}

// Main Program

int main(){
	int n;
	cout<<"Enter the number of activities\n";
	cin>>n;
	
	int s[n],f[n];
	
	// Starting Time
	// Input the starting time array
	cout<<"Enter the starting time array\n";
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	
	
	// Finish Time
	// Input the finishing time array
	cout<<"Enter the finishing time array\n";
	for(int i=0;i<n;i++){
		cin>>f[i];
	}
	
	// Activity Selection
	activitySelection(n,s,f);
	
	return 0;
}
