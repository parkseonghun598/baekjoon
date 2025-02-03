#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int P, N;//피로도, 만들 수 있는 장신구

	cin >> P >> N;

	int* arrAccessorie;
	arrAccessorie = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arrAccessorie[i];
	}
	sort(arrAccessorie, arrAccessorie+N);
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (P  < 200) {
			P += arrAccessorie[i];
			count++;
		}
	}
	cout << count;
}