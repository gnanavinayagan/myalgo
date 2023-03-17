#include <bits/stdc++.h>
using namespace std;





void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}



void subArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i ; j < n; j++) {
			cout << "(" << i << "," << j << "),";
		}
		cout << endl;
	}


}



int main()
{

// #ifndef ONLINE_JUDGE
// 	freopen("output.txt", "w", stdout);
// #endif

	int arr[] = { -2, -3, 4, -1, 5, -12, 6, 1, 3};
	int n = sizeof(arr) / sizeof(int);

	subArray(arr, n);




}