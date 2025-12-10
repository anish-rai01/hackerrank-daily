#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,flag=0;
    scanf("%d",&x);
    if(x==0){
        printf("Acute Angle");
        flag=1;
    }
    x=x%360;
    if(flag==0){
        if(x==0){
            printf("Full Rotation");
        }
        else if(x<90){
            printf("Acute Angle");
        }
        else if(x==90){
            printf("Right Angle");
        }
        else if(x<180){
            printf("Obtuse Angle");
        }
        else if(x==180){
            printf("Straight Angle");
        }
        else{
            printf("Reflex Angle");
        }
    }

    
    
    return 0;
}
