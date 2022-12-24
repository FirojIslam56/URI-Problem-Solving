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
    double x,y,media;
    for(int i=1;i<=100;i++){
        cin>>x;
        if(x<0||x>10){
            cout<<"nota invalida\n";
        }
        else{
            for(int j=1;j<=100;j++){
                cin>>y;
                if(y>=0&&y<=10){
                    break;
                }
                else{
                    cout<<"nota invalida\n";
                }
            }
            break;
        }
    }
    media=((x+y)/2);
    cout<<fixed<<setprecision(2)<<"media = "<<media<<endl;

    return 0;
}
