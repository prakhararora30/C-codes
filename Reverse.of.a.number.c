#include<stdio.h>
int main(){
    
    int i, digit, reversed=0;        //declare the variables
    
    printf("enter a number: ");        //enter the number
    scanf("%d", &i);
    
    while(i != 0){
        digit = i % 10;
        reversed = reversed*10 + digit;        //reversing the number
        i /= 10;
    }
    
    printf("%d", reversed);        //print the reversed number
    
    return 0;
}
