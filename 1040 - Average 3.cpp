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
    double n1,n2,n3,n4,temp;
    double avg,avg2;
    cin>>n1>>n2>>n3>>n4;
    avg = (n1*2+n2*3+n3*4+n4*1)/10;

    if(avg>=7.0)
    {
        cout<<fixed << setprecision(1)<<"Media: "<<avg;
        cout<<"\nAluno aprovado.";
    }
    else if(avg>=5.0&&avg<7)
    {
        cin>>temp;
        cout<<fixed << setprecision(1)<<"Media: "<<avg;
        cout<<"\nAluno em exame.";
        cout<<fixed << setprecision(1)<<"\nNota do exame: "<<temp;
        avg2 = ((avg + temp)/2);
        if(avg2>=5.0)
        {
            cout<<"\nAluno aprovado.";
        }
        else
        {
            cout<<"\nAluno reprovado.";
        }
        cout<<fixed << setprecision(1)<<"\nMedia final: "<<avg2;
    }
    else
    {
        cout<<fixed << setprecision(1)<<"Media: "<<avg;
        cout<<"\nAluno reprovado.";
    }

    cout<<endl;

    return 0;
}
