/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int x,y;
    for(int i=1;i<=100;i++){
        cin>>x>>y;

        if(x==y) break;
        else{
            if(x>y) cout<<"Decrescente\n";
            else if(x<y) cout<<"Crescente\n";
        }
    }

    return 0;
}
