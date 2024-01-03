#include<stdio.h>
int main()
{

    int x=5,y=6,sum;
    int *p,*q;
    p=&x;
    q=&y;
    sum=*p+*q;
    printf("The sum is=%d\n",sum);
    return 0;

}


