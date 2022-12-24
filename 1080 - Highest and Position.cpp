/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int i,temp=0,index,arr[100];

    for(i=0;i<100;i++){
        cin>>arr[i];
    }
    for(i=0;i<100;i++){
        if(arr[i]>temp){
            temp=arr[i];
            index=i+1;
        }
    }
    cout<<temp<<"\n"<<index<<endl;

    return 0;
}
