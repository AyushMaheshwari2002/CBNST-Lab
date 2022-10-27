// NEWTON RAPHSON METHOD TO FIND THE ROOT OF EQUATIONS



#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) 3*x - cos(x) - 1
// derivation of f(x)
#define g(x) 3 + sin(x)

int main()
{
	 float x0, x1, f0, f1, g0, err;
	 int step = 1;

	 printf("Enter initial guess : ");
	 scanf("%f", &x0);
	 printf("Enter tolerable error : ");
	 scanf("%f", &err);
	 
	 // Implementing Newton Raphson Method 
	 printf("\nSteps\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  
		  if(g0 == 0.0)
		  {
			   printf("Mathematical Error in derivation of given equation!!!");
			   exit(0);
		  }
		  
		  x1 = x0 - f0/g0;
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
		  x0 = x1;
		  
		  step++;
		  
		  f1 = f(x1);
		  
	 }while(fabs(f1) > err);
	
	 printf("\nRoot is: %f", x1);
	 
	 return 0;
}



