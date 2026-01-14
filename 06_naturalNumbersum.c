#include <stdio.h>

int main (){
    int n,i,a=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=a+i;
    }
    printf("%d ",a);
    return 0;
}