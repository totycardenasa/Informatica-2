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
    int numero;
    int suma=0; 
    cout << "Ingrese un número: ";
    cin >> numero; 
    
    for (int i = 0; i <= numero; i=i+1) {
        suma = suma + i;
      
    
    }
     cout << "La sumatoria desde 0 hasta " << numero << " es: " << suma;
     return 0;
}