#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
	long long N, K;
	long long count=0;
	string s;
	cin >> N >> K;

	cin >> s;
	stack<char> st;
	for (int i = 0; i < N; i++) {
		
		while (!st.empty() && count<K && s[i]>st.top()) {
			count++;
			st.pop();
		}
		st.push(s[i]);
	}
	while (count < K) {
		count++;
		st.pop();
	}
	stack<char> temp;
	while (!st.empty()) {
		temp.push(st.top());
		st.pop();
	}
	while (!temp.empty()) {
		cout << temp.top();
		temp.pop();
	}
	return 0;
}
