// Newton Backward Interpolation Method


#include<stdio.h>
#include<math.h>

int main()
{
    int n, fact = 1;
    float x, u, y, newU;
    
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    
    float arr[n][n+1];
    
    printf("\nEnter the value's of X : ");
    for(int i = 0; i < n; i++)
        scanf("%f", &arr[i][0]);
        
    printf("Enter the value's of Y : ");
    for(int i = 0; i < n; i++)
        scanf("%f", &arr[i][1]);
        
    printf("\nEnter the value of x for which you want y : ");
    scanf("%f", &x);
    
    //Find the Difference Table
    // first two columns are reserved for the values of x and y
    for(int j = 2; j < n+1; j++)
    {
        for(int i = 0; i <= n-j; i++)
        {
            arr[i][j] = arr[i+1][j-1] - arr[i][j-1];
        }
    }
    
    // Print the Difference Table
    printf("\nBACKWARD DIFFERENCE TABLE\n\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n+1; j++)
        {
            printf("%0.2f\t", arr[i][j]);
        }
        printf("\n");
    }
    
    // find u, x = a + uh so, u = (x-a)/h
    u = (x - arr[n-1][0]) / (arr[1][0]-arr[0][0]);
    newU = u;
    y = arr[n-1][1];  
    int idx = 2;       //corresponds to column no.
    
    for(int i = n-2; i >= 0; i--)
    {
        y = y + (newU * arr[i][idx]) / fact;
        fact = fact * idx;
        newU = newU * (u+(idx-1));
        idx++;
    }

    printf("\nWhen x = %0.2f, corresponding y = %0.2f", x , y);
    return 0;
}



