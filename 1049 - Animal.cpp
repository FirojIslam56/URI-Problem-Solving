/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>

using namespace std;

int main() {
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    if(s1=="vertebrado"){
        if(s2=="ave"){
            if(s3=="carnivoro"){
                cout<<"aguia";
            }
            else if(s3=="onivoro"){
                cout<<"pomba";
            }
        }
        else if(s2=="mamifero"){
            if(s3=="onivoro"){
                cout<<"homem";
            }
            else if(s3=="herbivoro"){
                cout<<"vaca";
            }
        }
    }
    else if(s1=="invertebrado"){
        if(s2=="inseto"){
            if(s3=="hematofago"){
                cout<<"pulga";
            }
            else if(s3=="herbivoro"){
                cout<<"lagarta";
            }
        }
        else if(s2=="anelideo"){
            if(s3=="hematofago"){
                cout<<"sanguessuga";
            }
            else if(s3=="onivoro"){
                cout<<"minhoca";
            }
        }
    }

    cout<<endl;
    return 0;
}
