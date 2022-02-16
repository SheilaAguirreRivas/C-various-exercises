#include <iostream>
#include <string>
using namespace std; 

double total = 0;

// Declaración de la clase persona
class persona
{
public:
	int  dni;
	string apellido;
public:
	void ingresarPersona();
};

class medico : public persona
{
public:
	string especialidad;
public:
	void ingresarValores();
};

class paciente : public persona
{
public:
	string os;
public:
	void   ingresarValores();
};

class turno 
{
public:
	int dni_medico;
	int dni_paciente;
	int fecha;
	int hora;
public:
	void   ingresarValores();
	void   mostrarTurno(string, string, string, string);
};

void persona::ingresarPersona()
{
dni=0;
 do 
 {
 cout << "Ingresar nro de DNI                 : ";
 cin >> dni;
  }
 while(dni==0);

 cout << "Ingresar apellido                   : ";
 cin >> apellido; 
}

void medico::ingresarValores()
{
 cout << "Especialidad                        : ";
 cin >> especialidad;
 }
 
void paciente::ingresarValores()
{
 cout << "Obra social                         : ";
 cin >> os;
 }

void turno::ingresarValores()
{
cout << endl;  
cout << "************************************* TURNO ************************************" << endl;
cout << endl;  
 cout << endl ;
 cout << "fecha                               : ";
 cin >> fecha;
 cout << "hora                                : ";
 cin >> hora;
 }

void turno::mostrarTurno(string an_medico, string an_paciente, string _especialidad, string _os)
{
 cout << endl;
 cout << "********************************************** Turno asignado ************************************************" << endl;
 cout << "Se le asigno el turno con el medico " << dni_medico << "-" << an_medico ; 
 cout << " de la especialidad " << _especialidad; 
 cout << endl << "Al paciente " << dni_paciente << "-" << an_paciente << " con obra social " << _os; 
 cout << endl << "Turno fecha y hora : " << fecha << "  |  " << hora << endl;
 cout << "**************************************************************************************************************" << endl;
}

// ----------------------------------------------------------------------------------------------
// PROGRAMA PRINCIPAL. Es la porción ejecutable de un programa en C++
// ----------------------------------------------------------------------------------------------
int main()
{
// instanciar clase medico  en m

cout << endl;  
cout << "************************************* MEDICO ***********************************" << endl;
cout << endl;  
medico m;  
m.ingresarPersona();
m.ingresarValores();


cout << endl;  
cout << "************************************ PACIENTE **********************************" << endl;
cout << endl;  
paciente p;    
p.ingresarPersona();
p.ingresarValores();

turno t;    
t.dni_medico=m.dni;
t.dni_paciente=p.dni;

t.ingresarValores();

t.mostrarTurno(m.apellido, p.apellido, m.especialidad, p.os);

return 0;
} 
