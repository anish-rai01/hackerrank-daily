#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;
    
    scanf("%d %ld %c %g %lf",&a,&b,&c,&d,&e);
    printf("%d\n%ld\n%c\n%.3f\n%.9f",a,b,c,d,e);
        
    return 0;
}
