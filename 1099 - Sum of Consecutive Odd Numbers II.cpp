/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    int n,x,y,i,j,t,res=0;
    cin>>n;

    for(i=1;i<=n;i++){
        cin>>x>>y;

        if(x>y){
            t=x;
            x=y;
            y=t;
        }
        x++;
        for(j=x;j<y;j++){
            if(j%2!=0){
                res = res + j;
            }
        }
        cout<<res<<endl;
        res=0;

    }

    return 0;
}
