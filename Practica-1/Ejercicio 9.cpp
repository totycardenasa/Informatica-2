/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese un número:";
    cin >> N;
    double pi = 3.1416;
    int exponente = 2;
    double area,perimetro;
    area = pi * pow(N, exponente);
    perimetro = (2 * pi * N);
    cout << " El area del círculo es: " << area << " y el perímetro del círculo es: " << perimetro;
    return 0;
}