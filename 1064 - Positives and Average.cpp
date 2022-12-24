/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n,temp=0;
    int po=0,ne=0;

    for(int i=1;i<=6;i++){
        cin>>n;
        if(n>=0){
            po++;
            temp = temp+n;
        }
    }
    cout<<fixed<<setprecision(1)<<po<<" valores positivos\n"<<temp/po<<endl;

    return 0;
}
