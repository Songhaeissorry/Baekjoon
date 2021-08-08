#include<stdio.h>
int fac(int k){
    if(k>1){
        return k*fac(k - 1);
    }
    else{
        return 1;
    }
}
int main(){
    int N;
    scanf("%d",&N);
    printf("%d",fac(N));
    return 0;
}