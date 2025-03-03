#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // C++의 입출력 성능 향상을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int arrTime[6];  // 약을 먹을 수 있는 시간
    int N, K;  // 약을 먹어야 하는 일수 N, 약효의 지속시간 K
    cin >> N >> K;

    for (int i = 0; i < 6; i++) {
        cin >> arrTime[i];
    }

    int startTime = arrTime[1];  // monStart로 시작

    for (int i = 1; i <= N; i++) {
        if (startTime + K < arrTime[2]) {  // lunStart보다 작으면 불가능
            cout << "NO\n";
            return 0;
        }
        startTime = min(arrTime[3], startTime + K);  // lunEnd 내에서 약효 지속

        if (startTime + K < arrTime[4]) {  // dinStart보다 작으면 불가능
            cout << "NO\n";
            return 0;
        }
        startTime = min(arrTime[5], startTime + K);  // dinEnd 내에서 약효 지속

        if (i < N) {  // 다음 날로 이동
            if (startTime + K < arrTime[0] + 1440) {  // 다음 날 monStart보다 작으면 불가능
                cout << "NO\n";
                return 0;
            }
            startTime = min(arrTime[1] + 1440, startTime + K) - 1440;  // monEnd 기준으로 다음 날 조정
        }
    }

    cout << "YES\n";
    return 0;
}
