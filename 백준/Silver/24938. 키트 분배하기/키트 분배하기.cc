#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, sum=0;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i ++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    const int kit = sum / N;
    int count = 0;
    for (int i = 0; i < N-1; i++) {
        
        while (true) {
            if (arr[i] == kit)break;
            else if (arr[i] > kit) {
                arr[i]--;
                arr[i + 1]++;
                count++;
            }
            else if (arr[i] < kit) {
                arr[i]++;
                arr[i + 1]--;
                count++;
            }
        }
    }
    cout << count;
}
