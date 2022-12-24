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
        if(x==0||y==0) break;
        else if(x>0&&y>0) cout<<"primeiro\n";
        else if(x>0&&y<0) cout<<"quarto\n";
        else if(x<0&&y<0) cout<<"terceiro\n";
        else if(x<0&&y>0) cout<<"segundo\n";
    }

    return 0;
}
