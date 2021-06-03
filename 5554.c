#include<stdio.h>
int main(){
    int t1,t2,t3,t4;
    scanf("%d %d %d %d",&t1,&t2,&t3,&t4);
    printf("%d\n%d",(t1+t2+t3+t4)/60,(t1+t2+t3+t4)%60);
    return 0;
}