/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int s,e,t;
    cin>>s>>e;

    if(s<e){
        t=e-s;
        cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;
    }
    else{
        s = 24-s;
        t = e + s;
        cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;
    }

    return 0;
}
