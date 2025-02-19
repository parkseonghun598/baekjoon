#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {

		for (int j = N - i; j > 0; j--) {
			cout << " ";
		}

		for (int j = 2 * i - 1; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i < N; i++) {

		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 2 * (N - i) - 1; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}
