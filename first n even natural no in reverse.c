#include<stdio.h>
void natural(int n)
{
    if(n>0)
    { printf("%d\n",2*n);

      natural(n-1);
    }
}
int main()
{
    natural(10);
    printf("\n");
    return 0;
}
