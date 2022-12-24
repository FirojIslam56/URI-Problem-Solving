/*
    Name: Engr. Md. Firoj Islam
    Dept. of Computer Science & Engineering
    Email: firoj.cse3238@gmail.com
    Dhaka, Bangladesh
*/
#include <stdio.h>

int main() {
    int x, i;
    float n1,n2,n3,t,av;
    scanf("%d",&x);
    float result[x];
    for(i = 0;i < x;i++){
    scanf("%f %f %f", &n1,&n2,&n3);
    t = n1*2.0 + n2*3.0 + n3*5.0;
    av = t/10;
    result[i] = av;
    }
    for(i=0;i<x;i++){
    printf("%.1f\n", result[i]);
    }
    return 0;
}
