#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    int ans=-1;
    scanf("%d",&x);
    for(int j=0;j<=n;j++)
    {
        if(x==arr[j])
        {
            ans=j;
            break;
        }
        
    }
    printf("%d",ans);

   

    
    return 0;
}