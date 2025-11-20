#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int area(int length, int width){
    int res = length*width ;
    return res;
}
int main() {
    int l,w;
    scanf("%d %d",&l,&w);
    printf("The area is: %d units",area(l,w));
    return 0;
}
