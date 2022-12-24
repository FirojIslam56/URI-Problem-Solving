/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int x,y,t,r=0;
    cin>>x>>y;

    if(x>y){
        t=x;
        x=y;
        y=t;
    }

    for(int i=x+1;i<y;i++){
        if(i%2!=0){
           r=r+i;
        }
    }
    cout<<r<<endl;

    return 0;
}
