#include<stdio.h>
main()
{

    int x=10,y=20,z=30;
    int *p;
    p=&x;
    printf("x=%d\n",*p);
    p=&y;
    printf("y=%d\n",*p);
    p=&z;
    printf("z=%d",*p);
    return 0;

}
