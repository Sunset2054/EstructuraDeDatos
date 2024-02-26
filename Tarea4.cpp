#include <iostream>
using namespace std;
int MCD (int a, int b);
int main()
{
    int a,b;
    cout<<"Ingrese el primer número: ";cin>>a;
    cout<<"Ingrese el segundo número: ";cin>>b;
    cout<<"El MCD es: "<<MCD(a,b)<<endl;

    return 0;
}
int MCD( int a, int b){
    if (a == 0) return b;
    return MCD(b % a, a);
}
