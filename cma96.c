#include<stdio.h>
main()
{

    int *a,s;
    s=199;
    a=&s;
    printf("%d\n",*a);
    printf("The adress of a=%d\n",&a);
    printf("The adress of s=%d\n",&s);
    return 0;

}
