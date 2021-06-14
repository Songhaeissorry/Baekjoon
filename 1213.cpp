#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a=0;
  string s;
  char c;
  cin>>s;
  deque<char>v;
  int alpa[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  for(int i=0;i<s.size();i++){
    v.push_back(s[i]);
    alpa[s[i]-'A']++;
  }
  int cnto=0;
  for(int i=0;i<26;i++){
    if(alpa[i]%2==1){
      cnto++;
      c=i+'A';
    }
  }
  if(cnto>=2){
    cout<<"I'm Sorry Hansoo"<<"\n";
    return 0;
  }
  int ct=0;
  sort(v.begin(),v.end());
  deque<char>d;
  while(v.empty()==0){
    if(cnto==0){
      d.push_front(v.back());
      v.pop_back();
      d.push_back(v.back());
      v.pop_back();
    }
    else if(cnto==1){
      if(v.back()==c&&ct==0){
        v.pop_back();
        ct++;
        continue;
      }
      d.push_front(v.back());
      v.pop_back();
      d.push_back(v.back());
      v.pop_back();
    }
  }
  if(cnto==0){
    for(int i=0;i<d.size();i++){
      cout<<d[i];
    }
  }
  else{
    for(int i=0;i<d.size()/2;i++){
      cout<<d[i];
    }
    cout<<c;
    for(int i=d.size()/2;i<d.size();i++){
      cout<<d[i];
    }
  }
cout<<"\n";
  return 0;
}
