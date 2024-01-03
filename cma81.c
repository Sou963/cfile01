#include<stdio.h>
mian()
{

    int n,row,col;
    printf("n=");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==n||col==1||row==col)
            {
                printf("#");

            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");

    }
}

