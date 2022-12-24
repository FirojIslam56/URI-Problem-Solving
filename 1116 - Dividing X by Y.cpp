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
    double x,y;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        if(y==0) cout<<"divisao impossivel\n";
        else{
           cout<<fixed<<setprecision(1)<<x/y<<endl;
        }
    }


    return 0;
}
