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
   int A,B;
   cout << "Ingrese un número A: ";
   cin >> A;
   cout << "Ingrese un número B: ";
   cin >> B;
   
   if (A>B){
       cout << A << " es mayor que " << B;
   }
   else{
       cout << B << " es mayor que " << A;
   }
   return 0;
}