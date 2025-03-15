#include <iostream>
#include<cstring>
using namespace std;
int arr[100][100];
int main() {
	int K;
	cin >> K;
	memset(arr, 0, sizeof(arr)); // 배열을 0으로 초기화

	int x, y;
	while (K--) {
		cin >> x >> y;
		for (int i = x; i <x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				arr[i][j] = 1;
			}
		}
	}
	int count = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (arr[i][j] == 1)count++;
		}
	}
	cout << count;
}

