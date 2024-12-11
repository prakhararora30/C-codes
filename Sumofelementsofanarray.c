#include<stdio.h>
int main(){
    int i, sum = 0, a[5];
    printf("enter the elements of the array: ");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++){
        sum = sum + a[i];
    }
    printf("%d", sum);
    return 0;
}