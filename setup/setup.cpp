#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>


using namespace std;

int main() {
	cout << "this is sample programmmm" << endl;

	unsigned long long int n = ULLONG_MAX;
	// cout << std::scientific << std::setprecision(4);
	// std::setprecision(2) << std::fixed

	cout  << std::setprecision(0) << std::fixed << pow(2, 64) - 1 << endl;


	cout << setprecision(numeric_limits<double>::digits10 + 1) << std::scientific << (n + 1) << endl;

	std::cout << '\n'
	          << "The number 0.07 in fixed: " << std::fixed << 0.01 << '\n'
	          << "The number 0.07 in scientific: " << std::scientific << n << '\n'
	          << "The number 0.07 in hexfloat: " << std::hexfloat << 0.01 << '\n'
	          << "The number 0.07 in default: " << std::defaultfloat << 0.01 << '\n';


	cout  << n << endl;

	return 0;


}