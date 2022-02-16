#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main()
{
	int n1, n2;
	cout<<"Ingrese dos numeros"<<endl;
	cin>>n1;
	cin>>n2;
	if(n1==n2) {
		cout<<"Los números son iguales"<<endl;
	}else{
        if(n1>n2) {
        	cout<<"El mayor es : " <<n1<<endl;
		}else{
			cout<<"El mayor es : " <<n2<<endl;
		}
	}
	return 0;
}
