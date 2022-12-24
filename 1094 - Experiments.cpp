/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double tanimal=0,tc=0,tr=0,ts=0,pc,pr,ps;
    cin>>n;

    int arr[n];
    char arr2[n];

    for(int i=0;i<n;i++){
        cin>>arr[i]>>arr2[i];

        tanimal=tanimal+arr[i];
        if(arr2[i]=='C') tc=tc+arr[i];
        else if(arr2[i]=='R') tr=tr+arr[i];
        else if(arr2[i]=='S') ts=ts+arr[i];
    }

    pc=((tc*100)/tanimal);
    pr=((tr*100)/tanimal);
    ps=((ts*100)/tanimal);

    cout<<"Total: "<<tanimal<<" cobaias\n";
    cout<<"Total de coelhos: "<<tc<<"\n";
    cout<<"Total de ratos: "<<tr<<"\n";
    cout<<"Total de sapos: "<<ts<<"\n";

    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<pc<<" %\n";
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<pr<<" %\n";
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<ps<<" %\n";


    return 0;
}
