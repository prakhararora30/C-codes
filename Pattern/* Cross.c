#include<stdio.h>
int main(){
    
    int i, j, k, c=1;       //declare the variables

    for(i=1; i<=5; i++){        //upper half triangle

        for(k=1; k<=i; k++){      //for space printing
            printf("  ");
        }

        for(j=1; j<=5-i && j<=c; j++){        //for left * printing
            printf("* ");
        }

        for(j=1; j<=2*(5-i)-3; j++){      //for  space
            printf("  ");
        }

        for(j=1; j<5-i && j<=c; j++){       //for right * printing
            printf("*");
        }

        printf("\n");
    }

    for(i=2; i<=5; i++){        //lower half triangle

        for(k=1; k<=5-i; k++){      //for space printing
            printf("  ");
        }

        for(j=1; j<=c; j++){        //for left * printing
            printf("* ");
        }

        for(j=1; j<=i-1; j++){      //for space prinitng
            printf("  ");
        }
        
        for(j=1; j<=i-2; j++){      //for space printing
            printf("  ");
        }

        for(j=1; j<i && j<=c; j++){     //for * printing
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
