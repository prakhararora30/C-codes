#include<stdio.h>
int main(){
    int n, i, m, count=0;
    printf("enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("enter the value in the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("enter the element whose repetition is to be checked: ");
    scanf("%d", &m);

    for(i=0; i<n; i++){
        
        if(m==a[i]){
            count++;
        }

    }
    printf("total times occurence of %d is %d ", m, count);

    return 0;
}
