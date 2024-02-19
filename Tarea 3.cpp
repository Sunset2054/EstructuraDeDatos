#include <iostream>
using namespace std;
void menu();
void potencia(float base, float exponente, float &resultado);
double factorial(int x);
double serie(int x, int p);

int main(void)
{
    
    int op;
    int x,p;
    float result;
    do
    {
        menu ();
        cout<<"Su Opcion: ";cin>>op;
        switch(op)
        {
            case 1:
            cout << "Ingrese la base: ";
                do {
                    cin >> x;
                }   while(x <= 0);
                cout << "Ingrese el exponente: ";
                do {
                    cin >> p;
                }   while(p <= 0);
                potencia(x, p, result);
                cout << "El resultado es :" << result << endl;
            break;
            case 2:
            cout<<" Ingrese el valor para el factorial : "<<endl;cin>>x;
            cout<<" El resultado es: "<<factorial(x)<<endl;
            break;
            
            case 3:
            cout<<" Ingrese el valor de x : "<<endl;cin>>x;
            cout<<" Ingrese hasta donde desea realizar la serie :"<<endl;cin>>p;
            cout<<" El resultado de la serie es: "<<serie(x,p)<<endl;
            break;
            
            case 0:
            cout<<"Gracias :)"<<endl;
            break;
            
            default:
            cout<<"Ingresa una opción válida"<<endl;
            
        }
    }
   while(op!=0);
}

void menu()
{
    cout<<"         M E N U"<<endl;
    cout<<"          -----"<<endl;
    cout<<"         OPCIONES"<<endl;
    cout<<"     --------------"<<endl;
    cout<<" 1. Encontrar la potencia "<<endl;
    cout<<" 2. Encontrar el Factorial"<<endl;
    cout<<" 3. El valor de la serie"<<endl;
    cout<<" 0. FIN"<<endl;
}
void potencia(float base, float exponente, float &r) 
{
    r = 1;
    for (int i = 1; i <= exponente; i++) 
        r *= base;
}
double factorial(int x){
    int S=1;
    for(int i=1;i<=x;i++){
        S*=i;
    }
    return S;
}
double serie(int x, int p){
    double S=0;
    float result = 3, m;
    double r=0;
    switch(p){
    case 1:
        S=3;
        return S;
        break;
    case 2:
        S=3 +x;
        return S;
        break;
    default:
        for (int i = 0; i < p; i++) {
        potencia(x, p, m);
        result = result + (m / factorial(i));
    }
    return result;
}
        
    
    }
