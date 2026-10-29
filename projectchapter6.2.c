//a program that finds the GCD of two integers entered by the user
// hint:use the Euclids algorithim, which goes like this; let m and n be variables containing 
//two numbers . If n = 0, then stop: M contains the GCD. Otherwise compute the remainder when
// m is divided by n. copy n into m and copy the remainder into n. Then repeat the process,
// starting with testing whether n is 0
#include <stdio.h>
int main(void)
{
int m,n,remainder;
printf("Enter two integers:"); // this program considers M to be greater than N.
scanf("%2d %2d", &m, &n);
if (n == 0)
   printf("gcd = %d\n", m);
   else 
while (n != 0)
{
   remainder = (m % n);
   m = n; 
   n = remainder;
}

printf("the greatest common divisor is %2d", m);


return 0;


}