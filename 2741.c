#include<stdio.h>
void putN(int n){
    for(int i=0;i<n;i++){
        printf("%d\n",i+1);
    }
}
int main(){
    int N;
    scanf("%d",&N);
    putN(N);
    return 0;
}