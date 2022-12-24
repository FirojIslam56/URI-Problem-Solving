/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int arr[6];
    int i,e=0,o=0,p=0,n=0;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
           e = e + 1;
        }
        else{
            o = o + 1;
        }

        if(arr[i]>0){
            p=p+1;
        }
        if(arr[i]<0){
            n=n+1;
        }
    }
    cout<<e<<" valor(es) par(es)\n"<<o<<" valor(es) impar(es)\n"<<p<<" valor(es) positivo(s)\n"<<n<<" valor(es) negativo(s)\n";

    return 0;
}
