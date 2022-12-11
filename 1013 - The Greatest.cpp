/*
    Author: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int a, b, c, m_ab, m_abc;
    cin >> a >> b >> c;
    m_ab = (a + b + abs(a-b))/2;
    m_abc = (m_ab + c + abs(m_ab-c))/2;
    cout << m_abc << " eh o maior" << endl;
    return 0;
}
