#include <bits/stdc++.h>
using namespace std;


void insertionSort(int *a, int n) {

	for (int i = 1; i <= n - 1; i++) {

		int current = a[i];
		int prev = i - 1;

		while (prev >= 0 && a[prev] > current ) {
			a[prev + 1] = a[prev];
			prev--;
		}
		a[prev + 1] = current;
	}

}

void bubbleSort(int *a, int n) {
	for (int times = 1; times <= n - 1; times++) {

		for (int j = 0; j <= n - 1 - times; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}

		}
	}
}



void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}



int main()
{

#ifndef ONLINE_JUDGE
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = { -2, -3, 4, -1, 5, -12, 6, 1, 3};
	int n = sizeof(arr) / sizeof(int);

	printArray(arr, n);
	bubbleSort(arr, n);
	// insertionSort(arr, n);


	printArray(arr, n);



}