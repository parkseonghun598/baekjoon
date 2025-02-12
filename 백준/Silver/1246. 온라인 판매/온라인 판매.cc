#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	

	int N, M;

	cin >> N >> M;
	int* arrP = new int[M];
	int max_price=0, result=0;
	
	for (int i = 0; i < M; i++) {
		cin >> arrP[i];
	}
	sort(arrP, arrP + M);
	for (int i = 0; i < M; i++) {
		if ((M - i) > N)continue; 
		if (result < arrP[i] * (M - i)) {
			max_price = arrP[i];
			result = max_price * (M - i);

		}

	}
	cout << max_price <<" "<< result;
}
