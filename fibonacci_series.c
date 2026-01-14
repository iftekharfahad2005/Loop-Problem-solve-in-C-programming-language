#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;
    scanf("%d", &n);
    if(n==1){
        printf("%d\n",t1);
    }
    if(n==2){
        printf("%d\n",t2);
    }
    for (i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("%d \n", t2);
    return 0;
}