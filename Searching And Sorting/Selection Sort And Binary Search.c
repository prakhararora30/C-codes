#include<stdio.h>
int main(){
    int n, i, j, m, t, first, middle, last, min;

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
            
            }

        }

        if(min != i){

            t=a[i];
            a[i]=a[min];
            a[min]=t;

        }

    }

    printf("enter the element to be searched: ");
    scanf("%d", &m);

    first=0;
    last=n-1;

    while(first<=last){

        middle=(first+last)/2;

        if(a[middle] > m){
            last=middle-1;
        }

        else if(a[middle] < m){
            first = middle +1;
        }

        else{
            printf("%d is at %d position\n", m, middle+1);
            break;
        }

    }
 
    printf("the sorted array is: ");

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
