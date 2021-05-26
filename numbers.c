#include<stdio.h>
#include<conio.h>
main()
{
    int a[5];
    int i;
    printf("enter the values \n");

    for(i=0;i<5;i++)
    {
        printf("no ",i);
        scanf("%d",a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("you have entered following values : \n\n",a[i] );

    }
    return 0;
}
