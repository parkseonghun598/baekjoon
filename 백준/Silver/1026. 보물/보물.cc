#include <iostream>
#include<cstring>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* arrA = new int[n];
	int* arrB = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arrA[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> arrB[i];
	}
	sort(arrA, arrA+n);
	sort(arrB, arrB+n,greater<int>());
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arrA[i] * arrB[i];
	}
	cout << sum;
}