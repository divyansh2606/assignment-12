#include<stdio.h>
void natural(int n)
{
    if(n>0)
    {
        natural(n-1);
        printf("%d\n",n);
    }
}
int main()
{
    natural(10);
    printf("\n");
    return 0;
}
