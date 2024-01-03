#include<stdio.h>
main()
{
    int n,col,row,count=0;
    printf("n=");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",++count);

        }
        printf("\n");

    }



    return 0;
}

