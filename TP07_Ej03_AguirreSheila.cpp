#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main()
{/*	Hacer un programa en c++, utilizando DEVC++, que permita ingresar por teclado cantidad
de productos a facturar, luego de cada uno de ellos ingresar precio, cantidad y % de
impuesto. Calcular el importe de cada producto, acumular en otra variable, el total a
pagar. Al final mostrar el total a pagar por todos los productos ingresados.*/
int cantprod, cant, x=0;
float precio, porc, subt, tot=0;

cout<<"\n Hola! Ingrese cantidad de productos: ";
cin>>cantprod;

for (x=0;x<cantprod;x++){
		cout<<"\n Precio del producto "<<x+1<<" : ";
		cin>>precio;
		
        cout<<"\n Cantidad a comprar del producto "<<x+1<<" : ";
		cin>>cant;
			
		cout<<"\n Ingrese porcentaje de impuesto a pagar por el producto "<<x+1<<" : ";
		cin>>porc;
			while (porc>100){
			cout<< "\n Ingrese un valor válido para el porcentaje: ";
			cin>>porc;
}
	precio=precio+((precio*porc)/100);
	subt=precio*cant;
	tot=tot+subt;
}
cout<<"\n Total a abonar por los productos : $ "<<tot;
return 0;
}
