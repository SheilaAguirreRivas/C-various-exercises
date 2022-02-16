/*
Desarrolle con la herramienta DEV C++, un programa que calculare sueldo de Transportistas, de acuerdo con lo siguiente:
a. Desarrolle el programa principal CALCTRA06, que solicite por pantalla los datos, realice los cálculos y muestre los resultados de acuerdo con la siguiente definición:
b. Ingrese por teclado los datos del transportista:
TRAAYN Apellido y nombre del Transportista (dato obligatorio)
TRAPRK Precio por kilómetro recorrido (dato obligatorio)
TRAKMS Cantidad de kilómetros recorridos (dato obligatorio)
TRAPRF % Premio por eficiencia (dato no obligatorio)
c. Ingrese por teclado los descuentos a realizar:
DESJUB Porcentaje a descontar jubilación (dato obligatorio)
d. Ejecutar en programa principal, las siguientes funciones a desarrollar:
CALCTRA06_bru TOTBRU = (Cantidad de kilómetros recorridos * precio de kilometro recorrido) + (TOTBRU * % Premio por eficiencia)
CALCTRA06_des TOTDES = Total bruto * porcentaje jubilación
CALCTRA06_net TOTNET = El total bruto menos el total de descuentos calculados
e. Mostrar por pantalla recibo de sueldo con los siguientes datos:
Apellido y nombre transportista: TRAAYN
Cantidad de km’s recorridos: TRAKMS
Precio kilometro recorrido: TRAPRK
% Premio eficiencia: TRAPRF
Total bruto a cobrar: TOTBRU
Total de descuentos: TOTDES
Total neto a cobrar: TOTNET
*/

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
//Funciones
double CALCTRA06_bru (double [] , double [], double [] , double [] );
double CALCTRA06_des (double [], float []) ;
double CALCTRA06_net (double [], float []) ;
string TRAAYN;
double TRAPRK= 0;
float TRAKMS = 0;
double TRAPRF= 0;
float DESJUB= 0;
double TOTBRU= 0;
double TOTDES= 0;
double VARIABLEAUXI= 0;
double calculadosAUX2= 0;
double retornando1;
double retornando2;
double retornando3;
int main()
{
cout << "Ingresar apellido y nombre del Transportista "
<<endl;
cin>>TRAAYN;
cout << "Precio por kilómetro recorrido "<<endl;
cin>>TRAPRK;
cout << " Cantidad de kilómetros recorridos " <<endl;
cin>>TRAKMS;
cout << " % Premio por eficiencia" <<endl;
cin>>TRAPRF;
cout << " Ingrese por teclado el descuento a realizar por
jubilacion " <<endl;
cin>>DESJUB;
out << " RECIBO DE SUELDO DE.," <<endl;
cin>>TRAAYN;
cout << " INFORMACION DETALLADA DE TRAYECTOS Y COSTOS EN SU
TURNO DEL SENIOR " <<TRAAYN<< endl;
cout << " KILOMETROS RECORRIDOS" <<TRAKMS;
cout << " Precio kilometro recorrido:" <<TRAPRK;
cout << "% Premio eficiencia:" <<TRAPRF;
retornando1 = cout<< "Total bruto a cobrar: "
<<TOTBRU;
retornando2 = cout << "Total de descuentos: "
<<TOTDES;
retornando3 = cout<< "Total neto a cobrar: " <<TOTNET;
return 0;
double CALCTRA06_bru( double TRAKMS,double TRAPRK, double
TRAPRF ) ;
{
TOTBRU = (TRAKMS * TRAPRK);
VARIABLEAUXI = TOTBRU * TRAPRF;
TOTBRU = VARIABLEAUXI;
return TOTBRU;
}
double CALCTRA06_des( double TOTDES [] , double TOTBRU [] ,
float DESJUB [])
{
double TOTDES= 0 ;
TOTDES = (TOTBRU * DESJUB)/100;
return TOTDES;
}
double CALCTRA06_net(double TOTBRU [], double TOTDES[])
{
calculadosAUX2 = (TOTBRU - TOTDES);
return calculadosAUX2;
}

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
//Funciones
int CALCTRA06_bru (int, int, int);
void CALCTRA06_des (int, int) ;
int CALCTRA06_net (int, int) ;

int main(){
	
	string TRAAYN;
	
	int TRAKMS = 0;
	int TRAPRK= 0;
	int TRAPRF= 0;
	
	int DESJUB= 0;
	
	int TOTBRU= 0;
	int TOTDES= 0;
	int TOTNET=0;
	/*
	double VARIABLEAUXI= 0;
	double calculadosAUX2= 0;
	double retornando1;
	double retornando2;
	double retornando3;
	
CALCTRA06_bru = TOTBRU;
CALCTRA06_des = TOTDES;
CALCTRA06_net = TOTNET;

*/

CALCTRA06_bru (TRAKMS, TRAPRK, TRAPRF);
CALCTRA06_des (TOTBRU, DESJUB);
CALCTRA06_net (TOTBRU, TOTDES);





cout << "Ingresar apellido y nombre del Transportista "<<endl;
cin>>TRAAYN;
cout << "Precio por kilómetro recorrido "<<endl;
cin>>TRAPRK;
cout << " Cantidad de kilómetros recorridos " <<endl;
cin>>TRAKMS;
cout << " % Premio por eficiencia" <<endl;
cin>>TRAPRF;
cout << " Ingrese por teclado el descuento a realizar por jubilacion " <<endl;
cin>>DESJUB;
cout << " RECIBO DE SUELDO DE " <<endl;
cin>>TRAAYN;
cout << " INFORMACION DETALLADA DE TRAYECTOS Y COSTOS EN SU TURNO DEL SENIOR " <<TRAAYN<< endl;
cout << " KILOMETROS RECORRIDOS" <<TRAKMS;
cout << " Precio kilometro recorrido:" <<TRAPRK;
cout << "% Premio eficiencia:" <<TRAPRF;
cout<< "Total bruto a cobrar: "
<<TOTBRU;
cout << "Total de descuentos: "
<<TOTDES;
cout<< "Total neto a cobrar: " <<TOTNET;

return 0;
}


int CALCTRA06_bru( int TRAKMS,int TRAPRK, int TRAPRF )
{
	int BRU= 0;
	int TOTBRU= 0;

BRU = (TRAKMS * TRAPRK);
TOTBRU= (BRU * TRAPRF);
/*
VARIABLEAUXI = TOTBRU * TRAPRF;
TOTBRU = VARIABLEAUXI;
return CALCTRA06_bru;
*/
}



void CALCTRA06_des( int TOTBRU,int DESJUB)
{
//double TOTDES= 0 ;
	int TOTDES= 0;

TOTDES = ((TOTBRU)*(DESJUB))/100;
}


int CALCTRA06_net(int TOTBRU , int TOTDES)
{
	int TOTNET=0;
TOTNET= (TOTBRU - TOTDES);
}
