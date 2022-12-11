/*
    Author: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int n,h,m,s;
    cin >> n;
    m=n/60;
    h=m/60;
    m=m%60;
    s=n%60;
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
