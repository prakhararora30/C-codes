#include<stdio.h>
int main(){
    int n, i, j, t, min;

    printf("enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("enter the values of array: ");

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        
        min = i;

        for(j=i+1; j<n; j++){
            if(a[min] > a[j]){

                min=j;
                t=a[i];
                a[i]=a[min];
                a[min]=t;
            }
        }

        if(min != i){
            t=a[i];
            a[i]=a[min];
            a[min]=t;
        }

    }

    printf("the sorted ascending array: ");

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
