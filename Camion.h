#ifndef CAMION_H_INCLUDED
#define CAMION_H_INCLUDED
#include "Vehiculo.h"
#include "Automovil.h"
class Camion : public Vehiculo
{
public:
    Camion();
    ~Camion();
    void setDimen(double);
    double getDimen();
private:
    double dim;
};
Camion::Camion()
{
    float d;
    int t;
    //string c;
    setVelocidad(d,t);
    //setColor(c);
}
void Camion::setDimen(double d)
{
    dim=d;
}
double Camion::getDimen()
{
    return this->dim;
}
Camion::~Camion(){}
#endif // CAMION_H_INCLUDED
