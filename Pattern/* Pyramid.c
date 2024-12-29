#include<stdio.h>
int main(){
    
    int i, j, k, n, c=1;    //declare the variables

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=5; i++){    //loop1
        
        for(k=1; k<=5-i; k++){    //loop for printing space
            printf("  ");
        }

        for(j=1; j<=c; j++){    //for left *
            printf("* ");
        }

        for(j=2; j<=i; j++){        //for right *
            printf("* ");
        }

        printf("\n");
        c++;
    }

    return 0;
  
}
