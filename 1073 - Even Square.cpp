/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=2;i<=n;i=i+2){
        int res = i*i;
        cout<<i<<"^2 = "<<res<<endl;
    }

    return 0;
}
