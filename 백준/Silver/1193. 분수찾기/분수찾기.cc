#include <iostream>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
 
    int line = 1;
    int x;
    cin >> x;
 
    // X가 위치한 대각선 찾기
    while(x - line > 0){
        x -= line;
        line++;
    }
 
    // 대각선 홀수일 때
    if(line % 2) cout << line + 1 - x << '/' << x;
    // 대각선 짝수일 때
    else cout << x << '/' << line + 1 - x;
 
    return 0;
}