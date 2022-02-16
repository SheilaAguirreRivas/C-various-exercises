/*Desarrollar un programa en C++ con DEVC++, que realice los siguiente:
Solicite por pantalla datos de clientes
Solicite por pantalla datos de productos
Solicite cantidad a facturar
Solicite impuesto a aplicar
Calcule las restantes propiedades de la clase venta
Muestre en pantalla todas ellas (Ticket) */

#include <iostream>
using namespace std;

class venta
{ private:
 	int    cantidad;
  	double importe;
  	double porimp;
  	double totimp;
  	double total;
  	public:
  	void   facturar(); 
 public:
 	int    establecerCantidad();
 	double establecerImpuesto();
  	void   calcular(int , double);
  	void   mostrarTicket();
};

//definicion de la clase cliente
class cliente
{ private:
  	string apenom;
 public:
 	void   establecerCliente();
  	void   mostrarCliente();};

//definicion de la clase producto
class producto
{ private:
string descripcion;
  	double precio;
 public:
  	double establecerProducto();
  	void   mostrarProducto(); };

void venta::facturar(){
};
int venta::establecerCantidad(){
	cout<<"\n Ingrese la cantidad de productos: \n";
	cin>>cantidad;
};
double venta::establecerImpuesto(){
	cout<<"\n Ingrese el porcentaje del impuesto: \n";
	cin>>porimp;
};
void venta::calcular(int, double){
	importe=cantidad*precio;
};
void cliente::establecerCliente(){
	cout<<"\n Ingrese los datos del cliente: \n";
	cin>>apenom;
};
void cliente::mostrarCliente(){
};
double producto::establecerProducto(){
    cout<<"\n Nombre del producto: \n";
	cin>>descripcion;
	
};
void producto::mostrarProducto(){
};



int main()
{
	
	cliente c;
	c.establecerCliente();
	venta v;
	v.establecerCantidad();
	v.establecerImpuesto();
	producto p;
	p.establecerProducto();	
	
system("pause");
return 0;	
	
	
}
