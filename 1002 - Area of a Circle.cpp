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
    double A,R;
    double n=3.14159;
    cin >> R;
    A = n * R *R;
    std::cout << std::fixed;
    std::cout << std::setprecision(4);
    std::cout << "A=" << A << endl;
}
