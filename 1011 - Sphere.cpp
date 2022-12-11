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
    double R, volume;
    double pi = 3.14159;
    cin >> R;
    volume = (4.0/3) * pi * R*R*R;
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
    return 0;
}
