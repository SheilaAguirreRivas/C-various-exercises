#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <conio.h>
using namespace std;
int main () 
{ /*	Hacer un programa en c++, utilizando DEVC++, que ingrese por teclado, en 3 variables
distintas hora, minutos y segundos, y calcule y muestre en pantalla en otra variable, el
total de las 3 primeras variables expresado en segundos.*/
int h,m,s,total=0;

cout<< "\n Ingrese valor para hora: ";
cin>>h;
	while (h<=0){
	cout<< "\n Ingrese un valor válido para la hora: ";
	cin>> h;
}
cout<< "\n Por favor, ingrese valor para minutos: ";
cin>>m;
	while (m<0){
	cout<< "\n Ingrese un valor válido para los minutos: ";
	cin>>m;
}
cout<< "\n Por favor, ingrese valor para segundos: ";
cin>>s;
	while(s<0){
	cout<< "\n Ingrese un valor válido para los segundos: ";
	cin>>s;
}
{
total=(3600*h)+(60*m)+s;
}
cout<< "\n El total en segundos es de "<<total;
return 0;
}
