#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* arr1 = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	sort(arr1,arr1+n);
	int sum=0;
	for (int i = 0; i < n; i++) {
		sum += (arr1[i] * (n - i));
	}
	cout << sum;

}