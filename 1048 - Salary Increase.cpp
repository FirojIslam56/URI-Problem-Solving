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
    double x,n;
    int p;
    cin>>x;

    if(x>=0&&x<=400){
        p = 15;
        n = x*p/100;
        x = n + x;
    }
    else if(x>400&&x<=800){
        p = 12;
        n = x*p/100;
        x = n + x;
    }
    else if(x>800&&x<=1200){
        p = 10;
        n = x*p/100;
        x = n + x;
    }
    else if(x>1200&&x<=2000){
        p = 7;
        n = x*p/100;
        x = n + x;
    }
    else if(x>2000){
        p = 4;
        n = x*p/100;
        x = n + x;
    }

    cout<<fixed<<setprecision(2)<<"Novo salario: "<<x<<"\nReajuste ganho: "<<n<<"\nEm percentual: "<<p<<" %"<<endl;


    return 0;
}
