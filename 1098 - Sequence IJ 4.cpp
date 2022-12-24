/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    double i,j,k=1;

    for(i=0;i<2;i=i+0.2){
        for(j=1;j<=3;j++){
            cout<<"I="<<i<<" J="<<k<<endl;
            k++;
        }
        k=k-2.8;
    }

    return 0;
}
