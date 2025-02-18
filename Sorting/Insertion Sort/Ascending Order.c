#include<stdio.h>
int main(){
    int n, i, j, t;
    printf("enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("enter the vlues of array: ");
    
    for(i=0; i<n; i++){

        scanf("%d", &a[i]);

    }

    for(i=1; i<n; i++){
        
        t=a[i];
        j=i-1;

        while((t < a[j]) && (j >= 0)){

            a[j+1]=a[j];
            j--;

        }

        a[j+1]=t;

    }

    printf("the sorted array is: ");

    for(i=0; i<n; i++){
        
        printf("%d ", a[i]);

    }

    return 0;
}
