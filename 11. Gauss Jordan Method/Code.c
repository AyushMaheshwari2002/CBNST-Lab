#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    
    printf("Enter the number of unknowns : ");
    scanf("%d", &n);
    
    float arr[n][n+1];
    
    printf("\nEnter the values in matrix :\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n+1; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }

    // convert the given agrumnented matrix into upper triangular matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n +1; j++)
        {
            if(i != j)
            {
                float ratio = arr[j][i]/arr[i][i];
                
                for(int k = 0; k < n+1; k++)
                {
                    arr[j][k] = arr[j][k] - ratio*(arr[i][k]);  
                }
            }
        }
    }
    
    printf("\nThe row echelon form of given matrix is : \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n+1; j++)
        {
            printf("%0.2f\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nRESULT : \n");
    for(int i = 0; i < n; i++)
    {
        printf("The value of x%d : %f\n", i, arr[i][n]/arr[i][i]);
    }
    
    return 0;
}



