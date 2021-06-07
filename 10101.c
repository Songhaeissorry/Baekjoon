#include<stdio.h>
int main(){
    int a1,a2,a3;
    scanf("%d %d %d",&a1,&a2,&a3);
    if(a1+a2+a3!=180){
        printf("Error");
    }
    else if(a1==a2 && a2==a3){
        printf("Equilateral");
    }
    else if(a1==a2 || a2==a3 || a1==a3){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}