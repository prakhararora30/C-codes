#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,grades;
    printf("enter numbers of five subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    f=a+b+c+d+e;
    g=f/5;
    switch(g/10){
        case 10:
            printf("A");
            break;
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        default:
            printf("D");
    } 
    return 0; 
}
