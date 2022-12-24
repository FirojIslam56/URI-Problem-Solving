/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int x,i;
    cin>>x;

    if(x%2==0){
        x=x+1;
        for(i=1;i<=6;i++){
            cout<<x<<endl;
            x=x+2;
        }
    }
    else{
        for(i=1;i<=6;i++){
            cout<<x<<endl;
            x=x+2;
        }
    }


    return 0;
}
