#include<stdio.h>
int main(){
  
    int i, n, j, total=0;    //declare the variables
  
    printf("enter the number of subjects: ");
    scanf("%d", &n);
  
    int a[n];    //declare the Array
  
    printf("enter the marks of %d subjects: ", n);
  
    for(i=0; i<n; i++){    //loop1
        scanf("%d", &a[i]);
    }
  
    for(j=0; j<n; j++){    //loop2
        total = total + a[j];
    }
  
    printf("%d", total);
  
    return 0;
}
