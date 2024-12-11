#include<stdio.h>
int main(){
    int i, n, j, total=0;
    printf("enter the number of subjects: ");
    scanf("%d", &n);
    int a[n];
    printf("enter the marks of %d subjects: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(j=0; j<n; j++){
        total = total + a[j];
    }
    printf("%d", total);
    return 0;
}