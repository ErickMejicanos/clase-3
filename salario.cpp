#include <iostream>
using namespace std;
int main ()
{
    string nombre;
    float horas;
    
    cout << "Ingrese su nombre: \n";
    cin >> nombre;

    cout << "Ingrese las horas trabajadas: \n";
    cin >> horas;

    float tasa = 10;
    float SalarioBase = min(160.0f, horas) * tasa;
    float HorasExtra = max(0.0f, horas - 160.0f) * tasa * 1.5;
    float SalarioBruto = SalarioBase + HorasExtra;

    float TasaDeImpuestos = 0;
    if (SalarioBruto <= 2000)
    {
        TasaDeImpuestos = 0;
    }
    else if (SalarioBruto <= 2200)
    {
        TasaDeImpuestos = 0.2;
    }
    else
    {
        TasaDeImpuestos = 0.3;
    }
    
    float taxes = SalarioBruto * TasaDeImpuestos;
    float SalarioNeto = SalarioBruto - taxes;

    cout << "Empleado: \n" << nombre << ", Salario Neto: $" << SalarioNeto << endl;

 return 0;
}