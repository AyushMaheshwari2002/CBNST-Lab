// REGULA FALSI METHOD TO FIND THE ROOT OF EQUATIONS

#include<stdio.h>
#include<math.h>

#define f(x) x*x*x - 5*x + 1
// #define f(x) cos(x) - x*exp(x);

int main()
{
	 float x0, x1, x2, f0, f1, f2, err;
	 int step = 1;
	 
	 up:
	 printf("Enter two initial guesses : \n");
	 scanf("%f %f", &x0, &x1);

	 printf("Enter tolerable error : \n");
	 scanf("%f", &err);
	 
	 // Calculating Functional Value
	 f0 = f(x0);
	 f1 = f(x1);
	 
	 // Check whether the given guesses able to find root or not.
	 if(f0 * f1 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  goto up;
	 }
   	 
	 // Implement Regula Falsi Method
	 printf("\nSteps\t\tx0\t\tx1\t\tx2\t\tf(x)\n\n");
	 do
	 {
		  x2 = x0 - (x1-x0) * f0/(f1-f0);
		  f2 = f(x2);
		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step, x0, x1, x2, f2);
		
		  if(f0 * f2 < 0)
		  {
			   x1 = x2;
			   f1 = f2;
		  }
		  else
		  {
			   x0 = x2;
			   f0 = f2;
		  }
		  step = step + 1;
	 }while(fabs(f2) > err);

	 printf("\nRoot is : %f\n", x2);

	 return 0;
}


