#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;

	int max_weight = 0, result = 0;
	cin >> N;
	vector<int> P(N);

	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}
	sort(P.begin(), P.end());

	for (int i = 0; i < N; i++) {
		if (result < P[i] * (N - i)) {
			max_weight = P[i];
			result = max_weight * (N - i);
		}
	}
	cout << result;
}
