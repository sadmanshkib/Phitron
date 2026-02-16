#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int lucky=0;
    while (n/10!=0) 
    {
        if(n%10!=7&&n%10!=4)
        {
            
            printf("%d\n",n);
            lucky=1;
            printf("%d",lucky);
            break;
        }
        else if (n%4!=0&&n%7!=0)
        {
            printf("%d",lucky);
            printf("%d\n",n);
            lucky=1;
            break;
        }
        n=n/10;
        printf("%d\n",n);
        
    }
    printf("%d",lucky);
    return 0;
}