//  GAUSS ELIMINATION METHOD FOR FINDING SOLUTION OF LINEAR EQUATIONS

 
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the number of unknowns : ");
    scanf("%d", &n);
    
    // input from the user
    float arr[n][n+1];
	  printf("\nEnter the values in matrix :\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n+1; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }

    // step 2 : convert the given agrumnented matrix into upper triangular matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n+1; j++)
        {
            if(j < i)
            {
                float ratio = arr[i][j] / arr[j][j];

                for(int k = 0; k < n+1; k++)
                {
                    arr[i][k] = arr[i][k] - ratio*(arr[j][k]);
                } 
            }
        }
    }

    printf("\nUpper Triangular Matrix is : \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n+1; j++)
        {
            printf("%0.2f\t",arr[i][j]);
        }
        printf("\n");
    }

    // Apply Backward Subsitution 
    float x[n];
    x[n-1] = arr[n-1][n] / arr[n-1][n-1];

    for(int i = n-1; i >= 0; i--)
    {
        float sum = 0;
        for(int j = i+1; j < n; j++)
        {
            sum += arr[i][j]*x[j];
        }
        x[i] = (arr[i][n]-sum) / arr[i][i];
    }

    printf("\nRESULT : \n");

    for(int i = 0; i < n; i++)
    {
        printf("The value of x%d = %0.2f\n", i, x[i]); 
    }
    return 0;
}




