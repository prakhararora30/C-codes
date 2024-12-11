#include<stdio.h>
int main(){

    int i, j, k, n, m, a, b;

    printf("rows1: ");      //deciding order of matrix1
    scanf("%d", &n);
    printf("columns1: ");
    scanf("%d", &m);

    int matrix1[n][m];      //declaration of matrix1

    printf("enter elements of a matrix1 row wise: ");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("rows2: ");      //deciding order of matrix2
    scanf("%d", &a);
    printf("columns2: ");
    scanf("%d", &b);

    int matrix2[a][b];      //declaration of matrix2

    printf("enter elements of matrix2 row wise: ");
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    if(n == a && m == b){       //checking if matrix addition is possible or not

        int matrix3[n][m];

        for(i=0; i<n; i++){     //perform matrix addition
            for(j=0; j<m; j++){
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        for(i=0; i<n; i++){     //print result of matrix
            for(j=0; j<m; j++){
                printf("%d\t", matrix3[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("matrix addition is not possible for the defined order of matrices");
    }
    return 0;
}
