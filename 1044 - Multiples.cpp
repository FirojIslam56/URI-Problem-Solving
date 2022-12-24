/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    if(b%a==0 || a%b==0){
        cout<<"Sao Multiplos"<<endl;
    }
    else{
        cout<<"Nao sao Multiplos"<<endl;
    }

    return 0;
}
