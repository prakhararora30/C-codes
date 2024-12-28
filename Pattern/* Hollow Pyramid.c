#include<stdio.h>
int main(){
    
    int i, j, k, c=1;       //declare the variables

    for(i=1; i<=4; i++){        //upper half triangle

        for(k=1; k<=5-i; k++){      //for space printing
            printf("  ");
        }

        for(j=1; j<=c; j++){        //for left * printing
            printf("* ");
        }

        for(j=1; j<=i-1; j++){      //for pyramidal left space printing
            printf("  ");
        }
        
        for(j=1; j<=i-2; j++){      //for pyramidal right space printing
            printf("  ");
        }

        for(j=1; j<i && j<=c; j++){     //for right * printing
            printf("* ");
        }

        printf("\n");
    }
        for(j=1; j<=2*(i-1)+1; j++){        //for bottom * line printing
            printf("* ");
        }

return 0;
}
