#include<stdio.h>
int main(){
    int n, i, j, t, max;

    printf("enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("enter the values of array: ");

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        
        max = i;

        for(j=i+1; j<n; j++){
            if(a[j] > a[max]){

                max=j;
            }
        }
        
        if(max != i){
            t=a[i];
            a[i]=a[max];
            a[max]=t;
        }

    }

    printf("the sorted decending array: ");

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
