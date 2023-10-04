#pragma once
#include <iostream>
#include <string>

using namespace std;

class Transport {
protected:
    string name;
    string TypeFuel;
    int MoveSpeed;

public:
    Transport() = default;  
    Transport(string n, string tf, int s);  
    virtual void Show() const;
};
