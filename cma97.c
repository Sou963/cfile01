#include<stdio.h>
main()
{
    int x=5;
    int *p;
    p=&x;
    printf("The value of x=%d \n",x);
    printf("The adress of x=%d\n",&x);
    printf("The value of p=%d\n",*p);
    printf("The adress of p=%d\n",&p);

    return 0;
}
