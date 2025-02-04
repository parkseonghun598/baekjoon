#include <iostream>
using namespace std;

int main() {
	int N, M;//N: 0~50  M: 1~~1000

	cin >> N >> M;
	if (N == 0) {
		cout << "0";
		return 0;
	}
	int* arrBookWeight;
	arrBookWeight = new int[N];
	
	for (int i = 0; i < N; i++) {
		cin >> arrBookWeight[i];
	}
	int nowWeight=0;
	int count = 1;
	for (int i = 0; i < N; i++) {
		if (nowWeight+arrBookWeight[i]<=M) {
			nowWeight += arrBookWeight[i];
			
		} 
		else{
			count++;
			nowWeight = arrBookWeight[i];
		}
	}
	
	cout << count;
	return 0;
}