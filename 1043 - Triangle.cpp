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
    double a,b,c;
    cin>>a>>b>>c;

    if(a<b+c && b<a+c && c<a+b){
        cout<<fixed << setprecision(1)<<"Perimetro = "<<(a+b+c)<<endl;
    }
    else{
        double area = ((a+b)/2)*c;
        cout<<fixed << setprecision(1)<<"Area = "<<area<<endl;
    }

    return 0;
}
