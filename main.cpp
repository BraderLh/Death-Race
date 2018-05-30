#include <iostream>
#include <string>
#include "Vehiculo.h"
#include "Automovil.h"
#include "Camion.h"
using namespace std;

int main()
{
    /*Vehiculo v1;
    float dis;
    int ti;
    cin>>dis;cin>>ti;
    v1.setVelocidad(dis,ti);
    cout<<v1.getVelocidad();*/
    Auto a1;
    float dis,a;
    int ti,b;
    double dime;
    string col,co;
    cout<<"AUTOMOVIL: "<<endl;
    cout<<"Ingrese la dist. del auto: ";
    cin>>dis;
    cout<<"Ingrese el time: ";
    cin>>ti;
    a1.setVelocidad(dis,ti);
    cout<<"Ingrese el color del auto: ";
    cin.ignore();
    getline(cin, col);
    a1.setColor(col);
    cout<<"Velocidad del Auto: "<<a1.getVelocidad()<<" km/h"<<endl;
    cout<<"Color del auto:"<<a1.getColor();
    cout<<endl;
    Camion c1;
    cout<<"\nCAMION: "<<endl;
    cout<<"Dist.  recorrida por el camion: ";
    cin>>a;
    cout<<"Tiempo recorrida por el camion: ";
    cin>>b;
    c1.setVelocidad(a,b);
    cout<<"Velocidad del Camion: "<<c1.getVelocidad()<<" km/h"<<endl;
    //cin.ignore();
    //getline(cin,co);
    //c1.setColor(co);
    cout<<"Dimension del Camion: ";
    cin>>dime;
    c1.setDimen(dime);
    cout<<"Dimension del Camion: "<<c1.getDimen()<<endl;

    return 0;
}
