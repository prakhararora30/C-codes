#include<stdio.h>
int main(){

    int i, j, n, flag, sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=2; i<=n; i++){

        flag = 1;

        for(j=2; j<=i-1; j++){

            if(i % j == 0){
                flag=0;
                break;
            }

        }

        if(flag == 1){
            
            sum += i;

        }

    }

    printf("%d", sum);

    return 0;
}
