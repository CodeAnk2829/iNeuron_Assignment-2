//Program to find the position of first 1 from LSB
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if((n & 1) == 0){
        if((n >> 1) & 1) {
            printf("The position of the first 1 from LSB is 1");
        }      
        else if((n >> 2) & 1){
            printf("The position of the first 1 from LSB is 2");
        }
        else if((n >> 3) & 1){
            printf("The position of the first 1 from LSB is 3");
        }
        else if((n >> 4) & 1){
            printf("The position of the first 1 from LSB is 4");
        }
        else if((n >> 5) & 1){
            printf("The position of the first 1 from LSB is 5");
        }
        else if((n >> 6) & 1){
            printf("The position of the first 1 from LSB is 6");
        }
        else if((n >> 7) & 1){
            printf("The position of the first 1 from LSB is 7");
        }
        else if((n >> 8) & 1){
            printf("The position of the first 1 from LSB is 8");
        }
        else if((n >> 9) & 1){
            printf("The position of the first 1 from LSB is 9");
        }
        else if((n >> 10) & 1){
            printf("The position of the first 1 from LSB is 10");
        }
        else if((n >> 11) & 1){
            printf("The position of the first 1 from LSB is 11");
        }
        else if((n >> 12) & 1){
            printf("The position of the first 1 from LSB is 12");
        }
        else if((n >> 13) & 1){
            printf("The position of the first 1 from LSB is 13");
        }
        else if((n >> 14) & 1){
            printf("The position of the first 1 from LSB is 14");
        }
        else if((n >> 15) & 1){
            printf("The position of the first 1 from LSB is 15");
        }
        else if((n >> 16) & 1){
            printf("The position of the first 1 from LSB is 16");
        }
        else if((n >> 17) & 1){
            printf("The position of the first 1 from LSB is 17");
        }
        else if((n >> 18) & 1){
            printf("The position of the first 1 from LSB is 18");
        }
        else if((n >> 19) & 1){
            printf("The position of the first 1 from LSB is 19");
        }
        else if((n >> 20) & 1){
            printf("The position of the first 1 from LSB is 20");
        }
        else if((n >> 21) & 1){
            printf("The position of the first 1 from LSB is 21");
        }
        else if((n >> 22) & 1){
            printf("The position of the first 1 from LSB is 22");
        }
        else if((n >> 23) & 1){
            printf("The position of the first 1 from LSB is 23");
        }
        else if((n >> 24) & 1){
            printf("The position of the first 1 from LSB is 24");
        }
        else if((n >> 25) & 1){
            printf("The position of the first 1 from LSB is 25");
        }
        else if((n >> 26) & 1){
            printf("The position of the first 1 from LSB is 26");
        }
        else if((n >> 27) & 1){
            printf("The position of the first 1 from LSB is 27");
        }
        else if((n >> 28) & 1){
            printf("The position of the first 1 from LSB is 28");
        }
        else if((n >> 29) & 1){
            printf("The position of the first 1 from LSB is 29");
        }
        else if((n >> 30) & 1){
            printf("The position of the first 1 from LSB is 30");
        }
        else{
            printf("The position of the first 1 from LSB is 31");
        }
        }
    else{
        printf("The position of the first 1 from LSB is 0");
    }
    return 0;
}