#include <iostream>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int dot = 2;
    int n;
    cin >> n;
    
    while(n--) dot = dot*2 - 1;
    cout << dot*dot;
    return 0;
}