#include<stdio.h>
int main(){
    
    int num, original, reversed=0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original=num;

    while(num != 0){
        remainder = num % 10;
        reversed = reversed*10 + remainder;
        num /= 10;
    }

    if(original == reversed){
        printf("%d is a palindrome", original);
    }

    else{
        printf("%d is not a palindrome: ", original);
    }

    return 0;
}
