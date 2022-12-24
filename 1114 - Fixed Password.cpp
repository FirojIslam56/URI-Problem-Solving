/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int x;
    for(int i=1;i<=100;i++){
        cin>>x;
        if(x==2002){
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else{
            cout<<"Senha Invalida"<<endl;
        }
    }

    return 0;
}
