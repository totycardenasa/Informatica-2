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
 char caracter,caracter_nuevo; 
 cout << "Ingrese una letra del abecedario:"; 
 cin >> caracter; 
 
 if ((caracter>='a') and (caracter<='z')) {
     caracter_nuevo = caracter - 32;
     
 }

else if ((caracter>='A')and (caracter<='Z')){
    caracter_nuevo = caracter + 32;

}
cout << caracter_nuevo;
return 0;
}
 