
#include <stdio.h>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>


#include <bits/stdc++.h>


void insertionSort(int *arr, int n) {






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

	// cin >> arr;
	int n = sizeof(arr) / sizeof(int);
	printArray(arr, n);
	for (auto &x : arr) {
		cout << x << " ";
	}
	cout << endl;


	//insertionSort(arr,n);



}

