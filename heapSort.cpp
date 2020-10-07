/**
	Input format:
	20
	56 78 34 87 98 55 77 11 6 2 7 9 3 73 8 12 23 97 96 95
*/

#include<bits/stdc++.h>
using namespace std;

void heapify(int a[], int n, int i) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	while (left < n && a[largest] < a[left]) {
		largest = left;
	}
	while (right < n && a[largest] < a[right]) {
		largest = right;
	}
	if ( i != largest) {
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}
}

void heapSort(int a[], int n) {
	for (int i = (n / 2) - 1; i >= 0; i--) {
		heapify(a, n, i);
	}
	for (int i = n - 1; i >= 0; i--) {
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	heapSort(a, n);

	return 0;
}