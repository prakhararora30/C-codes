#include<stdio.h>
int main(){
    int n, i, j, t, m, first, middle, last;

    printf("enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("enter the values of array: ");
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++){

        for(j=0; j<n-i-1; j++){

            if(a[j] > a[j+1]){

                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
            
        }

    }

    printf("enter the element to be searched: ");
    scanf("%d", &m);

    first=0;
    last=n-1;

    for(i=0; i<n; i++){

        middle=(first+last)/2;

        if(a[middle]>m){
            
            first= middle+1;

        }
        
        else if(a[middle]<m){

            last=middle-1;

        }

        else{
            printf("the position is %d\n", middle+1);
            break;
        }

    }

    printf("the sorted array is: ");

    for(i=0; i<n; i++){

        printf("%d ", a[i]);

    }

    return 0;
}
