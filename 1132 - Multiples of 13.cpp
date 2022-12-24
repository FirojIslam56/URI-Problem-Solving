/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>
using namespace std;

int main(){
    int x,y,z,temp=0;
    cin >> x;
    cin >> y;

    if(x>y){
        z=x;
        x=y;
        y=z;
    }

    for(int i=x;i<=y;i++){
        if(i>=13 && i%13!=0){
            temp = temp + i;
        }
    }
    cout << temp <<endl;

    return 0;
}

