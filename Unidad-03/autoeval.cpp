#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

  int anio, mes, dia;
  int anioActual = 2024;
  int mesActual = 5;

  cout << "Ingrese su anio de nacimiento: ";
  cin >> anio;

  cout << "Ingrese su mes de nacimiento: ";
  cin >> mes;

  cout << "Ingrese su dia de nacimiento: ";
  cin >> dia;

  string mesPalabra;

  switch (mes)
  {
  case 1:
    mesPalabra = "enero";
    break;
  case 2:
    mesPalabra = "febrero";
    break;
  case 3:
    mesPalabra = "marzo";
    break;
  case 4:
    mesPalabra = "abril";
    break;
  case 5:
    mesPalabra = "mayo";
    break;
  case 6:
    mesPalabra = "junio";
    break;
  case 7:
    mesPalabra = "julio";
    break;
  case 8:
    mesPalabra = "agosto";
    break;
  case 9:
    mesPalabra = "septiembre";
    break;
  case 10:
    mesPalabra = "octubre";
    break;
  case 11:
    mesPalabra = "noviembre";
    break;
  case 12:
    mesPalabra = "diciembre";
    break;
  default:
    mesPalabra = "error";
  }

  //   Debe contemplarse:
  // + Que el año no supere el actual
  if (anio > anioActual)
  {
    cout << "No puede ser un anio mayor al actual, vuelva a ejecutar el programa. " << endl;
    return 1;
  }

  // + Que el mes exista (entre 1 – 12)
  if (mes > 12 || mes < 1)
  {
    cout << "Mes invalido, vuelva a ejecutar el programa. " << endl;
    return 1;
  }

  // + Que el mes tenga esa cantidad correcta de días (enero: 31, febrero 28, marzo 31, etc). No vamos
  // a contemplar años bisiestos.
  switch (mes)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (dia > 31 || dia < 1)
    {
      cout << "Dia invalido, vuelva a ejecutar el programa. " << endl;
      return 1;
    }
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    if (dia > 30 || dia < 1)
    {
      cout << "Dia invalido, vuelva a ejecutar el programa. " << endl;
      return 1;
    }
    break;
  case 2:
    if (dia > 28 || dia < 1)
    {
      cout << "Dia invalido, vuelva a ejecutar el programa. " << endl;
      return 1;
    }
    break;
  }

  int edad = anioActual - anio;

  if (mesActual < mes)
    edad--;

  cout << "Usted nacio el " << dia << " de " << mesPalabra << " de " << anio << endl;
  cout << "Usted tiene " << edad << " anios de edad." << endl;

  return 0;
}
