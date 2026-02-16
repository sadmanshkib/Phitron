#include<stdio.h>
#include<math.h>
int main()
{
    float n;
    scanf("%f",&n);
    // n = floor(n);
    // n = ceil(n);
    //  n = round(n);
    // n = pow(n,2);
    n = abs(n);

    printf("%f\n",n);
    // printf("%d",ceil(n));
    return 0;
}