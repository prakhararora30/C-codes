#include<stdio.h>
int main(){
    int i, j, n, m;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    printf("enter the number of columns: ");
    scanf("%d", &m);
    int matrix[n][m];
    printf("enter elements of matrix row wise: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        scanf("%d", &matrix[i][j]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}