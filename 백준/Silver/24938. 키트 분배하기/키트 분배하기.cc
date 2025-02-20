#include <iostream>
using namespace std;
typedef long long ll;

ll total = 0;
ll ans = 0;
ll arr[200000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		ll& x = arr[i];
		cin >> x;
		total += x;
	}

	total /= N;
	N--;

	for (int i = 0; i < N; i++) {
		ll& x = arr[i], & y = arr[i + 1];
		ll temp = total - x;
		ans += abs(temp);
		y -= temp;
	}

	cout << ans;
}