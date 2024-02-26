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
    int N, box;
    cout << "Ingrese un número: ";
    cin >> N;
    for (int i=1; i<=N; i=i+1){
    if(N%i==0){
    box= box+ 1;    
      }
    }
    
    if (box==2){
        cout << "El número ingresado es primo";
    }
    else{
        cout << "El número ingresado no es primo";
    }
    
    
    return 0;
}