/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int sh,sm,eh,em,th,tm;
    cin>>sh>>sm>>eh>>em;

    if(sh==eh&&sm==em)
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else if(sh==eh&&sm!=em)
    {
        if(sm<em)
        {
            th = 0;
            tm=em-sm;
        }
        else
        {
            th=23;
            sm=60-sm;
            tm=em+sm;
        }
        cout<<"O JOGO DUROU "<<th<<" HORA(S) E "<<tm<<" MINUTO(S)"<<endl;
    }
    else if(sh<eh)
    {
        th=eh-sh;
        if(sm==em || sm<em)
        {
            tm=em-sm;
            cout<<"O JOGO DUROU "<<th<<" HORA(S) E "<<tm<<" MINUTO(S)"<<endl;
        }
        else
        {
            sm=60-sm;
            tm=em+sm;
            th=th-1;
            cout<<"O JOGO DUROU "<<th<<" HORA(S) E "<<tm<<" MINUTO(S)"<<endl;
        }
    }
    else if(sh>eh)
    {
        sh = 24-sh;
        th = eh + sh;
        if(sm==em || sm<em)
        {
            tm=em-sm;
            cout<<"O JOGO DUROU "<<th<<" HORA(S) E "<<tm<<" MINUTO(S)"<<endl;
        }
        else
        {
            sm=60-sm;
            tm=em+sm;
            th=th-1;
            cout<<"O JOGO DUROU "<<th<<" HORA(S) E "<<tm<<" MINUTO(S)"<<endl;
        }
    }
    else
    {
        cout<<"Wrong input"<<endl;
    }

    return 0;
}
