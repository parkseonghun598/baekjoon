#include <iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	int count;
	int number = 1;
	string testCase;
	while (true) {
		count = 0;
		cin >> testCase;
		if (testCase.find('-')!=string::npos)break;//'-'이 있으면 종료
		 
		stack<char> testStack;
		for (int i = 0; i < testCase.length(); i++) {
			switch (testCase[i])
			{
				case '{': 
					testStack.push(testCase[i]);
					break;
				case '}':
					if (testStack.empty()){
						count++;//비어있으면 }가 먼저오니까 한번
						testStack.push('{');//바꿔서 한번 넣기
					}
					else {
						testStack.pop();//꺼내기
						break;
					}
				default:
					break;
			}


		}
		if (testStack.empty()) {//스택이 비어있으니 다 맞음
			cout << number++ << ". " << count << endl;
		}
		else {//스택이 비어있지 않으니 스택의 남은 개수/2 만큼의 변화 필요
			count += testStack.size() / 2;
			cout << number++ << ". " << count << endl;

		}
	}
}