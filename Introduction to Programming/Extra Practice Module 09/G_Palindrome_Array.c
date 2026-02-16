#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for( int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int ans;
    for(int i=0;i<n;i++)
    {
        if(i>n/2-1)
        {
            break;
        }

        if (a[i]==a[n-1-i])
        {
          ans=1;
        }
        else
        {
            ans=0;
            break;
        }

    

        
        
    }

    if(ans==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    

    return 0;
}