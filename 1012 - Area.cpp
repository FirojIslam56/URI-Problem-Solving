/*
    Author: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A,B,C;
    double  triangle,circle,trapezium,square,rectangle;
    double pi = 3.14159;
    cin >> A >> B >> C;
    triangle = 0.5 * A * C;
    circle = pi * C*C;
    trapezium = 0.5 * (A+B) * C;
    square = B * B;
    rectangle = A * B;
    cout << fixed << setprecision(3) << "TRIANGULO: " << triangle<<"\nCIRCULO: "<<circle<<"\nTRAPEZIO: "<<trapezium<<"\nQUADRADO: "<<square<<"\nRETANGULO: "<<rectangle << endl ;
    return 0;
}
