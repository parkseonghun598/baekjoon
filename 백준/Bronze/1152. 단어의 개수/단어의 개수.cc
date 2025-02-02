#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int count = 0;
	getline(cin, s);

	for (int i = 1; i < s.length()-1; i++) {
		if (s[i] == ' ')count++;
	}
	if (s[0]==' '&&s.length()==1)cout << 0;
	else cout << ++count;
}