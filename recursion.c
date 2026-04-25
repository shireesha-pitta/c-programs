#include <stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int num=5;
    printf("factorial = 5d\n",fact(num));
    return 0;
}