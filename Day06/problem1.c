#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int h,m;
    scanf("%d %d",&h,&m);
    if(h>12){
        if(m>=0 && m<=9){
            printf("%d:0%d PM",h-12,m);
        }
        else{
            printf("%d:%d PM",h-12,m);
        }
    }
    else if(h==12){
        if(m>=0 && m<=9){
            printf("12:0%d PM",m);
        }
        else{
            printf("12:%d PM",m); 
        }
        
    }
    else if(h==0){
        if(m>=0 && m<=9){
            printf("12:0%d AM",m);
        }
        else{
            printf("12:%d AM",m);
        }
        
    }
    else if(h<12){
        if(m>=0 && m<=9){
            printf("%d:0%d AM",h,m);
        }
        else{
            printf("%d:%d AM",h,m);
        }
        
    }
    return 0;
}