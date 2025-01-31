#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int n;
	cin >> n;
	int R;
	while (n--) {
		cin >> R;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			for (int i = 0; i < R; i++) {
				cout << s[j];
			}
		}
		cout << endl;
	}
}
