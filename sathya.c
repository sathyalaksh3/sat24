#include <stdio.h>
int main()
{
int n, orgnlno, rem, result = 0;
printf("Enter a three digit integer: ");
scanf("%d", &n);
orgnlno=number;
while(orgnlno!= 0)
    {
        rem= orgnlno%10;
        result += rem*rem*rem;
        orgnlno/=10;
    }
if(result == n)
printf("Armstrong number");
else
printf("not an Armstrong number");
return 0;
}
