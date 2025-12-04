#include <stdio.h>

int main() {

    int N;
    scanf("%d",&N);
    N = N & 1;
    if(N){
        printf("Odd");
    }
    else{
        printf("Even");
    }
        
    return 0;
}