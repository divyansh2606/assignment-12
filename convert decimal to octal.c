
#include<stdio.h>

    void dtob(int n)
    {
        if(n>0)
        {
            dtob(n/8);
            printf("%d",n%8);

        }

    }
    int main()
    { int x;
    printf("enter decimal no ");
    scanf("%d",&x);
        dtob(x);
        return 0;
    }

