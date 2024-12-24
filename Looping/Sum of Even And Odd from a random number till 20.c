#include<stdio.h>
int main()
{
    int a,b=0,c=0;    //declare the variables

    printf("enter a number a: ");
    scanf("%d",&a);

    for(;a<=20;a++){    //initialize the loop

        if(a%2==0){    //conditional
            b += a;
        }
        else{
            c += a;
        }

        printf("\n");

    }

    printf("%d\t sum of even numbers",b);
    printf("\n%d\t sum of odd number",c);

    return 0;
}
