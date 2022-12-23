#include <stdio.h>

#define f(x,y) x+y

int main()
{
    float n, x0, y0, xn, yn, h, slope;
    
    printf("Enter the initial value of x and y : ");
    scanf("%f%f", &x0, &y0);
    
    printf("\nEnter the last value (xn) : ");
    scanf("%f", &xn);
    
    printf("\nEnter the number of steps : ");
    scanf("%f", &n);
    
    h = (xn - x0) / n;
    
    printf("\nX \t\t Yn-1 \t\t\t Slope \t\t\t Y\n");
    
    for(int i = 0; i < n; i++)
    {
        slope = f(x0,y0);
        yn = y0 + (h*slope);
        printf("%0.4f \t\t %0.4f \t\t %0.4f \t\t %0.4f\n", x0, y0, slope, yn);
        y0 = yn;
        x0 = x0 + h;
    }
    
    printf("\nValue of y at n = %0.4f is %0.4f", xn, yn);
    
    return 0;
}



