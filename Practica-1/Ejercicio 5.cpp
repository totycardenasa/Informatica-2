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
    int A,B;
    cout<<"Ingrese el número A:";
    cin >> A;
    cout<< "Ingrese el número B:";
    cin >> B;
    int resultado =  round(static_cast<float>(A) / B);
    cout << "El resultado entre " << A << " y " << B << " con redondeado es igual a: " << resultado; 
    return 0;
    
}