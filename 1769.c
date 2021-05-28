#include<stdio.h>
#include<string.h>
int main(){
    char X[1000005]={0};
    int sum,cnt = 0;
    scanf("%s",X);
    while(strlen(X)>1){
        sum = 0;
        cnt++;
        for(int i=0;i<strlen(X);i++){
            sum += X[i]-'0';
        }
        sprintf(X,"%d",sum);
    }
    printf("%d\n",cnt);
    if(!strcmp(X,"3")||!strcmp(X,"6")||!strcmp(X,"9")){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}