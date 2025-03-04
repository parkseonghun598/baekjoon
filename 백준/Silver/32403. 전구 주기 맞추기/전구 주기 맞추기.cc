#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, T;

	cin >> N >> T;
	int* arrA = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arrA[i];
	}
	int count = 0;
	int up, down;
	for (int i = 0; i < N; i++) {
		up = arrA[i];
		down = arrA[i];
		while (true) {
			if (T % up == 0||T%down==0) {
				break;
			}
			up++;
			down--;
			count++;
		}
	}
	cout << count;
}
