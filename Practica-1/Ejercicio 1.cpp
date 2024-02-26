/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int A,B,residuo;
    cout<< "Ingrese el numero A:" ;
    cin >> A;
    cout<< "Ingrese el numero B:" ;
    cin >> B;
    residuo= A/B;
    cout<<"El residuo de la división entre A y B es: "<<residuo;
    return 0;
}
    