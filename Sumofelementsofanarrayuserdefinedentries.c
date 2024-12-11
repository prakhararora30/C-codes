#include<stdio.h>
int main(){
    int i, n, sum = 0;
    printf("enter elements of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        sum = sum + a[i];
    }
    printf("%d", sum);
    return 0;
}