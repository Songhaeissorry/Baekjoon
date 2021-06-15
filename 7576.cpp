#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;
int tomato[1001][1001];
int check[1001][1001];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int main(){
  int M,N;
  queue< pair<int,int> >q;
  cin>>M>>N;
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      scanf("%d",&tomato[i][j]);
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      if(tomato[i][j]==1&&check[i][j]==0){
        q.push(make_pair(i,j));
        check[i][j]=1;
      }
    }
  }
  int x,y;
  while(!q.empty()){
    x=q.front().first;
    y=q.front().second;
    q.pop();
    for(int i=0;i<4;i++){
      int nx=x+dx[i];
      int ny=y+dy[i];
      if(0<=nx&&nx<N&&0<=ny&&ny<M){
        if(tomato[nx][ny]==0&&check[nx][ny]==0){
          check[nx][ny]=check[x][y]+1;
          q.push(make_pair(nx,ny));
          tomato[nx][ny]=1;
        }
        else if(tomato[nx][ny]==-1&&check[nx][ny]==0){
          check[nx][ny]=-1;
        }
      }
    }
  }
  int max=0;
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      if(tomato[i][j]==0){
        cout<<-1<<endl;
        return 0;
      }
      else if(check[i][j]>max){
        max=check[i][j];
      }
    }
  }
  cout<<max-1<<endl;
  return 0;
}
