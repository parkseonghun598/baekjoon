#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> A;
    for (int i = 0; i < N;i++) {
        int x;
        cin >> x;
        A.push_back(x);
    }
    sort(A.begin(), A.end());

    int ans = 0;
    int score = 0;
    for (int i = N - 1; i >= score; i--) {
        if (A[i] > 0) {
            ans += A[i];
            score++;
        }
        if (i == N - M)break;
    }
    cout << ans;
}
