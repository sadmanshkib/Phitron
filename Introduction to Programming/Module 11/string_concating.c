#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[10];
    scanf("%s %s",&a,&b);


    int n=strlen(a);
    // for (int i = 0; i <strlen(b); i++)
    // {
      
    //     a[n+i]=b[i];  
    // }
    strcat(a,b);
    

    
    printf("%s %s",a,b);

    return 0;
}