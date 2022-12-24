/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <iostream>
using namespace std;

int main(){
    int a,b;
    int inter = 0;
    int gremio = 0;
    int num_grenais = 0;
    int draw = 0;
    int response;

    while(1){
        cin >> a;
        cin >> b;

        if(a>b) inter++;
        else if(a<b) gremio++;
        else draw++;

        num_grenais++;

        cout << "Novo grenal (1-sim 2-nao)\n";

        cin >> response;
        if(response==1) continue;
        else if(response == 2) break;
    }

    cout << num_grenais << " grenais\n";
    cout << "Inter:" << inter << "\n";
    cout << "Gremio:" << gremio << "\n";
    cout << "Empates:" << draw << "\n";

    if(inter > gremio) cout << "Inter venceu mais\n";
    else if(inter < gremio) cout << "Gremio venceu mais\n";
    else cout << "Não houve vencedor\n";

    return 0;
}
