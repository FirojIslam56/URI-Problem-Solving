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
    int p1_code, p2_code, p1_unit, p2_unit;
    double p1_price, p2_price;
    double paid_amount;
    cin >> p1_code >> p1_unit >> p1_price >> p2_code >> p2_unit >> p2_price;
    paid_amount = p1_unit*p1_price + p2_unit*p2_price;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << paid_amount << endl;
    return 0;
}
