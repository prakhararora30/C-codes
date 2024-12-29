#include<stdio.h>
int main(){
    
    int i, j;

    printf("Enter the numbers: ");
    scanf("%d%d", &i, &j);

    int sum=0;

    sum += i + j;

    printf("%d", sum);

    return 0;
}
