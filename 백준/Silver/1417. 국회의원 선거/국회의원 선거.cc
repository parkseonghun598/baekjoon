#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, target, count=0;
	priority_queue<int> pq;

	cin >> N >> target;
	for (int i = 0; i < N-1; i++) {
		int x;
		cin >> x;
		pq.push(x);
	}
	pq.push(0);
	while (pq.top() >= target) {
		int x = pq.top();
		pq.pop();
		pq.push(x - 1);
		target++; count++;
	}
	cout << count;
}

