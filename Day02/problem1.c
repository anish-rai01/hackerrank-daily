#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int dist(char a,char b){
    int res= b - a;
    return res;
}
int main() {
    int char1,char2;
    scanf("%lc %lc",&char1,&char2);
    printf("The distance between %c and %c is %d",char1,char2,dist(char1,char2));

       
    return 0;
}