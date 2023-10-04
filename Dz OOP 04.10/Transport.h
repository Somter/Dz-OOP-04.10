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

    // �������
    string GetName() const;
    string GetTypeFuel() const;
    int GetMoveSpeed() const;

    // �������
    void SetName(string n);
    void SetTypeFuel(string tf);
    void SetMoveSpeed(int s);
};
