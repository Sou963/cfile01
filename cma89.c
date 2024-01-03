#include<stdio.h>
main()
{
    int a[100]= {1,2,3,4,5},pos,num,i;
    printf("The position of the array=");
    scanf("%d",&pos);
    printf("Inter the number=");
    scanf("%d",&num);
    for(i=4;i>pos;i--)
    {
        a[i+1]=a[i];

    }
      a[pos-1]=num;
    printf("The new array=");
    for(i=0;i<=5;i++)
    {
        printf("%d ",a[i]);
    }

}






