#include<stdio.h>
int main(){
    
    int i, j, k, c=1;    //declare the variables

    for(i=1; i<=5; i++){    //loop1
        
        for(k=1; k<=5-i; k++){    //loop for printing space
            printf("  ");
        }

        for(j=1; j<=c; j++){    //loop for printing *
            printf("* ");
        }

        printf("\n");
        c++;
    }

    for(i=1; i<=5; i++){    //loop2
        
        for(k=1; k<=i; k++){    //loop for printing space
            printf("  ");
        }

        for(j=1; j<=5-i; j++){    //loop for printing *
            printf("* ");
        }

        printf("\n");
    }

    return 0;
  
}
