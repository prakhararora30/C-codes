#include<stdio.h>
int calsum(int a, int b, int c, int d, int e){
    int f;
    f = a + b + c + d + e;
    return(f);
}

int average(int a, int b, int c, int d, int e){

    int g;
    g = calsum(a, b, c, d, e)/5;
    
    return g;
}
int percentage(int a, int b, int c, int d, int e){

    int f, h;
    
    f = calsum(a, b, c, d, e);
    h = f/5;
    
    return h;
}
int main(){
    
    int f, g, h, v, w, x, y, z;

    printf("Enter the marks: ");
    scanf("%d%d%d%d%d", &v, &w, &x, &y, &z);

    f = calsum(v, w, x, y, z);
    g = average(v, w, x, y, z);
    h = percentage(v, w, x, y, z);

    if(h <= 90){
        printf("A");
    }

    else if(h <= 80){
        printf("B");
    }

    else if(h <= 60){
        printf("C");
    }

    else{
        printf("D");
    }
    
    printf("\nSum of marks: %d\n", f);
    printf("Average of marks: %d\n", g);
    printf("Percentage of marks: %d%%", h);

    return 0;
}
