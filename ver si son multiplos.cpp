#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main()
{
int a, b, r;
printf("PRIMER NUMERO :");
scanf("%d",&a);
printf("SEGUNDO NUMERO :");
scanf("%d",&b);
r=(b%a);
if (r==0)
printf("%.d MULTIPLO DE : %.d \n",b,a);
else
printf("%.d NO ES MULTIPLO DE : %.d \n",b,a);
system("pause");
return 0;
}

