#include<stdio.h>
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    int i;
    int j;
    int b;
    for(i=0;i<a;i++)
    {
        for(j=0;j<i;j++)
        {
            j=a*i;
            printf("the result is:%d\n",j);
        }
    }
}
