/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int n,i,in=0,out=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]>=10&&arr[i]<=20){
            in = in + 1;
        }
        else{
            out = out + 1;
        }
    }
    cout<<in<<" in\n"<<out<<" out"<<endl;


    return 0;
}
