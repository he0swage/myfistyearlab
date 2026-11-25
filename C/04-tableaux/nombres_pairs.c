#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{int N,i,num,x;
    printf("enter the size of the array : ");
    scanf("%d",&N);
    int Tab[N];
    for (i=0;i<N;i++)
    {
        printf("enter random numbers:\n  ");
        scanf("%d",&num);
        x=num%2;
        scanf("%d",&x);
        if(x=0)
        printf("this numbers is enven!!");
        else
        printf("this numbers is odd");
    }
return 0;
}
