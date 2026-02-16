#include<stdio.h>
void Cello()
{
    printf("Cello\n");
    
}

void tello()
{
    printf("Tello\n");
    Cello();
}
void mello()
{
    printf("Mello\n");
    tello();
}

void hello()
{
    printf("Hello\n");
    mello();
}
int main()
{
    printf("Hi\n");
    hello();
    
    return 0;
}