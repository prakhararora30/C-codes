#include<stdio.h>
int main(){

    int i, j, n, flag;

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
            printf("%d ", i);
        }

    }

    return 0;
}
