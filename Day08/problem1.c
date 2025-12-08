#include <stdio.h>

int main() {

    int h,t;
    float c;
    scanf("%d %f %d",&h,&c,&t);
    int ch,cc,ct;
    if(h>50)
        ch=1;
    else
        ch=0;
    if(c<0.7)
        cc=1;
    else
        cc=0;
    if(t>5600)
        ct=1;
    else
        ct=0;
    
    if(ch && cc && ct){
        printf("The grade of the steel is: 10\nAll of the conditions met.");
    }
    else if(ch && cc){
        printf("The grade of the steel is: 9\nTwo conditions met.");
    }
    else if(cc && ct){
        printf("The grade of the steel is: 8\nTwo conditions met.");
    }
    else if(ch && ct){
        printf("The grade of the steel is: 7\nTwo conditions met.");
    }
    else if(ch || ct || cc){
        printf("The grade of the steel is: 6\nOnly one condition met.");
    }
    else{
        printf("The grade of the steel is: 5\nNone of the conditions met.");
    }
    return 0;
}