#include <stdio.h>

int main (){
    int i,j,n,isprime;
    printf("Find the prime number between 1 to n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        isprime=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
            isprime=0;
            break;}
        }
        if(isprime==1){
            printf("%d ",i);
        }
    }
    return 0;
}