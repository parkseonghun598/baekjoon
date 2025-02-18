#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, int>> meetings(N);

    for (int i = 0; i < N; i++) {
        cin >> meetings[i].first >> meetings[i].second;
    }

    // 종료 시간 기준 오름차순 정렬, 같으면 시작 시간 기준 정렬
    sort(meetings.begin(), meetings.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) return a.first < b.first;  // 종료 시간이 같으면 시작 시간 기준 정렬
        return a.second < b.second;  // 기본적으로 종료 시간 기준 정렬
        });

    int count = 0;
    int lastEndTime = 0;  // 마지막으로 선택된 회의의 종료 시간

    for (const auto& meeting : meetings) {
        if (meeting.first >= lastEndTime) {  // 현재 회의 시작 시간이 이전 회의 종료 시간 이후라면 선택 가능
            count++;
            lastEndTime = meeting.second;  // 현재 회의 종료 시간을 갱신
        }
    }

    cout << count << "\n";
    return 0;
}
