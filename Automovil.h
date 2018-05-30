#ifndef AUTOMOVIL_H_INCLUDED
#define AUTOMOVIL_H_INCLUDED
#include "Vehiculo.h"
#include <string>
using std::string;
using std::getline;
class Auto : public Vehiculo
{
private:
    string color;
public:
    Auto();
    ~Auto();
    //void setVelocidad(float);
    //float getVelocidad();
    void setColor(string);
    string getColor();
    //void setManejar();
    //float mostrarVelocidad();
} ;
Auto::Auto()
{
    float d;int t;
    setVelocidad(d,t);
    color="Sin Color";
}
void Auto::setColor(string c)
{
    color=c;
}
string Auto::getColor()
{
    return this->color;
}
Auto::~Auto(){}

#endif // AUTOMOVIL_H_INCLUDED
