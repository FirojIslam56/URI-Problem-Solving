/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>
using namespace std;

int main(){
    long int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << i << " " << i*i << " " << i*i*i <<endl;
        cout << i << " " << i*i+1 << " " << i*i*i+1 <<endl;
    }
    return 0;
}

