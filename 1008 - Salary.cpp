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
    int employe_number, working_hour;
    double received, salary;
    cin >> employe_number >> working_hour >> received;
    salary = working_hour * received;
    cout << "NUMBER = " << employe_number << "\nSALARY = U$ " << fixed << setprecision(2) << salary <<endl;
    return 0;
}
