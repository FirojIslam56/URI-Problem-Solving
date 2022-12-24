/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int a,b,temp,sum=0;
    for(int j=1; j<=100; j++)
    {
        cin>>a>>b;
        if(a<=0||b<=0)
        {
            break;
        }
        else
        {
            if(a>b)
            {
                temp=a;
                a=b;
                b=temp;
            }
            for(int i=a; i<=b; i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<"Sum="<<sum<<endl;
              sum=0;
        }
    }


    return 0;
}
