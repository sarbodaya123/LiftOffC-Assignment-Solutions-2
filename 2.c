#include<stdio.h>
int main()
{
int n, k, sum=0;
printf("Enter the last even number: ");
scanf("%d", &k);
for(n=1;n<=k;n++)
{
sum+=n;
printf("\t%d",n+=1);
}
printf("\n sum of all numbers =%d", sum);
return 0;
}

