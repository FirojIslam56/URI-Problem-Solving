/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a,b,c,e,m1,m2,R1,R2;
    cin>>a>>b>>c;
    e=sqrt((b*b)-(4*a*c));
    if(e>=0)
    {
        m1=(-b+e);
        m2=(-b-e);
        if(m1==0 || m2==0)
        {
            cout<<"Impossivel calcular"<<endl;
        }
        else
        {
            R1=(m1/(2*a));
            R2=(m2/(2*a));
            cout<<fixed << setprecision(5)<<"R1 = "<<R1<<"\nR2 = "<<R2<<endl;
        }
    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }

    return 0;
}
