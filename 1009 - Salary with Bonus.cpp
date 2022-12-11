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
    string name;
    double m_salary, o_salary, t_salary;
    cin >> name >> m_salary >> o_salary;
    t_salary = m_salary + o_salary * 15/100;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << t_salary << endl;
    return 0;
}
