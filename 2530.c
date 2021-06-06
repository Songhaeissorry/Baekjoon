#include<stdio.h>
int main(){
    int h,m,s,req;
    scanf("%d %d %d %d",&h,&m,&s,&req);
    s = s + req;
    if(s>=60){
        m = m + s/60;
        s = s%60;
    }
    if(m>=60){
        h = h + m/60;
        m = m%60;
    }
    if(h>=24){
        h = h % 24;
    }
    printf("%d %d %d",h,m,s);
    return 0;
}