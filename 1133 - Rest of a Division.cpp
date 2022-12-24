/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cin >> x;
    cin >> y;

    if(x>y){
        z=x;
        x=y;
        y=z;
    }

    for(int i=x;i<y;i++){
        if(i>5 && i%5==2 || i%5==3){
            cout << i << endl;
        }
    }

    return 0;
}

