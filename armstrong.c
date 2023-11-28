#include<stdio.h>
#include<math.h>

int main()
{
   int i, original, remainder, n;
   printf("Enter anumber: ");
   scanf("%d", &n);
   printf("Armstrong numbers between 1 and %d are:\n", n);
for(i=1;i<=n;i++)
{
   float result = 0.0;
   int x=0;
   original=i;
   for(original=i;original != 0; ++x)
   {
      original /= 10;
   }
   for(original=i; original != 0; original/=10)
   {
      remainder = original%10;
      result+= pow(remainder, x);
   }
   if((int)result==i)
   printf("%d\n", i);
}
}