#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b,c;
    double det;
    double solucion1;
    double solucion2;
    cout<<"Ingrese sus datos: "<<endl;
    cout<<"Letra a: "<<endl;
    cin>>a;
    cout<<"Letra b: "<<endl;
    cin>>b;
    cout<<"Letra c: "<<endl;
    cin>>c;
    if (a==0 ){cout<<"La ecuacion no se puede resolver"<<endl;}
    else if(a=!0){
        det=pow(b,2)-(4*((a)*(c)));
        if(det>=0){
        solucion1=((-b)-sqrt(det))/(2*(a));
        solucion2=((-b)+sqrt(det))/(2*(a));
        if(solucion1==solucion2){
            cout<<"La solucion es: "<<solucion1<<endl;
        }else{
            cout<<"La primera solucion es: "<<solucion1<<endl;
            cout<<"La segunda solucion es: "<<solucion1<<endl;
        }
    }
    else{
        cout<<"La o las soluciones son imaginarias "<<solucion1<<endl;
    }
    }

    return 0;
}
