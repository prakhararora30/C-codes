#include<stdio.h>
int main(){
    
    int i, j, k, c=1;       //declare the variables

    for(i=1; i<=5; i++){        //upper half triangle

        for(k=1; k<=5-i; k++){      //for space printing
            printf("  ");
        }

        for(j=1; j<=2*(i-1)-2; j++){
            printf("* ");
        }

        for(j=1; j<i && j<=c; j++){
            printf("* ");
        }

        printf("\n");
    }

return 0;
}
