#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    float uni1= n*5;
    float uni2= 500 + (n-100)*7;
    float uni3= 500 + 1400 + (n-300)*10;   
    if(n<0){
        printf("Invalid Input!");
    }
    else if(n>=0 && n<=100){
        printf("The electricity bill is: %.2f.",(uni1)-((uni1)*(10.00/100)));
    }
    else if(n>100 && n<=300){
        if(uni2<=1200.00){
            printf("The electricity bill is: %.2f.",(uni2)-((uni2)*(10.00/100)));
        }
        else{
            printf("The electricity bill is: %.2f.",uni2);
        }
    }
    else{
        printf("The electricity bill is: %.2f.",uni3);
    }
    return 0;
}