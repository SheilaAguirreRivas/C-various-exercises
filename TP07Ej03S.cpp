#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
char nomyap[30];
int i=0,n=0,cant[i],imp[i];
float tot=0,precio[i];
cout<<"ingrese el nombre y el apellido del comprador:\n";
gets (nomyap);
cout<<"Ingrese la cantidad de productos a facturar:\n";
cin>>n;
for (i=1;i<=n;i++){
cout<<"Ingrese el precio del producto numero "<<i<<":\n";
cin>>precio[i];
cout<<"Ingrese la cantidad de producto vendido:\n";
cin>>cant[i];
cout<<"Ingrese el impuesto del producto:\n";
cin>>imp[i];
if (imp[i]<1 or imp[i]>100){
cout<<"El impuesto debe ser un numero entre 1 y 100\n";
cin>>imp[i];
}
tot=tot+(precio[i]+(precio[i]*imp[i]/100))*cant[i];
}
cout<<"---------------------------------\n";
cout<<"-----------FACTURA---------------\n";
cout<<"CLIENTE:" <<nomyap<<"\n";
cout<<"PRODUCTO      CANTIDAD   IMP    PRECIO P/U\n";
for (i=1;i<=n;i++){
cout<<"---"<<i<<"------------"<<cant[i]<<"---------"<<imp[i]<<"------$"<<precio[i]<<"\n";
}
cout<<"----------------------------------\n";
cout<<"----------------------------------TOTAL $ "<<tot;
cout<<"\n----------------------------------";
return 0;
}
