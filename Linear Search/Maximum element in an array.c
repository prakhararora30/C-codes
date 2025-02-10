#include<stdio.h>
int main(){
    int n, i, m;
    printf("enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("enter the value in the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    m=a[0];

    for(i=0; i<n; i++){
        if(m < a[i]){
            m = a[i];
        }
    }
    printf("the maximum element is: %d", m);


    return 0;
}
