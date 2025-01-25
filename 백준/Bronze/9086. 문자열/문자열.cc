#include <iostream>
#include<cstring>
#include <string>
using namespace std;

int main() {
	int n;
	string S;
	cin >> n;
	while (n--) {
		cin >> S;
		cout <<S[0]<<S[S.length()-1]<<endl;
	}
}