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
    int distance;
    double liters, km_litter;
    cin >> distance >> liters;
    km_litter = (distance / liters);
    cout << fixed << setprecision(3) << km_litter << " km/l" << endl;
    return 0;
}
