#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main()
{/* Hacer un programa en c++, utilizando DEVC++, que permita Ingresar por teclado Apellido y
nombre del comprador, la descripción de producto, precio, cantidad y % de impuesto a
abonar, y muestre por pantalla la factura correspondiente a ese ítem.*/
string ayn, desc;
float precio, porc, subt, imp, tot=0;
int cant=0;
	
cout<<"\n Hola! Ingrese el apellido y nombre del comprador: ";
getline(cin, ayn);
	
cout<<"\n Ingrese la descripcion del producto: ";
getline(cin, desc);
	
cout<<"\n Indique su precio : $ ";
cin>>precio;
	
cout<<"\n Indique la cantidad: ";
cin>>cant;

cout<<"\n Indique el porcentaje de impuesto: ";
cin>>porc;
	while (porc>100){
		cout<< "\n Ingrese un valor valido para el porcentaje: ";
		cin>>porc;
}
{
    subt=(precio*cant);
	imp=(subt*porc/100);
	tot=subt+imp;
}	
	cout<<"\n Apellido y nombre : " <<ayn;
	cout<<"\n";
	cout<<"\n Descripcion del producto : " <<desc;
	cout<<"\n";
	cout<<"\n Precio: $ " <<precio;
	cout<<"\n";
	cout<<"\n Cantidad : " <<cant;
	cout<<"\n";
	cout<<"\n Porcentaje de impuesto : " <<porc<<"%";
	cout<<"\n";
	cout<<"\n Impuesto a pagar : $ "<<imp;
	cout<<"\n";
	cout<<"\n Total a abonar : $ "<<tot;
	
	return 0;
}
