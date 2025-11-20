#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumLastDigits(int a, int b){
    int res= a%10 +b%10;
    return res;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The sum of last digits is: %d",sumLastDigits(a,b));
    return 0;
}