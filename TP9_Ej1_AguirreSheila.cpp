/* 1) Hacer un programa en C++ con DEVC++, utilizando POO, que solicitando por teclado el
valor de la tasa de impuesto y el importe a abonar, determine el impuesto calculado.
Desarrollar utilizando funciones para calcular el impuesto calculado y para mostrar el
resultado. Para ello definir y utilizar la clase Impuesto (definida mas abajo), para luego
instanciar al objeto miImpuesto sobre que aplicar la solución antes descripta.
Impuesto:
- importe : double
- tasa : double
- importe: double
----
+ RecibirDatos() : void
+ CalcularImpuesto():void
+ MostrarImpuesto() : void

*/
#include <iostream>
using namespace std;
class Impuesto{
	private:
		double importe, tasa, importe2;
	public:
	void RecibirDatos();
	void CalcularImpuesto();
	void MostrarImpuesto();	
};
void Impuesto:: RecibirDatos(){
cin>>importe;
cin>>tasa;
}

void Impuesto::CalcularImpuesto(){
importe2=importe-(importe*(tasa/100));
}

void Impuesto::MostrarImpuesto(){
	cout<<"\n El importe a abonar es $ "<<importe2<<" \n";
}
int main()
{
cout<<"\n Ingrese el importe y la tasa de impuesto : \n ";

{Impuesto p;
	p.RecibirDatos();
	p.CalcularImpuesto();	
	p.MostrarImpuesto();
}

system("pause");
return 0;
}

