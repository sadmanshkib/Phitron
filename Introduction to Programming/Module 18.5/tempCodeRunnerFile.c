void get_in(int a[],int n,int i)
{
    if(i==n-1)
    {
        return;
    }
    scanf("%d",&a[i]);
    printf("%d",a[i]);
    get_in(a,n,i+1);
}