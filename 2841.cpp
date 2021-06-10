#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>a;stack<int>b;stack<int>c;stack<int>d;stack<int>e;stack<int>f;
int A,B;cin>>A>>B;int cnt=0;
for(int i=0;i<A;i++){
  int C,D;cin>>C;
  if(C==1){
    cin>>D;
    if(a.empty()==1){
      a.push(D);cnt++;
    }
    else if(a.top()==D){
    }
    else{
      while(a.empty()!=1&&a.top()>=D){
        if(a.top()==D){
          a.pop();
          cnt--;
        }
        else{
          a.pop();
          cnt++;
        }
      }
      a.push(D);
      cnt++;
    }
  }
  else if(C==2){
    cin>>D;
    if(b.empty()==1){
      b.push(D);cnt++;
    }
    else if(b.top()==D){
    }
    else{
      while(b.empty()!=1&&b.top()>=D){
        if(b.top()==D){
          b.pop();
          cnt--;
        }
        else{
          b.pop();
          cnt++;
        }
      }
      b.push(D);
      cnt++;
    }
  }
  else if(C==3){
    cin>>D;
    if(c.empty()==1){
      c.push(D);cnt++;
    }
    else if(c.top()==D){
    }
    else{
      while(c.empty()!=1&&c.top()>=D){
        if(c.top()==D){
          c.pop();
          cnt--;
        }
        else{
          c.pop();
          cnt++;
        }
      }
      c.push(D);
      cnt++;
    }
  }
  else if(C==4){
    cin>>D;
    if(d.empty()==1){
      d.push(D);cnt++;
    }
    else if(d.top()==D){
    }
    else{
      while(d.empty()!=1&&d.top()>=D){
        if(d.top()==D){
          d.pop();
          cnt--;
        }
        else{
          d.pop();
          cnt++;
        }
      }
      d.push(D);
      cnt++;
    }
  }
  else if(C==5){
    cin>>D;
    if(e.empty()==1){
      e.push(D);cnt++;
    }
    else if(e.top()==D){
    }
    else{
      while(e.empty()!=1&&e.top()>=D){
        if(e.top()==D){
          e.pop();
          cnt--;
        }
        else{
          e.pop();
          cnt++;
        }
      }
      e.push(D);
      cnt++;
    }
  }
  else if(C==6){
    cin>>D;
    if(f.empty()==1){
      f.push(D);cnt++;
    }
    else if(f.top()==D){
    }
    else{
      while(f.empty()!=1&&f.top()>=D){
        if(f.top()==D){
          f.pop();
          cnt--;
        }
        else{
          f.pop();
          cnt++;
        }
      }
      f.push(D);
      cnt++;
    }
  }
}
cout<<cnt<<endl;
return 0;
}
