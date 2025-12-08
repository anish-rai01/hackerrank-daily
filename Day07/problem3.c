#include <stdio.h>

int main() {

    float income;
    scanf("%g",&income);
    float tax1=(income-250000)*(.05);
    float tax2= 12500 + (income-500000)*(.20);
    float tax3= 12500 + 100000 + (income-1000000)*(.30);
    if(income<0){
        printf("INVALID");
    }
    else if(income<=250000 && income>=0){
        printf("%.2f",0.00);
    }
    else if(income>250000 && income<=500000){
        printf("%.2f",tax1);
    }
    else if(income>500000 && income<=1000000){
        printf("%.2f",tax2);
    }
    else if(income>1000000){
        printf("%.2f",tax3);
    }
    
    return 0;
}