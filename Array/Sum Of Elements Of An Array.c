#include<stdio.h>
int main(){
    
    int i, sum = 0, a[5];        //declare the variables
    
    printf("enter the elements of the array: ");
    
    for(i=0; i<5; i++){        //loop1 initialization
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<5; i++){        //loop2 initialization
        sum = sum + a[i];
    }
    
    printf("%d", sum);
    
    return 0;
}
