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
    double s,t;
    cin>>s;

    if(s<=2000) cout<<"Isento"<<endl;
    else if(s>2000&&s<=3000){
        t=(s-2000)*.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<t<<endl;
    }
    else if(s>3000&&s<=4500){
        t=(s-3000)*.18 + 1000*.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<t<<endl;
    }
    else if(s>4500){
        t=(s-4500)*.28 + 1500*.18 + 1000*.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<t<<endl;
    }

    return 0;
}
