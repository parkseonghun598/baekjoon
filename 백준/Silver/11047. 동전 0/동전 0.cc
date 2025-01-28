#include <iostream>
using namespace std;

int main() {
	int N, count=0;
	int target;
	cin >> N >> target;
	int* arrCoin = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arrCoin[i];
	}
	for (int i = N - 1; i >= 0; i--) {//오름차순이니까 위에서부터 탐색
		if (target == 0)break;//target이 0이 되면 종료
		count += target / arrCoin[i];//동전의 개수는 목표값/동전의 몫
		target %= arrCoin[i];//목표값을 큰수의 나머지만 남기기
	}
	cout << count;
}