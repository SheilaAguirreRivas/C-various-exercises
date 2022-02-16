#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main()
{
/*Hacer un programa en c++, utilizando DEVC++, que permita cargar en un vector de 5
elementos por teclado, con valores numéricos diferentes. Al finalizar recorrerlo y hallar el
mayor valor, su posición y el valor promedio. Mostrar los valores obtenidos por pantalla al
finalizar.*/

int num=0, i=0, may=0, pos=0, acum=0;
int vector[5]={0,0,0,0,0};
float prom=0;
float total=0;


for(i=0;i<5;i++)
	{
	cout<<"Ingrese el "<<i+1<<" ° valor : ";
	cin>>num;
	vector[i]=num ;
	}
	/*for(int i=0;i<5;i++){
	cout <<("Ingrese un valor en la posicion ");
	cout <<i+1;
	cout <<(" del vector: ");
	cin >>valor;
	vector[i]=valor;*/


for(i=0; i<5; i++)
	{
		acum=acum+vector[i];
	
	if (vector[i]>may){
	may=vector[i];
	pos=i;
	total=total + vector[i];
	}
	
	
	}
	
/*for(i=0;i<5;i++){
	acum=acum+vector[i];
	if(vector[i]>may){
		may=vector[i];
		pos=i + 1;
	}
}

 
	
	
prom=(prom+(vector[1]+vector[2]+vector[3]+vector[4]+vector[0]))/5	;
*/
prom=total/5;

	cout<<"\n "<<may<<"";
	cout<<"\n ";
	cout<<"\n "<<pos+1<<"";
	cout<<"\n ";
	cout<<"\n "<<prom<<"";
	return 0;
}
