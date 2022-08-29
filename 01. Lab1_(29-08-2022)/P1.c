#include <stdio.h>
#include<math.h>

int main()
{
    float true_val, approx_val;
    
    printf("Enter the true value : ");
    scanf("%f", &true_val);
    
    printf("Enter the approx value : ");
    scanf("%f", &approx_val);
    
    float absolute_err = fabs(true_val - approx_val);
    float relative_err = fabs(absolute_err / true_val);
    float per_err = relative_err * 100;
    
    printf("\nAbsolute error is : %f\n", absolute_err);
    printf("Relative error is : %f\n", relative_err);
    printf("Percentage Relative error is : %f\n", per_err);

    return 0;
}

