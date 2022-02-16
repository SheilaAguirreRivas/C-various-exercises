#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main()
{
int n, x;
cout<<"Ingrese un numero"<<endl;
cin>>n;
if (n % 3 == 0)
for (x = n; x <= 100; x= x +3)
	printf("%d\t",x);
	if (n % 3 == 1)
for (x = n; x <= 100; x= x +3)
	printf("%d\t",x + 2);
	if (n % 3 == 2)
for (x = n; x <= 100; x= x +3)
	printf("%d\t",x+1);
	return 0;
}
