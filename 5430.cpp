#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int T;
  cin>>T;
  for(int i=0;i<T;i++){
  //  cout << "test case : " << i << " ============" << endl;
    int n;
    deque<int> deq;
    string s,a;
    string temp;
    bool b=true;
    cin>>s;
    cin>>n;
    cin>>a;
    for(int j=0;j<a.size();j++){
      if(a[j]=='['){
        continue;
      }
      else if(a[j]>='0'&&a[j]<='9'){
        temp += a[j];
      }
      else if(a[j]==','||a[j]==']'){
        // cout << "push temp : " << temp << endl;
        if(temp.size() > 0)
          deq.push_back(stoi(temp));
        temp.clear();
      }
    }
    bool iserror = false;
    for(int j=0;j<s.size();j++){
      if(s[j]=='R'){
        b=!b;
      }
      else if(s[j]=='D'){
        if(deq.empty()){
          cout<<"error"<<endl;
          iserror = true;
        }
        else if(b){
          deq.pop_front();
        }
        else if(!b){
          deq.pop_back();
        }
      }
      if(iserror) break;
    }
    if(iserror) continue;
    // cout << "dq.size() is : " << deq.size() << endl;
    int tmp = deq.size();
    if(deq.empty()) {
      cout << "[]" << endl;
      continue;
    }
    if(b){
      cout<<'[';
      for(int k=0;k<tmp;k++){
        cout<< deq.front();
        deq.pop_front();
        if(deq.empty()){
          cout<<']'<<endl;
          break;
        }
        else{
          cout<<',';
        }
      }
    }
    else if(!b){
      cout<<'[';
      for(int k=0;k<tmp;k++){
        cout<< deq.back();
        deq.pop_back();
        if(deq.empty()){
          cout<<']'<<endl;
          break;
        }
        else{
          cout<<',';
        }
      }
    }
  }
  return 0;
}
