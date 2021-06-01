#include<stdio.h>
#include<string.h>
int main(){
    char arr[101];
    int alpabet[27]={0};
    scanf("%s",arr);
    for(int i=0;i<strlen(arr);i++){
        alpabet[arr[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        printf("%d ",alpabet[i]);
    }
    return 0;
}