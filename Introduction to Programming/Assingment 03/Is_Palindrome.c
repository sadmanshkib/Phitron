#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int n = strlen(s);

    int count = 0;
    if (n == 1)
    {
        count = 1;

        
    }
    else
    {
        for (int i = 0; i <= n / 2 - 1; i++)
        {

            if (s[i] == s[n - 1 - i])
            {

                count = 1;
            }
            else
            {

                count = 0;
                break;
            }
        }
    }

    return count;
}
int main()
{
    char s[1000];
    scanf("%s", &s);
    int x = is_palindrome(s);

    if (x == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}