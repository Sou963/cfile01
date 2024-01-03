#include<stdio.h>
void area();
int main()
{
    area();
    return 0;
}
void area()
{
    int a,b;
    printf("The area number1=");
    scanf("%d",&a);
    printf("The area number 2=");
    scanf("%d",&b);
    printf("area=%d\n",a*b);
    return a;

}

