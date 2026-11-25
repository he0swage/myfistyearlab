#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x,exist;

    printf("enter the size of the array!!: ");

    scanf("%d",&n);

    int T[n];

    for(i=0;i<n;i++)

    {

    printf("enter the element of the array please!!: ");

    scanf("%d",&T[i]);}

    printf("enter a value you want to search!!: ");

    scanf("%d",&x);

    exist=0;

    for(i=0;i<n;i++){

        if (T[i]==x){

            exist=1;
        }
    }

    if (exist==0){

        printf("the value does'nt exist!!!!! ",x);}

    else{

     printf("this value exist!!!!!",x);}


    return 0;
}
