/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int arr[5];
    int a,b,c,i,j,t;
    cin>>a>>b>>c;

    arr[0]=a;
    arr[1]=b;
    arr[2]=c;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i]<arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }

    cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
    cout<<endl<<a<<endl<<b<<endl<<c<<endl;


    return 0;
}
