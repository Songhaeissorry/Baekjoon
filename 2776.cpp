#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long start,mid,ed;
bool isthere;
vector<long long>board;
vector<long long>ask;
int main(){
  int N,M,S,T;
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>T;
  while(T--){
    cin>>N;
    while(N--){
      int sav;
      cin>>sav;
      board.push_back(sav);
    }
    sort(board.begin(),board.end());
    cin>>M;
    S=M;
    while(M--){
      int sav;
      cin>>sav;
      ask.push_back(sav);
    }
    for(int i=0;i<S;i++){
      start=0;
      ed=board.size()-1;
      mid=(start+ed)/2;
      isthere = false;
      while(start<=ed){
        if(ask[i]==board[mid]){
          isthere=true;
          break;
        }
        else if(ask[i]<board[mid]){
          ed=mid-1;
          mid=(start+ed)/2;
          continue;
        }
        else if(ask[i]>board[mid]){
          start=mid+1;
          mid=(start+ed)/2;
          continue;
        }
      }
      if(isthere==true){
        cout<<1<<"\n";
      }
      else if(isthere==false){
        cout<<0<<"\n";
      }
    }
    board.clear();
    ask.clear();
  }
  return 0;
}
