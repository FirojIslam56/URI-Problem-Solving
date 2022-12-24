/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int s_cd=c+d;
    int s_ab=a+b;
    if(b>c&&d>a&&s_cd>s_ab&&c>0&&d>0&&a%2==0){
        cout<<"Valores aceitos"<<endl;
    }
    else{
        cout<<"Valores nao aceitos"<<endl;
    }

    return 0;
}
