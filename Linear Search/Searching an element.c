#include<stdio.h>
int main(){
    int n, i, m, t, p;  

    printf("enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("enter the values in the array: ");

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("enter the element that has to be searched: ");
    scanf("%d", &m);

    for(i=0; i<n; i++){

        if(m == a[i]){
            
            t=1;
            p=i+1;
            break;
        
        }

    }

    if(t == 1){
        printf("the position is %d", p);
    }

    return 0;
}
