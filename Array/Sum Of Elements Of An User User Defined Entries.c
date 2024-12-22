#include<stdio.h>
int main(){
  
    int i, n, sum = 0;    //declare the variables
  
    printf("enter elements of an array: ");
    scanf("%d", &n);
  
    int a[n];    //declare the Array
  
    printf("enter the elements of the array: ");
  
    for(i=0; i<n; i++){    //loop1
        scanf("%d", &a[i]);
    }
  
    for(i=0; i<n; i++){    //loop2
        sum = sum + a[i];
    }
  
    printf("%d", sum);    //print sum
  
    return 0;
}
