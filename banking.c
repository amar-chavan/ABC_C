#include<stdio.h>
#include<conio.h>
main()
{
float ib=2198.29;
float dp;
float total;
printf("PLEASE ENTER THE AMOUNT TO BE DEPOSITED :");
scanf("%f",&dp);
total=dp+ib;
printf("\n-----------------------------------------");
printf("\n           Receipt # 201929");
printf("\n-----------------------------------------");
printf("\n  INITIAL BALANCE    :Rs. %0.2f",ib);
printf("\n  TOTAL BALANCE IS   :Rs. %0.2f",total);
printf("\n  DEPOSITED AMOUNT   :Rs. %0.2f",dp);
printf("\n-----------------------------------------");
return 0;
}
