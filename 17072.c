#include<stdio.h>
int main(){
    int N,M,R,G,B,I;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){  
        for(int j=0;j<M;j++){
            scanf("%d %d %d",&R,&G,&B);
            I=2126*R+7152*G+722*B;
            if(I<510000){
                printf("#");
            }
            else if(I>=510000 && I<1020000){
                printf("o");
            }
            else if(I>=1020000 && I<1530000){
                printf("+");
            }
            else if(I >= 1530000 && I<2040000){
                printf("-");
            }
            else if(I >= 2040000){
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}