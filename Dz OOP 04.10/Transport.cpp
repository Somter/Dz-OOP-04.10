#include "Transport.h"

Transport::Transport(string n, string tf, int s)
{
    name = n;
    TypeFuel = tf;
    MoveSpeed = s;
}

void Transport::Show() const
{
    cout << "Brand: ";
    cout << name << endl;
    cout << "Type fuel: ";
    cout << TypeFuel << endl;
    cout << "Speed: ";
    cout << MoveSpeed << " km/h" << endl;
}

string Transport::GetName() const {
    return name;
}

string Transport::GetTypeFuel() const {
    return TypeFuel;
}

int Transport::GetMoveSpeed() const {
    return MoveSpeed;
}

void Transport::SetName(string n) {
    name = n;
}

void Transport::SetTypeFuel(string tf) {
    TypeFuel = tf;
}

void Transport::SetMoveSpeed(int s) {
    MoveSpeed = s;
}

