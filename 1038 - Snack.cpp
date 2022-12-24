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
   int x,y;
   double total;
   cin>>x>>y;
   if(x==1){
    total=y*4.00;
    cout<<fixed << setprecision(2)<<"Total: R$ "<<total<<endl;
   }
   else if(x==2){
    total=y*4.50;
    cout<<fixed << setprecision(2)<<"Total: R$ "<<total<<endl;
   }
   else if(x==3){
    total=y*5.00;
    cout<<fixed << setprecision(2)<<"Total: R$ "<<total<<endl;
   }
   else if(x==4){
    total=y*2.00;
    cout<<fixed << setprecision(2)<<"Total: R$ "<<total<<endl;
   }
   else if(x==5){
    total=y*1.50;
    cout<<fixed << setprecision(2)<<"Total: R$ "<<total<<endl;
   }

    return 0;
}
