/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int n,i;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]==0) cout<<"NULL"<<endl;
        else if(arr[i]%2==0 && arr[i]>0){
            cout<<"EVEN POSITIVE\n";
        }
        else if(arr[i]%2==0 && arr[i]<0){
            cout<<"EVEN NEGATIVE\n";
        }
        else if(arr[i]%2!=0 && arr[i]>0){
            cout<<"ODD POSITIVE\n";
        }
        else if(arr[i]%2!=0 && arr[i]<0){
            cout<<"ODD NEGATIVE\n";
        }
    }


    return 0;
}
