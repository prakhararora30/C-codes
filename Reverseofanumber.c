#include<stdio.h>
int main(){
    int i, digit, reversed=0;
    printf("enter a number: ");
    scanf("%d", &i);
    while(i != 0){
        digit = i % 10;
        reversed = reversed*10 + digit;
        i /= 10;
    }
    printf("%d", reversed);
    return 0;
}