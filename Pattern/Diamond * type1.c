#include<stdio.h>
int main(){
    
    int i, j, k, c=1;       //declare the variables

    for(i=1; i<=5; i++){        //upper half triangle

        for(k=1; k<=5-i; k++){      //for space printing
            printf("  ");
        }

        for(j=1; j<=c; j++){        //for left * printing
            printf("* ");
        }

        c++;

        for(j=1; j<=i-1; j++){      //for right * printing
            printf("* ");
        }

        printf("\n");
    }

    for(i=1; i<=5; i++){        //for lower triangle printing

        for(k=1; k<=i; k++){        //for space printing
            printf("  ");
        }

        for(j=1; j<=5-i; j++){      //for left * printing
            printf("* ");
        }

        for(j=1; j<=5-i-1; j++){        //for right * printing
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
