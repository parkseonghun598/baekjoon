#include <iostream>
#include <string>
using namespace std;

const long long MOD = 1000000009;

int main() {
    string inp;
    cin >> inp;
    
    bool isD = false;
    bool isC = false;
    long long res = 1;
    
    for (int i = 0; i < inp.length(); i++) {
        if (inp[i] == 'c') {
            if (isC) {
                res = (res * 25) % MOD;
                isD = false;
            } else {
                res = (res * 26) % MOD;
                isC = true;
                isD = false;
            }
        } else {
            if (isD) {
                res = (res * 9) % MOD;
                isC = false;
            } else {
                res = (res * 10) % MOD;
                isD = true;
                isC = false;
            }
        }
    }

    cout << res << endl;

    return 0;
}
