#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool arrCheck[26]; // 알파벳 26개에 대한 방문 여부
    int n;
    cin >> n;
    int count = 0; // 그룹 단어 개수 카운트
    string s;

    while (n--) {
        fill(begin(arrCheck), end(arrCheck), true); // 모든 요소를 true로 초기화
        cin >> s;
        arrCheck[s[0] - 'a'] = false;
        bool isGroupWord = true; // 그룹 단어 여부 체크

        for (int i = 1; i < s.length(); i++) {
            if (s[i] != s[i - 1]) { // 이전 문자와 다른 경우
                if (arrCheck[s[i] - 'a'] == false) { // 이미 나온 문자인 경우
                    isGroupWord = false;
                    break; // 그룹 단어가 아님
                }
                arrCheck[s[i] - 'a'] = false; // 해당 문자 방문 처리
            }
        }

        if (isGroupWord) count++; // 그룹 단어라면 count 증가
    }

    cout << count << '\n'; // 그룹 단어 개수 출력
}

