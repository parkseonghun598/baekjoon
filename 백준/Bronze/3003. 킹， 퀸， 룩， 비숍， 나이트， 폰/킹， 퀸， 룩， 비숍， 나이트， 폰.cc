#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[6];
    const int constArr[6] = { 1,1,2,2,2,8 };
    for (int i = 0; i < 6; i++) {
        int count = 0;
        cin >> arr[i];
        if (constArr[i] != arr[i]) {
            while (constArr[i] != arr[i]) {
                if (arr[i] < constArr[i]) {
                    arr[i]++;
                    count++;
                }
                else {
                    arr[i]--;
                    count--;
                }
            }
        }
        cout << count << " ";

    }
}
