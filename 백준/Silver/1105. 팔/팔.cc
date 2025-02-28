#include <iostream>
#include<string>
using namespace std;
typedef long long ll;
int main()
{
    //C++의 입출력 성능 향상을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string L, R;
    cin >> L >> R;
    if (L.length()!= R.length()) {
        cout << "0";
        return 0;
    }
    int count = 0;
    for (int i = 0; i < L.length(); i++) {
        if (L[i] == R[i]) {
            if (L[i] == '8')count++;
        }
        else break;
    }
    cout << count;
}