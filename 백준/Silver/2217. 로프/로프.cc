#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, max_weight = 0;
	cin >> N;
	vector<int> P(N);
	for (int i = 0; i < N; i++)
		cin >> P[i];
	sort(P.begin(), P.end());
	for (int i = 0; i < N; i++) {
		max_weight = max(max_weight, P[i] * (N - i));
	}
	cout << max_weight;
}
