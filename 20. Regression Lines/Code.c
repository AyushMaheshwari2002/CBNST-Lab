#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of number of terms : ");
    scanf("%d", &n);
    
    float x[n], y[n], xy[n], x2[n];
    float Sx=0, Sy=0, Sxy=0, Sx2=0;
    
    double byx;
    
    printf("\nEnter the values of x : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
        Sx += x[i];
    }
    
    printf("\nEnter the value of y : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &y[i]);
        Sy += y[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        xy[i] = x[i]*y[i];
        Sxy += xy[i]; 
        x2[i] = x[i]*x[i];
        Sx2 += x2[i]; 
    }

    byx = ((n*Sxy) - (Sx*Sy)) / ((n*Sx2) - (Sx*Sx));
    Sx = Sx/n;
    Sy = Sy/n;
    float z = (byx*Sx)-Sy;

    printf("\nThe Regression Line of y on x is : \n");
    printf("Y = (%0.4f)X - (%0.4f)", byx, z);
    
    return 0;
} 



