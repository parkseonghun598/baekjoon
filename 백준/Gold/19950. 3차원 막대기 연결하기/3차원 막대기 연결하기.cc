#include<iostream>
#include<cmath>
using namespace std;

int main(void) {
    int x1, y1, z1, x2, y2, z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

    int k;
    cin >> k;

    int* arrLength = new int[k];
    int max = 0;
    int sum = 0;

    for (int i = 0; i < k; i++) {
        cin >> arrLength[i];
        if (max < arrLength[i]) max = arrLength[i];
        sum += arrLength[i];
    }

    double length = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));

    if (sum < length) {
        cout << "NO";
        return 0;
    }


    // 조건 2: 삼각형 부등식 위배 검사
    if (max - length > sum - max) {
        cout << "NO";
        return 0;
    }

    cout << "YES";
    return 0;
}
