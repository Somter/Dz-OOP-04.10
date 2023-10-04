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
