#include<iostream>
#include<string.h>
using namespace std;
bool arr[128][128];
void check(bool(&arr)[128][128], int startX, int startY, int size);
int blue = 0, white = 0;
int main() {
	memset(arr, 0, sizeof(arr));//false으로 초기화
	int N;
	bool k;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> k;
			arr[i][j] = k;
		}
	}
	check(arr, 0, 0, N);
	cout << white << endl << blue << endl;

}
void check(bool (&arr)[128][128], int startX, int startY, int size) {
	bool color = arr[startX][startY];
	bool same = true;
	for (int i = startX; i < startX + size; i++) {
		for (int j = startY; j <startY + size; j++) {
			if (arr[i][j] != color) {
				same = false;
				break;
			}
		}
		if (same == false)break;
	}
	int a = size / 2;
	if (same == true) {
		if (color == 1)blue++;
		else white++;

	}
	else {
		check(arr, startX, startY, a);
		check(arr, startX+a, startY, a);
		check(arr, startX, startY+a, a);
		check(arr, startX+a, startY+a, a);
	}
}