#pragma once
#include "Transport.h"

class Car : public Transport {
private: 
    string name;

public:
    Car() = default;
    Car(string n, string brn, string tf, int s);
    string GetName(); 
    void SetName(string n);

    void Show() const;

};

