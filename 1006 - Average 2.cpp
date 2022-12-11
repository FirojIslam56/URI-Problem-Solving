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
    double A, B, C, MEDIA;
    cin >> A >> B >> C;
    MEDIA = (A*2 + B*3 + C*5) / 10;
    cout << "MEDIA = " << fixed << setprecision(1) << MEDIA <<endl;
    return 0;
}
