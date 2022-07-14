//Program to convert INR into USD
#include <stdio.h>
int main(){
    float INR, USD;
    printf("Enter amount in Indian Rupee\n");
    scanf("%f", &INR);
    printf("%.2f INR = %.2f USD", INR, (INR / 76.23));
    return 0;
}