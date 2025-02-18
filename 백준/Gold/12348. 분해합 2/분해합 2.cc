#include<iostream>
using namespace std;
typedef long long ll;

ll f(ll x) {
    ll sum = x;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    for (ll x = n - 162; x <= n - 1; x++) {
        if (f(x) == n) {
            cout << x;
            return 0;
        }
    }
    cout << 0;
}