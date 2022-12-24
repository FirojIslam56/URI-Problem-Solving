/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    int al=0, ga=0, di=0;

    while(n!=4){
        cin >> n;
        if(n>=1 && n<=4){
            if(n==1) al++;
            else if(n==2) ga++;
            else if(n==3) di++;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << al <<endl;
    cout << "Gasolina: " << ga <<endl;
    cout << "Diesel: " << di <<endl;

    return 0;
}

