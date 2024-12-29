#include<stdio.h>
int main(){
    
    int i, j, k, n, c=1;    //declare the variables

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){    //loop1
        
        for(k=2; k<=i; k++){    //loop for printing space
            printf("  ");
        }

        for(j=1; j<=2*(n-i)+1; j++){
            printf("* ");
        }

        printf("\n");
        c++;
    }

    return 0;
  
}
