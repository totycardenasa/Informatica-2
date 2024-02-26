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
    int numero;
    int producto=0;
    cout << "Ingrese un número: ";
    cin >> numero;
    for (int i = 1; i <= 10; i=i+1) {
        producto = numero*i;
        cout << numero<< "x" <<i<< "=" << producto << endl;
    }
    return 0;
}