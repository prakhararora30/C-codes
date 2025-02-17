#include<stdio.h>
int main(){
    int n, i, m, t, p;  

    printf("enter the size of array: ");        //array size declaration
    scanf("%d", &n);

    int a[n];

    printf("enter the values in the array: ");      //array value insertion

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("enter the element that has to be searched: ");
    scanf("%d", &m);

    for(i=0; i<n; i++){     //finding the desired element

        if(m == a[i]){
            
            t=1;
            p=i+1;
            break;
        
        }

    }

    if(t == 1){     //element is found and position is known
        printf("the position is %d", p);
    }

    if(t != 1){     //if element not found
        printf("element %d not found", m);
    }

    return 0;
}
