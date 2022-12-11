/*
    Author: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int n,y,m,d;
    cin >> n;
    y = n/365;
    d = n%365;
    m = d/30;
    d = d%30;

    cout<<y<<" ano(s)\n"<<m<<" mes(es)\n"<<d<<" dia(s)"<<endl;
    return 0;
}
