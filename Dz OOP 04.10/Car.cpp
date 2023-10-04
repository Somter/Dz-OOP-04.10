#include "Car.h"

Car::Car(string n, string brn, string tf, int s): Transport(brn, tf, s) 
{
    name = n;
}

string Car::GetName()
{
    return name;
}

void Car::Show() const 
{
    cout << "Transport: " << name << endl;
    Transport::Show();
}
