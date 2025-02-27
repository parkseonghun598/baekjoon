#include <iostream>
using namespace std;

int main()
{
    //C++의 입출력 성능 향상을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int arr[9][9];
    int max = 0;
    int x=1, y=1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int a;
            cin >> a;
            if (max < a) {
                max = a;
                x = i + 1;
                y = j + 1;
            }
        }
    }
    cout << max<<endl;
    cout << x << " " << y;
}