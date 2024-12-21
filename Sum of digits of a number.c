#include<stdio.h>
int main(){
    
    int n, digit, sum=0;        //declare the variables
    
    printf("enter a number: ");
    scanf("%d", &n);
    
    while(n != 0){        //loop begins
        digit = n % 10;
        sum = sum + digit;
        n /= 10;
    }
    
    printf("%d", sum);
    
    return 0;
}
