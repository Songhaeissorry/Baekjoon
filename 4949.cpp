#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	while(1){
		string str;			// 문자열 선언
		bool canplay = true;
		getline(cin,str);	// 한줄 입력
		if(str=="."){		// 만약 "." 입력시 반복 종료
			break;
		}
		stack<char>g;		// 여는 괄호를 입력받는 스택
		for(int i=0;i<str.size();i++){	// 문자열 탐색
			if(str[i]=='('||str[i]=='['){	// 여는괄호일때 스택에 푸시
				g.push(str[i]);
			}
			else if(str[i] == ')') {	// ) or ] 처리 -> ( [ ) ] 이런경우 안됫음. to
				if(g.empty() || g.top() == '[') {
					canplay = false;
					break;
				} else {	// (
					g.pop();
				}
			}
			else if(str[i] == ']') {
				if(g.empty() || g.top() == '(') {
					canplay = false;
					break;
				} else {
					g.pop();
				}
			}
			else {
				continue;
			}
		}
		if(!canplay || g.empty()!=1){
			cout<<"no"<<endl;
		}
		else cout<<"yes"<<endl;
	}
	return 0;
}
