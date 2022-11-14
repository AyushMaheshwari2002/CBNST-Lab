// Lagrange Interpolation Method


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    
    float X[n], Y[n], x, sum = 0, term;
    
    printf("\nEnter the values of X : ");
    for(int i = 0; i < n; i++)
        scanf("%f", &X[i]);
        
    printf("Enter the values of Y : ");
    for(int i = 0; i < n; i++)
        scanf("%f", &Y[i]);
        
    printf("\nEnter the value of x for which you want y : ");
    scanf("%f", &x);
    
    // apply formula
    for(int i = 0; i < n; i++)
    {
        term = 1;
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                term = term * ((x - X[j])/(X[i] - X[j]));
            }
        }
        sum += term * Y[i];
    }
    
    printf("\nLagrange's Interpolated value at %.3f is %.3f.", x, sum);
    return 0;
}


