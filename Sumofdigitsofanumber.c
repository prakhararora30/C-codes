#include<stdio.h>
int main(){
    int n, digit, sum=0;
    printf("enter a number: ");
    scanf("%d", &n);
    while(n != 0){
        digit = n % 10;
        sum = sum + digit;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}