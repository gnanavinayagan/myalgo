#include <bits/stdc++.h>
using namespace std;





void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}



void printSubArraySum1(int *a, int n) {

	int maxSum = -999999;
	for (int i = 0; i < n; i++) {
		for (int j = i ; j < n; j++) {
			// cout << "(" << i << "," << j << "),";
			int subArraySum = 0;
			for (int k = i; k <= j; k++) {
				subArraySum += a[k];
				cout << a[k] << ",";
			}
			cout << "\tSum: " << subArraySum ;
			if (maxSum < subArraySum )
				cout << " ----------> ";
			maxSum = max(maxSum, subArraySum);
			cout << "\tMaxSum: " << maxSum << endl;
		}
	}
}




int largestSubArraySum2(int *a, int n) {

	int largest_sum = -999999;

	int prefix[100] = {0};
	prefix[0] = a[0];

	for (int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + a[i];
	}


	for (int i = 0; i < n; i++) {
		for (int j = i ; j < n; j++) {
			// cout << "(" << i << "," << j << "),";
			int subArraySum = i > 0 ? prefix[j] -  prefix[i - 1] : prefix[j];
			largest_sum = max(largest_sum, subArraySum);
			// deb2(subArraySum, largest_sum);

		}
	}
	return largest_sum;
}


int main()
{

// #ifndef ONLINE_JUDGE
// 	freopen("output.txt", "w", stdout);
// #endif

	int arr[] = { -2, -3, 4, -1, 5, -12, 6, 1, 3};
	int n = sizeof(arr) / sizeof(int);

	cout << largestSubArraySum2(arr, n) <<  " " << endl;




}