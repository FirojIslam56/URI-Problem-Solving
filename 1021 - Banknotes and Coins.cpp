/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/

#include <iostream>

using namespace std;

int main() {
    double n;
    cin >> n;
    int temp = n*100;
    int t = temp/100;
    int p = temp%100;
    cout << "NOTAS:\n";
    cout<<t/100<<" nota(s) de R$ 100.00\n";
    t=t%100;
    cout<<t/50<<" nota(s) de R$ 50.00\n";
    t=t%50;
    cout<<t/20<<" nota(s) de R$ 20.00\n";
    t=t%20;
    cout<<t/10<<" nota(s) de R$ 10.00\n";
    t=t%10;
    cout<<t/5<<" nota(s) de R$ 5.00\n";
    t=t%5;
    cout<<t/2<<" nota(s) de R$ 2.00\n";
    t=t%2;

    cout << "MOEDAS:\n";
    p = p+(t*100);
    cout<<p/100<<" moeda(s) de R$ 1.00\n";
    p=p%100;
    cout<<p/50<<" moeda(s) de R$ 0.50\n";
    p=p%50;
    cout<<p/25<<" moeda(s) de R$ 0.25\n";
    p=p%25;
    cout<<p/10<<" moeda(s) de R$ 0.10\n";
    p=p%10;
    cout<<p/5<<" moeda(s) de R$ 0.05\n";
    p=p%5;
    cout<<p/1<<" moeda(s) de R$ 0.01"<<endl;


    return 0;
}
