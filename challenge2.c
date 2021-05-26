#include<stdio.h>
#include<conio.h>
main()
{
float a;
float b;
float c;
float Average;
printf("ENTER NO 1:");
scanf("%f",&a);
printf("\nENTER NO 2:");
scanf("%f",&b);
printf("\nENTER NO 3:");
scanf("%f",&c);
Average=(a+b+c)/3;
printf("\nAverage :%f",Average);
printf("\nhigh/low indicator :%d",Average>15);

}
