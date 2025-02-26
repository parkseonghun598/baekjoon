#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> v(N);

    for (int i = 1; i <= N; i++) {
        int key; cin >> key;

        for (int j = 0; j < N; j++) {
            if (v[j] == 0 && key == 0) {
                v[j] = i;
                break;
            }
            else if (v[j] == 0)key--;
        }
    }
    for (int i : v) {
        cout << i << " ";
    }
}