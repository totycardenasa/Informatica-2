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
int numero_uno,numero_dos,contador_uno=1,box=1,x,y;
cout << "Este programa calcula el MCM entre dos números" << endl;
cout << "Ingrese el primer número:";
cin >> numero_uno;
cout << "Ingrese el segundo número:";
cin >> numero_dos;
x = numero_uno;
y = numero_dos;
while ((contador_uno<=numero_uno) or (contador_uno<=numero_dos)){
    contador_uno=contador_uno+1;
    if ( numero_uno % contador_uno==0){
        box = box * contador_uno;
        numero_uno = numero_uno/contador_uno;
         x = numero_uno;}
    if ( numero_dos % contador_uno==0){
        numero_dos = numero_dos/contador_uno;
        if ( x == numero_uno){
            box = box * contador_uno;
            
        }
    }
}
cout << "El MCM es: " << box;
return 0;
}
 