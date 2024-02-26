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
   int division; 
   cout <<"Ingrese un número:";
   cin >> numero;
   cout << "Los divisores de " << numero << " son: " << endl;
   for ( int i=1; i <= numero ; i=i+1){
       division = numero/i;
       if (numero%i==0){
       cout << division << endl; 
           
       }
   }
   return 0;
}