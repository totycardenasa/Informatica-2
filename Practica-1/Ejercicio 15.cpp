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
int N=1;
int box=0;
while (N!=0){
cout << "Ingrese un nùmero:";
cin >> N;
box=box+N;
}
cout << "la suma de los numeros ingresados es: " << box;

return 0;
}