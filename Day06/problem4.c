#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float discounted(float price, float percent){
    float disprice= price - ( price * percent ) / 100;
    return disprice;  
}
int main() {

    float price, percent;
    scanf("%g %g",&price,&percent);
    printf("The final price is: %f",discounted(price,percent));
    
    return 0;
}
