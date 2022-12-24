/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    string text;
    int h1,h2,m1,m2,s1,s2,d1,d2;

    cin>>text>>d1;
    cin>>h1>>text>>m1>>text>>s1;
    cin>>text>>d2;
    cin>>h2>>text>>m2>>text>>s2;

    s1=s2-s1;
    m1=m2-m1;
    h1=h2-h1;
    d1=d2-d1;

    if(s1<0){
        s1=s1+60;
        m1=m1-1;
    }
    if(m1<0){
        m1=m1+60;
        h1=h1-1;
    }
    if(h1<0){
        h1=h1+24;
        d1=d1-1;
    }

    cout<<d1<<" dia(s)\n"<<h1<<" hora(s)\n"<<m1<<" minuto(s)\n"<<s1<<" segundo(s)"<<endl;


    return 0;
}
