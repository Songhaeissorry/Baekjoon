#include<iostream>
using namespace std;
int board[52][52]={0};
int check[52][52]={0};
int dx[8]={-1,0,1,-1,1,-1,0,1};
int dy[8]={-1,-1,-1,0,0,1,1,1};
void dfs(int sx,int sy){
  check[sx][sy]=1;
  for(int i=0;i<8;i++){
    if(0<=sx+dx[i]&&51>=sx+dx[i]&&0<=sy+dy[i]&&51>=sy+dy[i]){
    if(check[sx+dx[i]][sy+dy[i]]==0&&board[sx+dx[i]][sy+dy[i]]==1){
      dfs(sx+dx[i],sy+dy[i]);
    }}
  }
}
int main(){
  while(1){
    int land =0;
    for(int i=0;i<52;i++){
      for(int j=0;j<52;j++){
        board[i][j]=0;
        check[i][j]=0;
      }
    }
    int x,y;
    cin>>x>>y;
    if(x==0&&y==0){
      return 0;
    }
    else{
      for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
          int in;
          cin>>in;
          board[i][j]=in;
        }
      }//입력
      for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
          if(check[i][j]==0&&board[i][j]==1){
            dfs(i,j);
            land++;
          }
        }
      }
    }
    cout<<land<<endl;
  }
}
