#include <stdio.h> #include <conio.h> void main)
int n, a, b; clrscrO;
printf("Enter any numberIn");
scanf("%d", &n);
a = recfactorial(n);
printf("The factorial of a given number using recursion is
% In", a);
b = nonrecfactorial(n);
printf("The factorial of a given number using nonrecursion is %d", b); getch0;
intrecfactorial(int x)
int f;
if(x == 0)
{ return(1);

?
else
f=×* recfactorial(x - 1);
return(f);
intnonrecfactorial(intx)
{
int i, f=1;
for(i = 1; <= x; it+)
f゠f*i
? return(f);
}
