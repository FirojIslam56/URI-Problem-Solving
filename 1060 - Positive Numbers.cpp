/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    double arr[6];
    int i,temp=0;
    for(i=0;i<6;i++){
        cin>>arr[i];
    }
    for(i=0;i<6;i++){
        if(arr[i]>=0){
           temp = temp + 1;
        }
    }
    cout<<temp<<" valores positivos"<<endl;

    return 0;
}
